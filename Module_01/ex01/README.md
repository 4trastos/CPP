# Zombie Horde

## Overview

This project is a simple implementation of a "zombie horde" in C++. The goal is to create and manage a collection of zombie objects using dynamic memory allocation. Each zombie in the horde will have a name, and you can have the entire horde announce themselves. The project also includes memory management to ensure that no memory leaks occur when the zombies are deleted.

## Functionality

The primary function you need to implement is:

```cpp
Zombie* zombieHorde(int N, std::string name);
