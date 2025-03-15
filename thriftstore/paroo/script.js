// Wait for DOM to load
document.addEventListener("DOMContentLoaded", async function () {
    const API_BASE_URL = "http://127.0.0.1:8000/api/"; // Change to your deployed API URL if needed

    // ==========================
    // USER AUTHENTICATION (Signup & Login)
    // ==========================

    const signupForm = document.querySelector("#signup-form");
    const loginForm = document.querySelector("#login-form");

    // Signup Function
    signupForm?.addEventListener("submit", async function (e) {
        e.preventDefault();

        const username = document.querySelector("#signup-name").value.trim();
        const password = document.querySelector("#signup-password").value.trim();

        if (!username || !password) {
            alert("All fields are required.");
            return;
        }

        const response = await fetch(`${API_BASE_URL}signup/`, {
            method: "POST",
            headers: { "Content-Type": "application/json" },
            body: JSON.stringify({ username, password }),
        });

        const data = await response.json();
        if (response.ok) {
            alert("Signup successful! Please log in.");
            window.location.href = "login.html";
        } else {
            alert(data.error || "Signup failed.");
        }
    });

    // Login Function
    loginForm?.addEventListener("submit", async function (e) {
        e.preventDefault();

        const username = document.querySelector("#login-email").value.trim();
        const password = document.querySelector("#login-password").value.trim();

        const response = await fetch(`${API_BASE_URL}login/`, {
            method: "POST",
            headers: { "Content-Type": "application/json" },
            body: JSON.stringify({ username, password }),
        });

        const data = await response.json();
        if (response.ok) {
            localStorage.setItem("token", data.token);
            localStorage.setItem("user", JSON.stringify({ username }));
            alert(`Welcome back, ${username}!`);
            window.location.href = "home.html";
        } else {
            alert("Invalid email or password.");
        }
    });

    // Logout Function
    document.querySelector("#logout-btn")?.addEventListener("click", function () {
        localStorage.removeItem("token");
        localStorage.removeItem("user");
        alert("Logged out successfully.");
        window.location.href = "login.html";
    });

    // ==========================
    // PRODUCT FETCHING (Shop Page)
    // ==========================

    const productContainer = document.querySelector("#product-list");
    if (productContainer) {
        const response = await fetch(`${API_BASE_URL}products/`);
        const products = await response.json();

        productContainer.innerHTML = products
            .map(
                (product) => `
            <div class="product">
                <img src="${API_BASE_URL}media/${product.image}" alt="${product.name}">
                <h3>${product.name}</h3>
                <p>${product.description}</p>
                <p><strong>$${product.price}</strong></p>
                <button class="add-to-cart" data-product-id="${product.id}">Add to Cart</button>
            </div>
        `
            )
            .join("");

        // Attach event listeners for Add to Cart
        document.querySelectorAll(".add-to-cart").forEach((button) => {
            button.addEventListener("click", async function () {
                const productId = this.getAttribute("data-product-id");

                const response = await fetch(`${API_BASE_URL}cart/add/`, {
                    method: "POST",
                    headers: {
                        "Content-Type": "application/json",
                        "Authorization": `Bearer ${localStorage.getItem("token")}`,
                    },
                    body: JSON.stringify({ product_id: productId }),
                });

                const data = await response.json();
                if (response.ok) {
                    alert("Product added to cart!");
                    updateCartCount();
                } else {
                    alert(data.error || "Failed to add product.");
                }
            });
        });
    }

    // ==========================
    // CART FUNCTIONALITY (Cart Page)
    // ==========================

    const cartContainer = document.querySelector("#cart-items");
    if (cartContainer) {
        const response = await fetch(`${API_BASE_URL}cart/view/`, {
            headers: { "Authorization": `Bearer ${localStorage.getItem("token")}` },
        });

        const cartItems = await response.json();
        cartContainer.innerHTML = cartItems
            .map(
                (item) => `
            <div class="cart-item">
                <h3>${item.name}</h3>
                <p>Price: $${item.price}</p>
                <button class="remove-from-cart" data-product-id="${item.id}">Remove</button>
            </div>
        `
            )
            .join("");

        // Remove from cart functionality
        document.querySelectorAll(".remove-from-cart").forEach((button) => {
            button.addEventListener("click", async function () {
                const productId = this.getAttribute("data-product-id");

                const response = await fetch(`${API_BASE_URL}cart/remove/`, {
                    method: "POST",
                    headers: {
                        "Content-Type": "application/json",
                        "Authorization": `Bearer ${localStorage.getItem("token")}`,
                    },
                    body: JSON.stringify({ product_id: productId }),
                });

                const data = await response.json();
                if (response.ok) {
                    alert("Product removed from cart!");
                    location.reload(); // Refresh cart page
                } else {
                    alert(data.error || "Failed to remove product.");
                }
            });
        });
    }

    // ==========================
    // UPDATE CART COUNT
    // ==========================
    async function updateCartCount() {
        const response = await fetch(`${API_BASE_URL}cart/count/`, {
            headers: { "Authorization": `Bearer ${localStorage.getItem("token")}` },
        });

        const data = await response.json();
        document.querySelector("#cart-count").textContent = data.count;
    }

    // Call function to update cart count on page load
    updateCartCount();
});

