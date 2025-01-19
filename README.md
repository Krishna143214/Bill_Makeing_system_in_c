
<h1>#Billing Machine System  </h1>

## Overview  
The **Billing Machine System** is a C-based console application designed for small to medium retail businesses to streamline the billing process. This program allows shopkeepers to manage customer details, categorize products, calculate costs, and generate invoices. It supports storing invoices for printing and archival purposes.

---

## Features  
1. **Customer Management**:  
   - Input customer name, phone number, and ID.  
2. **Product Categories**:  
   - Cosmetics  
   - Grocery  
   - Beverages  
3. **Billing Functionality**:  
   - Quantity-based billing for each product.  
   - Categorized subtotal and grand total calculations.  
4. **File Handling**:  
   - Stores detailed invoices in `for_print.txt` for printing.  
   - Archives invoices in `invoice_storage.txt`.  
5. **Dynamic Interface**:  
   - Menu-driven system for seamless user interaction.  

---

## Product List and Pricing  

### Cosmetics:  
| Product       | Price (₹) |  
|---------------|-----------|  
| Baby Soap     | 20        |  
| Body Lotion   | 30        |  
| Hair Spray    | 35        |  
| Deo           | 15        |  

### Grocery:  
| Product       | Price (₹) |  
|---------------|-----------|  
| Sugar         | 40        |  
| Flour         | 23        |  
| Cooking Oil   | 180       |  
| Rice          | 70        |  
| Pulses        | 140       |  
| Spices        | 280       |  

### Beverages:  
| Product       | Price (₹) |  
|---------------|-----------|  
| Cold Coffee   | 50        |  
| Coke          | 20        |  
| Thums Up      | 20        |  
| Sprite        | 20        |  
| Limca         | 20        |  
| Mazza         | 10        |  

---

## How to Use  

1. **Run the Program**:  
   Compile and run the program using a C compiler (e.g., GCC):  
   ```bash
   gcc billing_machine.c -o billing_machine
   ./billing_machine
   ```  

2. **Enter Customer Details**:  
   - Provide customer name, phone number, and ID.  

3. **Choose Product Category**:  
   - Select a category (Cosmetics, Grocery, Beverages).  

4. **Add Products**:  
   - Choose a product, specify the quantity, and repeat for other items.  

5. **Checkout**:  
   - View itemized billing, subtotals, and grand total.  

6. **Generate Invoice**:  
   - Invoice is stored in `for_print.txt` and `invoice_storage.txt`.  

---

## File Descriptions  

- **for_print.txt**:  
  Contains the invoice details for printing.  
- **invoice_storage.txt**:  
  Archives all past invoices for future reference.  

---

## Code Structure  

### Main Components  
1. **Customer Details Input**:  
   - Captures `name`, `phone number`, and `ID`.  

2. **Product Selection**:  
   - Menu-driven interface for selecting and adding products.  

3. **Billing Calculation**:  
   - Subtotals for each category and a grand total are calculated dynamically.  

4. **Invoice Generation**:  
   - Writes detailed invoices into two text files using file handling in C.  

5. **Menu Control**:  
   - Nested loops handle the navigation between categories and the checkout process.  

---

## Limitations  

- Limited to predefined product categories and prices.  
- No support for dynamic addition of new products.  
- Only supports single-user operation at a time.  

---

## Future Enhancements  

1. Support for dynamic product addition and price updates.  
2. Multi-user support with real-time data saving.  
3. Enhanced UI/UX for better interaction.  
4. Integration with database systems for robust data management.  

---

## Requirements  

- **Compiler**: GCC or any standard C compiler.  
- **Operating System**: Windows/Linux/MacOS.  

---

## Author  
Developed by a retail-focused programmer to ease the billing process for small businesses.  

For queries or enhancements, feel free to reach out!  
