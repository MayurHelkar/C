# Functions 

<details>
<summary>What is a Function</summary>

| Function declare/ prototype | Function define | Function call |
| ---------------- | --------------- | ------------- |
| return_type function_name (datatype parameters_name); | return_type function_name (datatype parameters_name)<br>{<br>block_of_code<br>} | function_name( parameters); |
| Does not contain the function's body | Provides the actual implementation of the function.<br>Includes the code logic | Searches the declaration then definition and runs the code logic |
</details>

<details>
<summary>Why use Functions</summary>
</details>

<details>
<summary>How Functions Work in C?</summary>
  
**Return type** - 
* Specifies type of value to be returned from the function.
* Datatypes - char, int, flloat, double, array, union, struct, enum.
* Types -
  - `return;` - void return type
  - `return value;` returns a single value using the return statement, based on datatype .
* End of function. Only return a single value from the function .
  - After return, based on *void/ non void datatypes*, it passes the control back to the *called function*.
* Multiple return statements is possible, but only one is executed.
 
**Function name** - 
* Unique name for function identification. 
* Naming rules are same as followed by variables.
* Parameter list: A set of input values passed to the function. If the function takes no inputs, this can be left empty or written as void.

**Function body**
* The block of code is enclosed in curly braces { }.
* Executes/ runs when function called.
</details>

<details>
<summary>How to return multiple values from a function?</summary>

* Methods to return multiple values from a function :
  - By using pointers.
  - By using structures.
  - By using Arrays.
1. Returning multiple values Using pointers :
   | function call | function definition |
   | ------------- | ------------------- |
   | &parameter | *parameter |

2. Returning multiple values using structures :
   | function call | function definition |
   | ------------- | ------------------- |
   | &parameter | *parameter |

3. Returning multiple values using an array (Works only when returned items are of same types) :
   | function call | function definition |
   | ------------- | ------------------- |
   | &parameter | parameter[] |
</details>

<details>
<summary>Types of Functions</summary>
  
* Categories - 2
1. Library/ Built-in :
    - Built-in functions provided by C.
    - Also including the appropriate header file
    - `#include <header_filename.h>`
2. User-Defined Functions :
    - Created by users to perform specific tasks in your program.
    - Depending on return a value or how many types and no's of arguments required, they can be of four types:
      | return datatype/ *Output* | parameters/ *Inputs* |
      | ----------- | ---------- |
      | void | void |
      | void | Non-void |
      | Non-void | void |
      | Non-void | Non-void |
</details>
