# Basic-File-Management-System-Using-C-programming
# File Management System (C)

A command-line File Management System developed in C.

This project allows users to create, write, read, rename, inspect, and delete files through a menu-driven interface. The goal of the project was to practise file handling, functions, strings, and user interaction in C while building a simple real-world utility.

## Features

- Create new files
- Write text to files
- Read file contents
- Rename existing files
- Display file information (size)
- Delete files with confirmation
- Menu-driven interface
- Error handling for missing files

## Technologies Used

- C Programming Language
- Standard C Library
- File I/O Functions
- GCC Compiler
- Code::Blocks IDE

## Concepts Demonstrated

This project demonstrates:

- Functions
- Arrays
- Strings
- File I/O
- User Input Validation
- Modular Program Design
- Error Handling

## Menu

```text
1. Create File
2. Write to File
3. Read File
4. Delete File
5. Rename File
6. File Information
7. Exit
```

## Example Usage

```text
===== File Management System =====

1. Create File
2. Write to File
3. Read File
4. Delete File
5. Rename File
6. File Information
7. Exit

Enter choice: 1
Enter file name: notes.txt

File created successfully.
```

## Project Structure

```text
FileManagementSystem/
│
├── main.c
├── README.md
```

## How to Compile

Using GCC:

```bash
gcc main.c -o filemanager
```

Run:

```bash
./filemanager
```

Windows:

```bash
filemanager.exe
```

## Learning Outcomes

Through this project I practised:

- Creating and managing files using C
- Reading and writing data to files
- Using string manipulation functions
- Organising programs using functions
- Building menu-driven applications
- Using Git and GitHub for version control

## Future Improvements

- Search for files
- Password-protected files
- Directory listing
- File copy functionality
- Dynamic memory allocation (malloc and free)
- File metadata management
- Linked-list-based file records

