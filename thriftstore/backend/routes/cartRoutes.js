const express = require("express");
const { addToCart, viewCart, removeFromCart } = require("../controllers/cartController"); // ✅ Fixed path
const authMiddleware = require("../middleware/authMiddleware"); // ✅ Fixed path

const router = express.Router();

router.post("/add", authMiddleware, addToCart);
router.get("/", authMiddleware, viewCart);
router.delete("/remove/:id", authMiddleware, removeFromCart);

module.exports = router;

