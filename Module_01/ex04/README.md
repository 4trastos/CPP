# File Content Replacer

## Overview

This project involves creating a program that reads the content of a specified file, replaces every occurrence of a given string with another string, and writes the modified content to a new file. The task is an exercise in file manipulation and string processing in C++.

## Program Description

### Functionality

The program takes three parameters in the following order:
1. `filename`: The name of the file to read.
2. `s1`: The string to search for in the file content.
3. `s2`: The string to replace `s1` with.

### Operation

- The program will open the file `<filename>` and read its content.
- It will create a new file named `<filename>.replace`.
- The content of the original file will be copied into the new file, with every occurrence of `s1` replaced by `s2`.
  
### Constraints

- Using C file manipulation functions (e.g., `fopen`, `fread`, `fwrite`, etc.) is **forbidden** and will be considered cheating.
- You are allowed to use any member functions of the class `std::string`, **except `replace`**.

### Error Handling

- The program should handle unexpected inputs and errors gracefully, such as incorrect file names, missing parameters, or permission issues.
- Proper error messages should be displayed to help the user understand what went wrong.

## Testing

- Create and turn in your own tests to ensure that your program works as expected.
- Test cases should cover various scenarios, including different file sizes, varying occurrences of `s1`, and edge cases such as an empty file or no occurrences of `s1`.

## Conclusion

This project helps you practice file I/O operations and string manipulations in C++ without relying on
