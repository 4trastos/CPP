# Zombie Horde

## Overview

This project is a simple implementation of a "zombie horde" in C++. The goal is to create and manage a collection of zombie objects using dynamic memory allocation. Each zombie in the horde will have a name, and you can have the entire horde announce themselves. The project also includes memory management to ensure that no memory leaks occur when the zombies are deleted.

## Functionality

The primary function you need to implement is:

```cpp
Zombie* zombieHorde(int N, std::string name);
```

# Zombie Horde

## Objective

The task is to implement the function `zombieHorde()` with the following specifications:

- It must allocate `N` `Zombie` objects in a single allocation.
- Then, it has to initialize the zombies, giving each one of them the name passed as a parameter.
- The function returns a pointer to the first zombie.

## Testing

- Implement your own tests to ensure your `zombieHorde()` function works as expected.
- Try to call the `announce()` method for each of the zombies to verify their functionality.

## Memory Management

- Don’t forget to delete all the zombies after use.
- Check for memory leaks to ensure there are no issues with dynamic memory allocation.

## Notes

- Ensure that your implementation adheres to best practices for memory management in C++.
- Use tools or methods to check for potential memory leaks and address them appropriately.
