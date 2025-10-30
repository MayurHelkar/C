### 🧠 **C Programming Topics in Detail**

| **Category**  | **Topic**                | **Description**                                      | **Key Points / Examples**                             |
| ------------- | ------------------------ | ---------------------------------------------------- | ----------------------------------------------------- |
| **1. Basics** | Introduction to C        | Overview of C language, history, and features        | General-purpose, structured, compiled, fast execution |
|               | Structure of a C Program | Basic format of a C program                          | `#include`, `main()`, `{}`, `return 0;`               |
|               | Compilation Process      | Steps: Preprocessing, Compilation, Assembly, Linking | Tool: GCC compiler                                    |
|               | Keywords & Identifiers   | Reserved words and naming rules                      | Example: `int`, `for`, `return`                       |
|               | Variables & Data Types   | Different data types and variable declarations       | `int`, `float`, `char`, `double`                      |
|               | Constants & Literals     | Fixed values used in programs                        | Example: `#define PI 3.14`                            |
|               | Input & Output           | Functions for I/O operations                         | `printf()`, `scanf()`                                 |
| **2. Operators & Expressions** | Arithmetic Operators | Basic math operations | `+`, `-`, `*`, `/`, `%` |
| | Relational & Logical | Comparisons and conditions | `<`, `>`, `==`, `&&`, `||` |
| | Assignment Operators | Assign and modify values | `=`, `+=`, `-=`, `*=` |
| | Increment/Decrement | Change variable value by 1 | `i++`, `--i` |
| | Bitwise Operators | Work on bits | `&`, `|`, `^`, `~`, `<<`, `>>` |
| | Operator Precedence | Order of evaluation | Multiplication before addition, etc. |
| **3. Control Statements** | Decision Making | Conditional branching | `if`, `if-else`, `nested if`, `switch` |
| | Loops | Repetition of statements | `for`, `while`, `do-while` |
| | Jump Statements | Transfer control | `break`, `continue`, `goto` |
| **4. Functions** | Function Basics | Group of statements performing a task | Syntax: `returnType functionName(parameters)` |
| | Function Declaration & Definition | Declaring and defining functions | Example: `int sum(int a, int b)` |
| | Function Call | Invoking a function | `sum(3,4);` |
| | Parameter Passing | Methods of passing data | Call by value / Call by reference |
| | Recursion | Function calling itself | Example: Factorial, Fibonacci |
| **5. Arrays** | 1D Arrays | Store multiple values of same type | `int arr[5] = {1,2,3,4,5};` |
| | 2D Arrays | Matrix representation | `int matrix[3][3];` |
| | Multi-dimensional Arrays | 3D or more dimensions | Useful in 3D graphics, tensors |
| | Array & Functions | Passing arrays to functions | `void printArray(int arr[], int size)` |
| **6. Strings** | Character Arrays | String as array of chars | `"Hello"` = `{'H','e','l','l','o','\0'}` |
| | String Functions | Library functions for strings | `strlen()`, `strcpy()`, `strcmp()`, `strcat()` |
| **7. Pointers** | Pointer Basics | Variable storing memory address | `int *p; p = &x;` |
| | Pointer Arithmetic | Increment, decrement, addition | `p++`, `p--` |
| | Pointers & Arrays | Relationship between arrays and pointers | `arr[i] == *(arr + i)` |
| | Pointers & Functions | Passing address to functions | Call by reference |
| | Pointer to Pointer | Multiple levels of indirection | `int **ptr;` |
| | Dynamic Memory Allocation | Allocate memory at runtime | `malloc()`, `calloc()`, `realloc()`, `free()` |
| **8. Structures & Unions** | Structures | Group of different data types | `struct student { int id; char name[20]; };` |
| | Nested Structures | Structure inside another | `struct dept { struct student s1; };` |
| | Unions | Memory sharing among members | `union data { int i; float f; };` |
| | Structure & Functions | Passing structures to functions | `void display(struct student s);` |
| **9. Enumerations & Typedef** | Enum | User-defined constants | `enum week {Mon, Tue, Wed};` |
| | Typedef | Define new data type names | `typedef unsigned int UINT;` |
| **10. File Handling** | File Operations | Read/Write files | `fopen()`, `fclose()`, `fprintf()`, `fscanf()` |
| | File Modes | `"r"`, `"w"`, `"a"`, `"r+"` | Read, write, append modes |
| | Binary Files | Handle non-text data | `fread()`, `fwrite()` |
| **11. Preprocessor Directives** | Macros | Define constants or functions | `#define`, `#undef` |
| | File Inclusion | Include header files | `#include <stdio.h>` |
| | Conditional Compilation | Compile specific code | `#ifdef`, `#ifndef`, `#endif` |
| **12. Advanced Topics** | Command-line Arguments | Passing arguments to `main()` | `int main(int argc, char *argv[])` |
| | Memory Management | Allocation and deallocation | `malloc()`, `free()` |
| | Pointer to Function | Function pointers | `int (*fp)(int,int);` |
| | Data Structures in C | Implement DS using C | Linked List, Stack, Queue, Tree |
| | Header Files | Custom header creation | `#include "myheader.h"` |
| | Error Handling | Return codes, `errno`, `perror()` | |
| **13. Miscellaneous** | Storage Classes | Scope and lifetime of variables | `auto`, `register`, `static`, `extern` |
| | Type Casting | Converting data types | `(float) a / b;` |
| | Inline Assembly | Embedding assembly code (platform-specific) | `asm("mov %eax, %ebx");` |

---
