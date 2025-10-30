# Character-based C programs

### Each with :
* **Detailed descriptions**,
* **Subtopics/concepts covered**, and
* **Organized structure for study or project/lab use.**

---

## 🟢 LEVEL 1 — BASIC CHARACTER HANDLING PROGRAMS

| No | Program Title                                  | Description                                                                                                              | Subtopics / Concepts Covered                              |
| -- | ---------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------ | --------------------------------------------------------- |
| 1  | Check if a character is vowel or consonant     | Input a single character and check if it belongs to `{a, e, i, o, u}` or `{A, E, I, O, U}`; otherwise, it’s a consonant. | `if-else`, `char`, logical operators                      |
| 2  | Check if a character is uppercase or lowercase | Determine the case of the input character using ASCII value or conditional checks.                                       | ASCII range (`'A'–'Z'`, `'a'–'z'`), conditional branching |
| 3  | Check if a character is alphabet or not        | Verify if the input is an alphabetic letter using ASCII or `isalpha()` function.                                         | Character classification, `ctype.h`                       |
| 4  | Check if a character is digit                  | Identify if the character lies between `'0'` and `'9'`.                                                                  | ASCII validation, `isdigit()`                             |
| 5  | Display ASCII value of a character             | Print the ASCII integer equivalent of the entered character.                                                             | Typecasting `char → int`, ASCII table                     |
| 6  | Convert lowercase to uppercase                 | Change small letters to capital using ASCII subtraction or `toupper()`.                                                  | ASCII manipulation, `ctype.h`                             |
| 7  | Convert uppercase to lowercase                 | Change capital letters to small using ASCII addition or `tolower()`.                                                     | ASCII manipulation, `ctype.h`                             |
| 8  | Toggle case of a character                     | Flip uppercase ↔ lowercase using ASCII conditions.                                                                       | Bitwise logic or arithmetic manipulation                  |
| 9  | Check if a character is special symbol         | Identify if it’s not an alphabet or digit.                                                                               | `if` condition, ASCII range check                         |
| 10 | Print next character in ASCII sequence         | Display the next ASCII value’s character (e.g., A → B).                                                                  | ASCII arithmetic, `char` increment                        |
| 11 | Print previous character in ASCII sequence     | Show character before input (e.g., B → A).                                                                               | ASCII arithmetic, decrement                               |
| 12 | Print all alphabets using loops                | Print `A–Z` and `a–z` using loops.                                                                                       | `for` loop, ASCII iteration                               |
| 13 | Print all digits using ASCII                   | Print `0–9` characters using loop and ASCII values.                                                                      | ASCII codes 48–57                                         |
| 14 | Print all uppercase letters using ASCII        | Loop through ASCII 65–90 to print uppercase alphabets.                                                                   | Loops, character literals                                 |
| 15 | Print all lowercase letters using ASCII        | Loop through ASCII 97–122 to print lowercase alphabets.                                                                  | Loops, character literals                                 |
| 16 | Find ASCII difference between two characters   | Compute absolute difference between ASCII values.                                                                        | Typecasting, arithmetic operations                        |
| 17 | Check if character is printable                | Determine if ASCII is between 32–126 (visible characters).                                                               | ASCII range validation                                    |
| 18 | Check if character is whitespace               | Identify space, tab, newline using `isspace()` or ASCII check.                                                           | `ctype.h`, control characters                             |
| 19 | Convert character to integer                   | Convert `'5'` → `5` by subtracting `'0'`.                                                                                | Typecasting, ASCII subtraction                            |
| 20 | Convert integer (0–9) to character             | Convert number to ASCII using `+ '0'`.                                                                                   | Type conversion, character encoding                       |

---

Perfect! I’ll continue and generate the **full 100-character-based C programs** in the same structured format, **with detailed descriptions and subtopics/concepts**. To keep it organized, I’ll group them by **difficulty level**.

Here’s the **complete table**:

---

## 🟢 LEVEL 1 — BASIC CHARACTER HANDLING PROGRAMS (1–20)

