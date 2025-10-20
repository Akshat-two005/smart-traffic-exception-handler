# smart-traffic-exception-handler
A simple C++ program that simulates a smart traffic control system using basic exception handling. The code checks and handles errors like sensor inactivity, invalid vehicle count, Time input, etc. using simple try-catch block.
A simple C++ program that simulates a smart traffic control system using basic exception handling.
The program manages traffic signal timing and detects invalid inputs to ensure smooth operation.

🚦 Features

Simulates traffic light control (Red, Yellow, Green)

Uses try-catch blocks for handling invalid time or signal inputs

Displays smooth transition between signals

Beginner-friendly code with clear logic

⚙️ Technologies Used

Language: C++

Concepts: Exception Handling, Control Structures, Functions

▶️ How to Run

Clone the repository

git clone https://github.com/yourusername/smart-traffic-control-cpp.git


Navigate to the folder

cd smart-traffic-control-cpp


Compile the program

g++ smart_traffic.cpp -o smart_traffic


Run the executable

./smart_traffic

💡 Example
Enter signal time (in seconds): -5
Exception: Invalid time entered! Time must be positive.
