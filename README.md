# Basic-File-Management-System-Using-C-programming
# File Management System (C)

A menu-driven file management system developed in C that allows users to create, write, read, rename, inspect, and delete files directly from the command line.

This project was developed to strengthen fundamental systems programming concepts including file handling, string manipulation, modular program design, error handling, and user interaction. It serves as a stepping stone toward more advanced operating systems and systems programming topics.

## Features

✅ Create new files

✅ Write text to files

✅ Read file contents

✅ Rename existing files

✅ Display file information (file size)

✅ Delete files with confirmation

✅ Error handling for missing files

✅ Menu-driven user interface

## Technologies Used

- C Programming Language
- GCC Compiler
- Standard C Library
- File I/O Functions
- Code::Blocks IDE

## Concepts Demonstrated

- Functions
- Arrays
- Strings
- File Input/Output
- User Input Validation
- Modular Program Design
- Error Handling
- Menu-Driven Applications

## Example Menu

```text
=================================
      File Management System
=================================
1. Create File
2. Write to File
3. Read File
4. Delete File
5. Rename File
6. File Information
7. Exit
```

## Example Workflow

```text
Enter choice: 1
Enter file name: notes.txt

File created successfully.

Enter choice: 2
Enter file name: notes.txt
Enter text: Learning C for systems programming

Data written successfully.

Enter choice: 3
Enter file name: notes.txt

===== File Contents =====
Learning C for systems programming
```

## Project Structure

```text
file-management-system-c/
│
├── file_system.c
├── README.md
```

## How to Compile

### GCC

```bash
gcc file_system.c -o filemanager
```

### Run

Linux/macOS:

```bash
./filemanager
```

Windows:

```bash
filemanager.exe
```

## Learning Outcomes

Through this project I practised:

- Creating and managing files in C
- Reading and writing data using file streams
- Using string manipulation functions
- Building modular applications with functions
- Developing menu-driven systems
- Handling user input and file errors
- Using Git and GitHub for version control

## Future Improvements

- File search functionality
- File copy functionality
- Directory listing support
- Dynamic memory allocation using malloc/free
- Linked-list-based file records
- File metadata tracking
- Password-protected files
- Multi-directory navigation

