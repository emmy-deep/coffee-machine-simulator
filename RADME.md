Automated Coffee and Tea Ordering System (C Language)
📖 Overview
This project is a console-based beverage ordering system written in C.
It allows customers to order hot coffee, cold coffee, simple tea, or masala tea, customize their drinks (size, milk, sugar), and process payments with change calculation.
The system can serve multiple customers and collects feedback after each order.
⚙️ Features
🧾 Menu-driven interface
🧍 Multi-customer handling
🧊 Options for drink type, size, milk, and sugar
💰 Billing and payment with change return
💬 Customer feedback collection
✅ Input validation for all entries
🧠 Concepts Used
Conditional statements (if, switch)
Loops (do-while, while)
Input validation
String handling with fgets()
Arithmetic operations for billing
🧩 Program Flow
Display the beverage menu
Take customer input (choice, size, sugar, milk)
Validate inputs
Calculate total cost
Process payment and provide change
Collect feedback
Ask if next customer wants to order
🧮 Sample Output
--- Welcome Customer #1 ---
Menu:
1. Hot Coffee
2. Cold Coffee
3. Simple Tea
4. Masala Tea
Enter your choice (1-4): 1
How many cups? (Max 15): 2
Choose cup size: S (Small), M (Medium), L (Large): M
Do you want milk? (Y/N): Y
How many teaspoons of sugar per cup? (0 to 5): 2
Total Bill: 80.00
Enter money to pay: 100
Your change: 20.00
Thank you for your purchase!
Please give us your feedback: Great taste!
Your feedback: Great taste!
Next customer? (Y/N): N
Machine shutting down. Have a nice day!
🧰 Technologies Used
Language: C
Compiler: GCC / Turbo C
Environment: Command-line (Console application)
🚀 How to Run
Clone the repository:
git clone https://github.com/<your-username>/coffee-tea-ordering-system-c.git
Compile the code:
gcc coffee_tea_system.c -o coffee_tea_system
Run the program:
./coffee_tea_system
🧑‍💻 Author Emanuel chauhan and Rajdeep kaur
🎓 Student at chandigarh university
📧 Email: emmanuelchauhan93@gmail.com or rajdeepkxur@gmail.com
]
📄 License
This project is open source and available under the MIT License.
