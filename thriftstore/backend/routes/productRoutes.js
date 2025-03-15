const express = require("express");
const { getAllProducts } = require("../controllers/productController"); // ✅ Fixed path

const router = express.Router();

router.get("/", getAllProducts);

module.exports = router;
