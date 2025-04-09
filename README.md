
# _PRINTF(3)

## Name

__`_printf`__ - This is a variadic function that outputs formatted text to standard output.

## Description

This project involves creating a custom implementation of the __`_printf`___ function in C. The goal is to replicate the core functionalities of the standard __`_printf`___, including handling various format specifiers, managing different data types, and ensuring proper output formatting.

## Signature

__`_printf(const char *format, ...);`__

## Parameters
- __`const char *format`__: A format string that specifies how subsequent arguments are converted for output.
- __`...`__: A variable number of arguments that will be formatted according to the format string.

## Format Specifiers

### 1) `%c`
- **Description**: Prints a single character.
- **Usage**:
  ```c
  _printf("Character: %c\n", 'A');
- **Output**:
  ```c
  Character: A

---

### 2) `%s`
- **Description**: Prints a string. If the string is `NULL`, it prints `(null)`.
- **Usage**:
  ```c
  _printf("String: %s\n", "Hello");
- **Output**:
  ```c
  String: Hello
- **Example with NULL**:
  ```c
  _printf("String: %s\n", NULL);
- **Output**:
  ```c
  String: (null)

---
  
### 3) `%d` and `%i`
- **Description**: Prints an integer in decimal format. Both `%d` and `%i` have the same behavior.
- **Usage**: 
  ```c
  _printf("Integer: %d\n", 42);
  _printf("Integer: %i\n", -42);
- **Output**:
  ```c
  Integer: 42
  Integer: -42

---

### 4) `%%`
- **Description**: Prints a literal percent sign `(%)`.
- **Usage**:
  ```c
  _printf("Percent sign: %%\n");
- **Output**:
  ```c
  Percent sign: %

---

### 5) Unknown Format Specifiers
- **Description**: If an unknown format specifier is encountered, it prints the specifier as-is. For example, `_printf("Unknown: %z\n");` will output Unknown: `%z`.

---

## Return Value
- Returns the total number of characters printed. On error, a negative number is returned.

>[!NOTE]
>The function handles edge cases, such as printing integers at the boundary of the int type, including INT_MIN and 0.
>
>The output is produced in the order the arguments are provided, matching the format specifiers in the format string.

## Installation
To install and use the `_printf` function, follow these steps:

### 1) Clone the repository:
    git clone https://github.com/CHRIS09MT/holbertonschool-printf.git
    
---

>[!IMPORTANT]
> You must include this `main.c` in order to compile the `_printf.c` file
>
> This project is a custom implementation of the standard `printf` function in C. Ensure to follow the format specifiers correctly to get the desired output.
### 2) Include this `main.c`:

      #include "main.h"

      int main(void)
      {
          // Test cases for _printf function
          _printf("Character: %c\n", 'A');
          _printf("String: %s\n", "Hello, World!");
          _printf("Integer: %d\n", 42);
          _printf("Percent sign: %%\n");
          _printf("Unknown format: %z\n", 'X'); // Example of unknown specifier
          _printf("NULL string: %s\n", NULL);

          return 0;
      }

### 3) Compile the code:
    gcc -o printf_chris -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 main.h *.c

### 4) Run your program:
    ./printf_chris

## Installation of the Man Page

>[!IMPORTANT]
>Follow the steps to successfully install the `_printf` manual.

### Step 1.
    sudo mv man_3_printf /usr/share/man/man3/_printf.3 
---
### Step 2.
    sudo mandb
---
### Step 3.
    man 3 _printf
---

## Author
Christopher Morales Torres
Email: christophermoralestorres@gmail.com