| No | Program Title                                  | Description                                                                         | Subtopics / Concepts Covered                       |
| -- | ---------------------------------------------- | ----------------------------------------------------------------------------------- | -------------------------------------------------- |
| 1  | Check if a character is vowel or consonant     | Input a single character and check if it is a vowel (`a, e, i, o, u`) or consonant. | `if-else`, `char`, logical operators               |
| 2  | Check if a character is uppercase or lowercase | Determine case of input using ASCII value or `isupper()` / `islower()`.             | ASCII range, `ctype.h`, conditionals               |
| 3  | Check if a character is alphabet               | Verify if input is between `A-Z` or `a-z`.                                          | ASCII comparison, `isalpha()`                      |
| 4  | Check if a character is digit                  | Determine if input is `'0'-'9'`.                                                    | ASCII comparison, `isdigit()`                      |
| 5  | Display ASCII value of a character             | Print integer ASCII value of input character.                                       | Typecasting `char -> int`, `printf`                |
| 6  | Convert lowercase to uppercase                 | Convert lowercase letters to uppercase using ASCII subtraction or `toupper()`.      | ASCII arithmetic, `ctype.h`                        |
| 7  | Convert uppercase to lowercase                 | Convert uppercase letters to lowercase using ASCII addition or `tolower()`.         | ASCII arithmetic, `ctype.h`                        |
| 8  | Toggle case of a character                     | Flip uppercase to lowercase or vice versa using ASCII or bitwise operation.         | ASCII manipulation, bitwise XOR, conditional logic |
| 9  | Check if character is special symbol           | Identify if input is not a letter or digit.                                         | ASCII range validation, logical operators          |
| 10 | Print next character in ASCII sequence         | Display character with next ASCII value.                                            | ASCII arithmetic, `char` increment                 |
| 11 | Print previous character in ASCII sequence     | Display character with previous ASCII value.                                        | ASCII arithmetic, `char` decrement                 |
| 12 | Print all alphabets using loops                | Print all uppercase and lowercase alphabets using loops.                            | Loops, ASCII iteration                             |
| 13 | Print all digits using ASCII                   | Print characters `0-9` using ASCII codes 48-57.                                     | Loops, ASCII iteration                             |
| 14 | Print all uppercase letters using ASCII        | Loop through ASCII 65-90.                                                           | Loops, ASCII values                                |
| 15 | Print all lowercase letters using ASCII        | Loop through ASCII 97-122.                                                          | Loops, ASCII values                                |
| 16 | Find ASCII difference between two characters   | Compute absolute difference between ASCII codes of two characters.                  | Typecasting, arithmetic operations                 |
| 17 | Check if character is printable                | Determine if ASCII value is in printable range (32–126).                            | ASCII ranges, conditional checks                   |
| 18 | Check if character is whitespace               | Detect space, tab, or newline using `isspace()` or ASCII checks.                    | `ctype.h`, control characters                      |
| 19 | Convert character to integer                   | Convert `'0'-'9'` to integer using `c - '0'`.                                       | ASCII arithmetic, typecasting                      |
| 20 | Convert integer to character                   | Convert integer `0-9` to character using `i + '0'`.                                 | ASCII arithmetic, typecasting                      |

---

## 🟡 LEVEL 2 — BASIC STRING PROGRAMS (21–40)

| No | Program Title                                   | Description                                                   | Subtopics / Concepts Covered                |
| -- | ----------------------------------------------- | ------------------------------------------------------------- | ------------------------------------------- |
| 21 | Find length of string without `strlen()`        | Traverse string until null character to count length.         | Loops, `char[]`, null-terminator `\0`       |
| 22 | Copy string without `strcpy()`                  | Copy each character from source to destination manually.      | Loops, array indexing, null-terminator      |
| 23 | Concatenate two strings without `strcat()`      | Append characters from one string to another manually.        | Loops, string manipulation                  |
| 24 | Compare two strings without `strcmp()`          | Compare character by character and report equality or order.  | Loops, conditional checks                   |
| 25 | Reverse a string                                | Reverse characters in-place or copy into new array backwards. | Loops, array indexing, string manipulation  |
| 26 | Check if a string is palindrome                 | Check if string reads same forwards and backwards.            | Loops, string indexing, logic               |
| 27 | Count vowels and consonants in a string         | Traverse string and count vowels vs consonants.               | Loops, `if-else`, `tolower()`               |
| 28 | Count digits and special characters in a string | Count numeric and non-alphabetic characters.                  | Loops, `isdigit()`, ASCII checks            |
| 29 | Count number of spaces in a string              | Count `' '` characters in string.                             | Loops, comparison operators                 |
| 30 | Count words in a sentence                       | Count words by detecting spaces and string boundaries.        | Loops, conditional checks, string traversal |
| 31 | Convert string to uppercase                     | Traverse string and convert each character to uppercase.      | Loops, `toupper()`, ASCII arithmetic        |
| 32 | Convert string to lowercase                     | Traverse string and convert each character to lowercase.      | Loops, `tolower()`, ASCII arithmetic        |
| 33 | Toggle case of string                           | Flip case of every character in string.                       | Loops, ASCII arithmetic, conditional logic  |
| 34 | Copy only vowels from one string                | Traverse string and copy vowels into another array.           | Loops, `if`, string manipulation            |
| 35 | Remove all vowels from string                   | Copy only consonants into new array.                          | Loops, `if-else`, string handling           |
| 36 | Remove all spaces from string                   | Copy non-space characters to new string.                      | Loops, conditional check                    |
| 37 | Remove all special characters from string       | Keep only letters and digits.                                 | ASCII checks, loops                         |
| 38 | Count frequency of a specific character         | Count occurrences of given character.                         | Loops, comparison                           |
| 39 | Replace a specific character in string          | Replace all occurrences of a character with another.          | Loops, string manipulation                  |
| 40 | Find first non-repeating character              | Traverse string and detect first character appearing once.    | Nested loops, string logic                  |

