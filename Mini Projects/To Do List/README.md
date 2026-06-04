# 📝 C++ Command-Line Task Manager
## 🚀 Project Overview
This is a lightweight, fully functional command-line Task Management application built entirely in C++. The primary goal of this project was to move beyond basic C++ syntax and put core software design principles into practice. By building this utility, I focused on writing clean, efficient, and well-structured code to solidify my understanding of object-oriented programming and memory management.

## ✨ Features
Add Tasks: Create new tasks with a custom name.

Priority Assignment: Categorize tasks by urgency (High, Medium, Low).

View Task List: Display a clearly formatted list of all current tasks and their statuses.

Dynamic Sorting: Automatically sort the task list so that the highest priority items appear first.

Task Completion: Mark specific tasks as completed to track progress.


## 🧠 Technical Concepts Applied
This project heavily leverages modern C++ mechanics to ensure efficiency and type safety:

Object-Oriented Programming: Utilized classes and encapsulation to bundle task data and feature methods together cleanly.

Standard Template Library (STL): Managed dynamic arrays using std::vector and applied <algorithm> functions like std::sort.

Operator Overloading: Designed a custom < operator within the task class to teach the sorting algorithm exactly how to arrange objects based on priority.

Scoped Enumerations: Implemented enum class to represent priority levels, ensuring type-safe and readable code compared to using raw integers.

Memory Optimization: Used pass-by-const-reference for function parameters to prevent unnecessary copying of objects, improving overall performance.

Input Buffer Management: Handled stream extraction smoothly using std::cin.ignore() alongside getline() to prevent the program from skipping user inputs.

## 🛠️ Getting Started
To run this application on your local machine, you will need a C++ compiler (like GCC) installed.

### Clone the repository:

Bash
git clone https://github.com/yourusername/your-repo-name.git
cd your-repo-name
Compile the code:

Bash
g++ -o taskmanager main.cpp
Run the executable:

On Mac/Linux:

Bash
./taskmanager
On Windows:

DOS
taskmanager.exe

## 🔮 Future Improvements
While the core functionality is complete, I plan to expand this project with the following features:

Data Persistence: Implement file I/O to save tasks to a .txt or .csv file so data remains after closing the app.

Task Deletion: Add the ability to permanently remove tasks from the vector, not just mark them as done.

Due Dates: Integrate the <chrono> library to allow users to set specific deadlines.
