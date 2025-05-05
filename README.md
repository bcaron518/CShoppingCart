# C Shopping Cart Application

## Overview
The C Shopping Cart Application is a command-line program written in C that simulates an e-commerce shopping cart. It allows users to register, log in, browse items by shops or categories, add items to a cart, and manage orders. This project demonstrates modular programming in C while providing a practical example of a shopping system.

---

## Features

1. **User Authentication**
   - **Signup**: Validates user information, including name, email, password, phone number, and age.
   - **Login**: Enables users to log in with their credentials.

2. **Shopping**
   - **Browse Shops**: View available items categorized by shops.
   - **Search Items**: Find products across multiple shops.

3. **Cart Management**
   - **Add to Cart**: Select and store items before purchasing.
   - **Order Summary**: View total cost and confirm orders.
   - **Cancel Orders**: Remove items if necessary.

4. **Shop Initialization**
   - **Predefined Shops**: Includes a selection of items with fixed prices.

5. **Input Validation**
   - **Secure Credentials**: Enforces strong password creation (uppercase, lowercase, numbers, special characters).
   - **Email & Phone Validation**: Ensures correct formatting.
   - **Duplicate Prevention**: Avoids duplicate user accounts.

---

## File Structure

The project is organized into modular files for better maintainability:

### Header Files
- **`main.h`** – Contains global variables, structure definitions, and function prototypes.
- **`validation.h`** – Function prototypes for input validation.
- **`shop.h`** – Function prototypes for shopping and cart functionalities.

### Source Files
- **`main.c`** – Entry point, handles overall program flow.
- **`signup.c`** – Manages user registration and login.
- **`shop.c`** – Implements shop browsing, item selection, and cart management.
- **`validation.c`** – Handles input validation logic.

### Build File
- **`Makefile`** – Automates compilation and cleanup.

---

## Prerequisites

Ensure you have the following installed:
- **GCC Compiler** – Required to compile the project.

---

## Compilation and Execution

To compile and run the program:
1. Clone the repository:
   ```bash
   git clone https://github.com/bcaron518/CShoppingCart.git
   cd CShoppingCart
   ```
2. Build the program:
   ```bash
   make
   ```
3. Run the executable:
   ```bash
   ./shopcart
   ```
4. (Optional) Clean up build files:
   ```bash
   make clean
   ```

---

## How It Works

### Signup & Login
- **New Users**: Must sign up with valid information.
- **Returning Users**: Log in with existing credentials.

### Shopping
- Browse shops to view available items.
- Use the search function to find specific products.

### Cart Management
- Add items by specifying quantity.
- View total cost and confirm or cancel orders.

### Order Confirmation
- Users finalize purchases before exiting the application.

---

## Example Shops & Items

The application includes predefined shops with various items:

### Puma
- Puma Sneaker V2 – $3499
- Men's Dryflex – $2999
- One8x Puma – $5999

### US Polo
- US Polo T-Shirt – $999
- Shoes – $2000
- Shirt – $1499

### WROGN
- Men's Watch – $2000
- Men's Solid Jacket – $2239
- Casual T-Shirt – $799

---

## Code Highlights

- **Input Validation**: Strong password enforcement, email, and mobile number verification.
- **Modular Design**: Organized into separate files for maintainability.
- **Dynamic Cart Calculation**: Computes total cost based on selected items and quantities.

---

## License

This project is licensed under the [MIT License](LICENSE). You are free to use and modify the code as needed.

---

## Author

Developed by **Benjamin Caron**  
GitHub: [bcaron518](https://github.com/bcaron518)

---

## Contributing

Contributions are welcome!  
- Open an issue for suggestions or bug reports.
- Submit a pull request to improve functionality.

---
