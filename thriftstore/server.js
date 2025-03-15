const express = require("express");
const dotenv = require("dotenv");
const mongoose = require("mongoose");
const cors = require("cors");
const fs = require("fs");
const path = require("path");

dotenv.config();

// Check if .env file exists
if (!fs.existsSync(".env")) {
    console.warn("⚠️ Warning: .env file not found!");
}

// Check if MONGO_URI is available
if (!process.env.MONGO_URI) {
    console.error("❌ MONGO_URI is not defined. Please check your .env file.");
    process.exit(1);
}

// Import Routes
const authRoutes = require("./backend/routes/authRoutes.js");
const productRoutes = require("./backend/routes/productRoutes.js");
const cartRoutes = require("./backend/routes/cartRoutes.js");

const app = express();
app.use(express.json());

// ✅ CORS Configuration (Allow Frontend Requests)
const corsOptions = {
    origin: "http://127.0.0.1:5500", // Allow frontend Live Server
    methods: "GET,POST,PUT,DELETE",
    credentials: true
};
app.use(cors(corsOptions));

// ✅ Connect to MongoDB
const connectDB = async () => {
    try {
        await mongoose.connect(process.env.MONGO_URI);
        console.log("✅ MongoDB Connected...");
    } catch (err) {
        console.error("❌ MongoDB connection error:", err);
        process.exit(1);
    }
};

connectDB();

// Routes
app.use("/api/auth", authRoutes);
app.use("/api/products", productRoutes);
app.use("/api/cart", cartRoutes);

// ✅ Serve Frontend Files from `paroo`
app.use(express.static(path.join(__dirname, "paroo")));

// ✅ Handle Page Refresh and Direct Navigation
app.get("*", (req, res) => {
    const filePath = path.join(__dirname, "paroo", req.path);
    
    if (fs.existsSync(filePath) && fs.lstatSync(filePath).isFile()) {
        res.sendFile(filePath);
    } else {
        res.sendFile(path.join(__dirname, "paroo", "index.html")); // Load homepage for unknown routes
    }
});

// Start Server
const PORT = process.env.PORT || 8000;
app.listen(PORT, () => {
    console.log(`🚀 Server running on http://localhost:${PORT}`);
});