---

## 🟠 LEVEL 3 — ADVANCED STRING OPERATIONS (41–60)

| No | Program Title                                    | Description                                                     | Subtopics / Concepts Covered           |
| -- | ------------------------------------------------ | --------------------------------------------------------------- | -------------------------------------- |
| 41 | Count frequency of all characters                | Count each character’s occurrences using array of 256 size.     | Loops, arrays, ASCII mapping           |
| 42 | Sort characters in string alphabetically         | Sort string using bubble sort or selection sort.                | Loops, string indexing, sorting        |
| 43 | Find second most frequent character              | Count frequencies and identify second highest.                  | Arrays, loops, conditional logic       |
| 44 | Remove duplicate characters                      | Copy only first occurrence of each character.                   | Arrays, loops, string manipulation     |
| 45 | Find substring in main string                    | Locate first occurrence of substring.                           | Nested loops, string comparison        |
| 46 | Replace substring in string                      | Replace all occurrences of substring with another.              | Loops, string manipulation, indexing   |
| 47 | Find first occurrence of a substring             | Print index of first substring occurrence.                      | Loops, string comparison               |
| 48 | Find last occurrence of a substring              | Print index of last substring occurrence.                       | Loops, string traversal backward       |
| 49 | Reverse each word in a string                    | Reverse individual words while keeping order.                   | Loops, string indexing, logic          |
| 50 | Reverse word order in sentence                   | Reverse word positions without changing letters.                | String splitting, arrays, loops        |
| 51 | Count occurrences of each vowel                  | Count a, e, i, o, u in string.                                  | Loops, conditional checks, `tolower()` |
| 52 | Count uppercase, lowercase, digit, special chars | Classify characters and count categories.                       | Loops, `isdigit()`, ASCII checks       |
| 53 | Check if string contains only alphabets          | Verify all characters are A-Z or a-z.                           | Loops, ASCII comparison, `isalpha()`   |
| 54 | Check if string contains only digits             | Verify all characters are 0-9.                                  | Loops, `isdigit()`                     |
| 55 | Check if string is valid identifier              | Must start with letter or `_` and contain letters, digits, `_`. | Loops, ASCII checks, conditional logic |
| 56 | Find longest word in sentence                    | Identify word with maximum length.                              | Loops, string parsing, comparison      |
| 57 | Find shortest word in sentence                   | Identify word with minimum length.                              | Loops, string parsing, comparison      |
| 58 | Count sentences in paragraph                     | Count number of `.`, `!`, `?` as sentence end markers.          | Loops, conditional check               |
| 59 | Find most repeated word                          | Count frequency of words in sentence.                           | Nested loops, string parsing           |
| 60 | Remove consecutive duplicate characters          | Copy string skipping repeated consecutive letters.              | Loops, string indexing                 |

---

Perfect! Let’s continue with **LEVEL 4 (61–80)** and **LEVEL 5 (81–100)**, keeping the **detailed description + subtopics** format.

---

## 🔵 LEVEL 4 — CHARACTER PATTERNS & ASCII ART (61–80)

