# Weapon, HumanA, and HumanB Classes

## Overview

This project involves the implementation of a simple combat system with two classes, `HumanA` and `HumanB`, that use a `Weapon` class. The goal is to understand how object composition and references work in C++.

## Weapon Class

The `Weapon` class is designed to represent a weapon with a specific type. It includes the following:

- A private attribute `type`, which is a string.
- A `getType()` member function that returns a `const` reference to `type`.
- A `setType()` member function that sets `type` using a new value passed as a parameter.

## HumanA and HumanB Classes

### HumanA Class

- `HumanA` has a `Weapon` and a `name`.
- It always has a `Weapon`, which is passed in its constructor.
- The `attack()` member function displays the following message:


### HumanB Class

- `HumanB` also has a `Weapon` and a `name`.
- However, unlike `HumanA`, `HumanB` may not always have a `Weapon`.
- The `Weapon` is not passed in the constructor and can be set later.
- The `attack()` member function works similarly:


## Example Usage

If your implementation is correct, executing the following code will print an attack with "crude spiked club" followed by an attack with "some other type of club" for both `HumanA` and `HumanB`.

```cpp
int main()
{
  {
      Weapon club = Weapon("crude spiked club");
      HumanA bob("Bob", club);
      bob.attack();
      club.setType("some other type of club");
      bob.attack();
  }
  {
      Weapon club = Weapon("crude spiked club");
      HumanB jim("Jim");
      jim.setWeapon(club);
      jim.attack();
      club.setType("some other type of club");
      jim.attack();
  }
  return 0;
}
```

Don’t forget to check for memory leaks.

Este archivo `README.md` proporciona una descripción clara del proyecto, los requisitos de implementación y un ejemplo de cómo debería funcionar el código. También recuerda a los desarrolladores la importancia de la gestión de memoria en C++.
