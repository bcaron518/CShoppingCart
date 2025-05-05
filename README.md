# C Shopping Cart Application

## Overview
The **C Shopping Cart Application** is a command-line program written in C that simulates the functionality of an e-commerce shopping cart. It includes features like user registration (signup), login, browsing items by shops or categories, adding items to a cart, and managing orders. 

This project is designed to demonstrate modular programming in C while providing a practical example of a shopping cart system.

---

## Features
1. **User Authentication**:
   - Signup with validation for name, email, password, phone, and age.
   - Login functionality with user credentials.

2. **Shopping**:
   - Choose items by browsing shops.
   - Search items directly across multiple shops.

3. **Cart Management**:
   - Add items to the cart.
   - View total cost and confirm the order.
   - Cancel orders if needed.

4. **Shop Initialization**:
   - Predefined shops with available items and their prices.

5. **Input Validations**:
   - Validates user inputs like email format, strong passwords, and mobile numbers.
   - Ensures no duplicate accounts.

---

## File Structure
The project is organized into modular files for better maintainability:

- **Header Files**:
  - `main.h`: Contains global variables, structure definitions, and function prototypes.
  - `validation.h`: Function prototypes for input validation.
  - `shop.h`: Function prototypes for shopping and cart-related features.

- **Source Files**:
  - `main.c`: Entry point of the program, handles overall flow.
  - `signup.c`: Handles user registration and login.
  - `shop.c`: Manages shop browsing, item selection, and cart functionalities.
  - `validation.c`: Implements input validation logic.

- **Build File**:
  - `Makefile`: Automates the build process.

---

## Prerequisites
- GCC Compiler: Ensure you have a GCC compiler installed to build the project.

---

## Compilation and Execution

To compile and run the project:

1. Clone this repository:
   ```bash
   git clone https://github.com/bcaron518/CShoppingCart.git
   cd CShoppingCart

2. Build the program:

   ```bash
   make
   
3. Run the executable:

  ```bash
  ./shopcart

4. Clean up build files (optional):

```bash
   make clean

---

## How It Works

Signup and Login:

Users must first sign up by providing valid information.
Returning users can log in with their credentials.
Shopping:

Users can browse shops or directly search for items.
Each shop offers a variety of items with fixed prices.

Cart:

Add items to the cart by specifying quantities.
View the total cost and confirm or cancel orders.
Order Confirmation:

Users can confirm their orders, after which the program exits.
Example Shops and Items
The application comes preloaded with the following shops and items:

Puma
- Puma Sneaker V2: $3499
- Men's Dryflex: $2999
- One8x Puma: $5999
- US Polo
- US Polo T-Shirt: $999
- Shoes: $2000
- Shirt: $1499
- WROGN
- Men's Watch: $2000
- Men's Solid Jacket: $2239
- Casual T-Shirt: $799

## Code Highlights
Input Validation:

Ensures strong passwords (uppercase, lowercase, numbers, special characters).
Checks email formatting and mobile number validity.
Modular Design:

Splits the program into smaller files for better readability and maintenance.
Dynamic Cart Calculation:

Calculates the total cost based on user-selected items and quantities.

## License
This repository is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as needed for your projects.

## Author
Benjamin Caron - https://github.com/bcaron518

## Contributing
If you'd like to contribute to this repository or improve the code examples, please feel free to open an issue or submit a pull request. Your contributions are welcome.