| No | Program Title                                  | Description                                           | Subtopics / Concepts Covered                     |
| -- | ---------------------------------------------- | ----------------------------------------------------- | ------------------------------------------------ |
| 61 | Print A–Z in pyramid pattern                   | Print letters A–Z in a centered pyramid shape.        | Loops, nested loops, ASCII values, pattern logic |
| 62 | Print alphabet triangle pattern                | Print A, AB, ABC… in successive rows.                 | Nested loops, character increment                |
| 63 | Print alphabet square pattern                  | Print a square of alphabets row-wise.                 | Loops, nested loops, ASCII arithmetic            |
| 64 | Print alphabet diamond pattern                 | Print letters forming diamond shape.                  | Nested loops, ASCII values, pattern logic        |
| 65 | Print character right-angled triangle          | Right-angled triangle using input character series.   | Nested loops, ASCII arithmetic                   |
| 66 | Print mirrored character triangle              | Right-aligned triangle pattern using spaces.          | Nested loops, ASCII manipulation, spacing        |
| 67 | Print character pyramid with repeating letters | Pyramid with same letter in a row.                    | Nested loops, ASCII arithmetic                   |
| 68 | Print sequence A–Z repeatedly in pattern       | Repeat A–Z in pyramid/rows until specified size.      | Loops, modulo, ASCII mapping                     |
| 69 | Print ASCII table from 32–127                  | Display printable ASCII characters and their codes.   | Loops, ASCII range, `printf` formatting          |
| 70 | Print name in ASCII box                        | Enclose name in rectangular box of `*` or letters.    | Loops, string handling, formatting               |
| 71 | Print initials from name                       | Extract first letters of each word and print pattern. | String parsing, loops                            |
| 72 | Display letters diagonally                     | Print characters diagonally in output.                | Loops, spacing, ASCII arithmetic                 |
| 73 | Display character pattern in reverse           | Reverse order of letters in pyramid or triangle.      | Nested loops, ASCII arithmetic                   |
| 74 | Print ‘Z’ pattern using characters             | Print a Z-shaped pattern using letters.               | Nested loops, pattern logic                      |
| 75 | Print checkerboard pattern using letters       | Alternate letters to form checkerboard.               | Nested loops, conditional checks                 |
| 76 | Print half pyramid of characters               | Left-aligned triangle of letters.                     | Nested loops, ASCII increment                    |
| 77 | Print inverted pyramid of characters           | Inverted triangle pattern of letters.                 | Nested loops, spacing, ASCII decrement           |
| 78 | Print diamond pattern of characters            | Symmetric diamond using letters.                      | Nested loops, ASCII arithmetic, pattern logic    |
| 79 | Print Pascal-like triangle using letters       | Letter triangle resembling Pascal’s pattern.          | Nested loops, combinatorics, ASCII               |
| 80 | Print pattern with alternating cases           | Alternate uppercase and lowercase letters in pattern. | Loops, ASCII arithmetic, `toupper()/tolower()`   |

---

## 🟣 LEVEL 5 — ENCRYPTION, DECRYPTION & MISCELLANEOUS (81–100)

| No  | Program Title                                  | Description                                                 | Subtopics / Concepts Covered                      |
| --- | ---------------------------------------------- | ----------------------------------------------------------- | ------------------------------------------------- |
| 81  | Encrypt string using Caesar cipher             | Shift letters by fixed key (e.g., 3) to encrypt.            | Loops, ASCII arithmetic, encryption logic         |
| 82  | Decrypt string using Caesar cipher             | Reverse the shift used in Caesar cipher.                    | Loops, ASCII arithmetic, decryption logic         |
| 83  | Encrypt using XOR operation                    | Encrypt string using XOR with key character.                | Bitwise XOR, loops, ASCII manipulation            |
| 84  | Decode encrypted string                        | Reverse XOR encryption to recover original text.            | Bitwise XOR, ASCII arithmetic                     |
| 85  | Encode string to ASCII sequence                | Convert string into sequence of ASCII codes.                | Loops, typecasting, string manipulation           |
| 86  | Decode ASCII sequence to string                | Convert numeric ASCII codes back to characters.             | Loops, typecasting, string parsing                |
| 87  | Count number of uppercase vowels only          | Count A, E, I, O, U in uppercase form.                      | Loops, `if-else`, string traversal                |
| 88  | Remove all duplicate words from string         | Keep only first occurrence of each word.                    | String splitting, loops, comparison logic         |
| 89  | Find and replace word in string                | Replace all occurrences of word with another.               | String parsing, loops, substring replacement      |
| 90  | Split string into words                        | Tokenize string by spaces.                                  | Loops, string traversal, arrays, `strtok()`       |
| 91  | Join words into sentence                       | Merge words from array into a single string.                | Loops, concatenation, string manipulation         |
| 92  | Find length of each word                       | Print length of every word in a sentence.                   | Loops, string parsing, counters                   |
| 93  | Capitalize first letter of every word          | Convert first character of each word to uppercase.          | Loops, string indexing, `toupper()`               |
| 94  | Convert string to title case                   | Capitalize first letter and lowercase others.               | Loops, `toupper()/tolower()`, string manipulation |
| 95  | Check if two strings are anagrams              | Verify if two strings have same letters in any order.       | Sorting, loops, comparison                        |
| 96  | Remove all punctuation marks                   | Keep only letters, digits, and spaces.                      | ASCII checks, loops, `isalpha()/isdigit()`        |
| 97  | Count number of letters between two characters | Count letters in string between given characters.           | Loops, string traversal, conditional logic        |
| 98  | Print ASCII difference of each adjacent pair   | Compute difference between each consecutive character.      | Loops, ASCII arithmetic                           |
| 99  | Generate frequency histogram of characters     | Display count of each character graphically or numerically. | Arrays, loops, ASCII mapping                      |
| 100 | Implement simple spell-check                   | Compare words in sentence against dictionary array.         | String splitting, arrays, loops, comparison       |

---
