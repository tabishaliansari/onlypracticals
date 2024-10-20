## Instructions

### Step 1: Setting up the Database
1. Open your MySQL interface (e.g., phpMyAdmin).
2. Create a new database named `shop`.
3. Create a table named `products` with the following columns:
   - id (INT, Primary Key, Auto Increment)
   - name (VARCHAR(100))
   - price (DECIMAL(10, 2))
   - description (TEXT)
4. Insert a few records into the `products` table.

Example SQL for creating and inserting records:

```sql
CREATE DATABASE shop;

USE shop;

CREATE TABLE products (
    id INT(11) AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    price DECIMAL(10, 2) NOT NULL,
    description TEXT
);

INSERT INTO products (name, price, description) VALUES
('ASUS ROG Strix G15 Ryzen 9 5900HX RTX 3060', 130000.00, 'High-performance gaming laptop with Ryzen 9 CPU, RTX 3060 GPU, 16GB RAM.'),
('Logitech G Pro Wireless Gaming Mouse', 8500.00, 'Wireless gaming mouse with HERO 25K sensor, lightweight design, and RGB.'),
('Corsair K95 RGB Mechanical Gaming Keyboard', 14000.00, 'High-performance mechanical gaming keyboard with Cherry MX switches.'),
('HyperX Cloud II Gaming Headset', 8000.00, 'Comfortable gaming headset with 7.1 surround sound and noise-canceling mic.'),
('Thermaltake Massive 20 RGB Cooling Pad', 6000.00, 'Cooling pad with customizable RGB lighting and a large 200mm fan.'),
('Elgato Stream Deck Mini', 10000.00, 'Compact customizable control pad with 6 LCD buttons for streaming setups.'),
('ASUS ROG Rapture GT-AX11000 Gaming Router', 30000.00, 'High-performance tri-band Wi-Fi 6 gaming router with 10Gbps networking.');

```

### Step 2: PHP Script to Connect to MySQL and Display Records
1. Create a new PHP file named `display_products.php` in your project folder.
2. Write the PHP code to connect to the MySQL database and retrieve all products.

### Step 3: Running the PHP Script
1. Save the PHP file and place it in your server's directory (e.g., `htdocs` for XAMPP).
2. Open your browser and navigate to `http://localhost/display_products.php`.
3. Verify that the products are displayed in a table format.

