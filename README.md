# Student Management System

## Description
This project is a C-based student management system designed to handle student records including names and grades. It allows users to add student information and then display this information based on user input.

## Features
- **Adding Students**: Users can input details of students including names and grades for various modules.
- **Displaying Student Information**: Allows users to select a student by number and view their details.
- **Dynamic Expansion**: The number of students is not limited by a fixed array thanks to the use of dynamic memory allocation.

## How to Use
1. **Compile the program**:
    ```bash
    gcc -o student_management student_management.c
    ```
2. **Run the program**:
    ```bash
    ./student_management
    ```

## Improvements
- **Input Validation**: All user inputs are now validated for correctness, including student number validity and permissible grades.
- **Dynamic Memory Allocation**: Utilizes `malloc` and `free` to manage arrays of student structures, allowing the program to scale for any number of students.
- **Safe String Reading**: Uses `fgets` instead of `scanf` for reading names, which allows for space-containing names and prevents buffer overflow.
- **Enhanced User Interface**: Clear instructions and a choice menu simplify program interaction.

## Usage Examples
### Adding a Student
The user will be prompted to enter a name and grades for each module:
```
Enter student name: John Doe
Enter grade for module 1: 85
Enter grade for module 2: 90
...
```
### Viewing Student Data
After selecting a student, their data will be displayed in a readable format:
```
Selected student name: John Doe
Grades: 85, 90, ...
```

## License
[MIT License](LICENSE.md)
