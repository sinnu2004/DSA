const Cart = require("./authController.js");
const Product = require("./productController.js");

exports.addToCart = async (req, res) => {
    try {
        const { product_id } = req.body;
        const user_id = req.user.id;

        let cart = await Cart.findOne({ user: user_id });

        if (!cart) {
            cart = new Cart({ user: user_id, products: [] });
        }

        const productExists = cart.products.find(p => p.product.toString() === product_id);

        if (productExists) {
            productExists.quantity += 1;
        } else {
            cart.products.push({ product: product_id, quantity: 1 });
        }

        await cart.save();
        res.json({ message: "Product added to cart" });
    } catch (err) {
        res.status(500).json({ error: "Error adding to cart" });
    }
};

exports.viewCart = async (req, res) => {
    try {
        const cart = await Cart.findOne({ user: req.user.id }).populate("products.product");
        res.json(cart);
    } catch (err) {
        res.status(500).json({ error: "Error fetching cart" });
    }
};

exports.removeFromCart = async (req, res) => {
    try {
        const { product_id } = req.body;
        const cart = await Cart.findOne({ user: req.user.id });

        cart.products = cart.products.filter(p => p.product.toString() !== product_id);

        await cart.save();
        res.json({ message: "Product removed from cart" });
    } catch (err) {
        res.status(500).json({ error: "Error removing from cart" });
    }
};
