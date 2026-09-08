# Simple Book Shop Management System

A beginner-friendly **C console application** developed for **CSE 103: Structured Programming** at East West University. The project demonstrates the core C programming concepts covered in the course, including structures, arrays, functions, loops, selection statements, and basic console input/output.

The system manages book records in a small book shop and provides options to display books, add new books, search by title, and calculate the total number of copies available.

## Project Overview

The **Simple Book Shop Management System** keeps track of book information entered by the user.

Each book record contains:

- **Book Title** — up to 50 characters
- **Author Name** — up to 30 characters
- **Book Price** — floating-point value
- **Copies** — number of available copies

The project is designed to store up to **500 books in a single run**, following the original CSE 103 project specification. fileciteturn3file0L25-L33

## Objectives

The main purpose of this project is to demonstrate fundamental structured-programming concepts through a practical console application.

The project uses:

- `struct` for storing book records
- Arrays for maintaining multiple books
- Functions for organizing program tasks
- `if-else` and `switch` statements for decision making
- `for` and `while` loops for repetition
- `printf()` and `scanf()` for console input/output
- String handling for book titles and author names

These concepts were specifically required by the course project specification. fileciteturn3file0L7-L11

## Features

### 1. Display Menu

The program provides a simple menu with six options:

```text
1) Display this menu.
2) Show all available books.
3) Add a book to the book shop.
4) Search a book by title.
5) Display the total number of books.
6) Exit from this book system.
```

The menu is displayed through the `showMenuOptions()` function. fileciteturn3file1L31-L40

### 2. Show All Books

The `showbooks()` function displays every book currently stored in the system, including:

- Book title
- Author
- Price
- Number of copies

If there are no books, the program displays:

```text
No available books.
```

fileciteturn3file1L43-L57

### 3. Add a Book

The `addbook()` function takes the following information from the user:

```text
Book Title
Book Author
Book Price
Book Copies
```

The new book is then added to the array of stored books. fileciteturn3file1L59-L74

### 4. Search a Book

The `searchbook()` function asks the user for a book title and searches the stored list.

If a matching title is found, the program displays the book's details.

Otherwise:

```text
Book not found.
```

fileciteturn3file1L76-L101

### 5. Count Total Books

The `showNumberOfBooks()` function calculates the total number of **copies** available in the shop by summing the `copies` value of every stored book. fileciteturn3file1L103-L110

### 6. Exit

Choosing option `6` displays the goodbye message and terminates the program. fileciteturn3file1L146-L154

## Program Structure

The implementation uses a structure named `books` to represent each book:

```c
struct books
{
    char booktitle[50];
    char authorname[30];
    float bookprice;
    int copies;
} b[500];
```

This allows the program to keep an array of up to 500 book records. fileciteturn3file1L1-L12

The program is organized into the following functions:

| Function | Purpose |
|---|---|
| `showWelcomeMessage()` | Displays the welcome message |
| `showGoodByeMessage()` | Displays the exit message |
| `showMenuOptions()` | Displays the available menu options |
| `showbooks()` | Displays all stored books |
| `addbook()` | Adds a new book |
| `searchbook()` | Searches for a book by title |
| `showNumberOfBooks()` | Calculates total available copies |
| `main()` | Controls the overall program flow |

The project report describes the application as a structured program built around these functions. fileciteturn3file2L2-L14 fileciteturn3file2L16-L31

## Program Flow

```text
                Program Start
                     │
                     ▼
          Show Welcome Message
                     │
                     ▼
               Display Menu
                     │
                     ▼
             Read User Choice
                     │
        ┌────────────┼────────────┐
        ▼            ▼            ▼
   Display Menu   Show Books   Add Book
        │            │            │
        └────────────┼────────────┘
                     │
                     ▼
                Search Book
                     │
                     ▼
             Count Total Copies
                     │
                     ▼
                   Exit
```

The `main()` function repeatedly reads the user's choice and calls the corresponding function through a `switch` statement. Option `6` ends the program after showing the goodbye message. fileciteturn3file1L112-L154

## Data Representation

Each book is represented using four fields:

```text
Book Title  → char[50]
Author Name → char[30]
Price       → float
Copies      → int
```

This directly follows the data requirements in the project specification. fileciteturn3file0L26-L31

## Project Structure

```text
Simple-Book-Shop/
│
├── 2023-1-60-207_SimpleBookShop.c
└── README.md
```

The repository contains the C source file implementing the complete console application.

## Requirements

You only need a standard C development environment, such as:

- GCC
- MinGW
- Code::Blocks
- Visual Studio Code with a C compiler
- Any other standard C compiler

The original assignment specifically required the project to use only the C concepts taught in CSE 103. fileciteturn3file0L7-L11

## Build and Run

### Compile with GCC

```bash
gcc 2023-1-60-207_SimpleBookShop.c -o simple_book_shop
```

### Run on Linux / macOS

```bash
./simple_book_shop
```

### Run on Windows

```bash
simple_book_shop.exe
```

## Example Interaction

A typical session starts with:

```text
******************************************

Welcome to Simple Book Management System.

******************************************
```

Then the menu is displayed:

```text
Please select a menu option number:
1) Display this menu.
2) Show all available books.
3) Add a book to the book shop.
4) Search a book by title.
5) Display the total number of books.
6) Exit from this book system.
```

The welcome, menu, and goodbye messages are implemented directly in the source code. fileciteturn3file1L17-L40

## Concepts Demonstrated

This project provides a practical introduction to:

- C structures (`struct`)
- Arrays
- Functions
- Function decomposition
- `switch` statements
- `if-else` conditions
- `for` loops
- `while` loops
- String input
- Basic string comparison
- Console input/output
- Basic data management

These are exactly the kinds of structured-programming constructs emphasized in the original course project. fileciteturn3file0L7-L11

## Learning Outcome

As an introductory programming project, this application demonstrates how basic C constructs can be combined to solve a small real-world problem.

Rather than using advanced data structures or external libraries, the program focuses on building a clear understanding of:

```text
Data → Functions → User Input → Processing → Output
```

This makes the project a useful foundation for moving toward larger and more complex programming projects.

## Future Improvements

The current version can be extended with features such as:

- Update book information
- Delete a book
- Search by author
- Search by price range
- Sort books by title or price
- Validate invalid price and copy inputs
- Save book records to a file
- Load existing records when the program starts
- Add a more robust search mechanism

These would build naturally on top of the current structured-programming design.

## Project Information

**Course:** CSE 103 — Structured Programming  
**Project:** Simple Book Shop Management Program  
**Institution:** East West University  
**Semester:** Summer 2023  
**Student ID:** 2023-1-60-207  
**Language:** C

The original project specification required a C console program demonstrating fundamental C programming constructs and a program capable of managing up to 500 books in one run. fileciteturn3file0L5-L17 fileciteturn3file0L25-L33

## Conclusion

The **Simple Book Shop Management System** is a compact introductory C project that applies fundamental structured-programming concepts to a practical use case.

The program organizes book records using structures and arrays, provides a menu-driven interface, and separates major tasks into individual functions. It demonstrates the core programming principles expected from an introductory CSE 103 project while providing a foundation for future improvements.

---

**Built as part of the CSE 103 Structured Programming course at East West University.**
