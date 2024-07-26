
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

### 4) `%%`
- **Description**: Prints a literal percent sign `(%)`.
- **Usage**:
  ```c
  _printf("Percent sign: %%\n");
- **Output**:
  ```c
  Percent sign: %

### 5) Unknown Format Specifiers
- **Description**: If an unknown format specifier is encountered, it prints the specifier as-is. For example, `_printf("Unknown: %z\n");` will output Unknown: `%z`.


>[!NOTE]
>The function handles edge cases, such as printing integers at the boundary of the int type, including INT_MIN and 0.
>
>The output is produced in the order the arguments are provided, matching the format specifiers in the format string.
