# BraiiiiiiinnnzzzZ

## Overview

This project involves implementing a `Zombie` class with a focus on understanding the differences between stack and heap memory allocation in C++. The `Zombie` class will have a private attribute for the zombie's name and a member function for announcing itself. Additionally, two functions will be implemented for creating zombies either on the heap or on the stack.

## Zombie Class

### Attributes

- `name` (private): A `std::string` that holds the name of the zombie.

### Member Functions

- `void announce(void);`
  - This function prints out a message with the zombie's name followed by "BraiiiiiiinnnzzzZ...". For example, if the zombie's name is "Foo", the output will be:
    ```
    Foo: BraiiiiiiinnnzzzZ...
    ```

## Functions

### Zombie* newZombie(std::string name);

- **Description**: Creates a new zombie with the given name and returns a pointer to the newly created zombie.
- **Usage**: This function dynamically allocates memory for a zombie on the heap and allows the zombie to be used outside of the function scope.

### void randomChump(std::string name);

- **Description**: Creates a new zombie with the given name, announces itself, and is then automatically destroyed.
- **Usage**: This function creates a zombie on the stack, and the zombie announces itself before being destroyed when the function exits.

## Key Points

- **Heap vs. Stack Allocation**:
  - **Heap Allocation**: Used in `newZombie`. The zombie persists beyond the scope of the function and must be explicitly deallocated using `delete`.
  - **Stack Allocation**: Used in `randomChump`. The zombie is automatically destroyed when the function scope ends.

- **Destructor**:
  - The destructor of the `Zombie` class prints a message with the zombie's name for debugging purposes. This helps in tracking when and where zombies are destroyed.

## Example Usage

Here is an example of how the `Zombie` class and functions can be used:

```cpp
int main()
{
    Zombie foo("Foo");
    foo.announce();

    Zombie *memo = newZombie("Memo");
    memo->announce();
    delete memo;

    randomChump("Chump");

    return 0;
}
