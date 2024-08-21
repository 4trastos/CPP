# Harl Automation

## Overview

Do you know Harl? We all do, do we? In case you don’t, find below the kind of comments Harl makes. They are classified by levels:

- **"DEBUG" level**: Debug messages contain contextual information. They are mostly used for problem diagnosis.  
  *Example*: "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"

- **"INFO" level**: These messages contain extensive information. They are helpful for tracing program execution in a production environment.  
  *Example*: "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"

- **"WARNING" level**: Warning messages indicate a potential issue in the system. However, it can be handled or ignored.  
  *Example*: "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."

- **"ERROR" level**: These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention.  
  *Example*: "This is unacceptable! I want to speak to the manager now."

## Objective

You are going to automate Harl. It won’t be difficult since it always says the same things. You need to create a `Harl` class with the following private member functions:

- `void debug(void);`
- `void info(void);`
- `void warning(void);`
- `void error(void);`

Harl also has a public member function that calls the four member functions above depending on the level passed as parameter:

- `void complain(std::string level);`

The goal of this exercise is to use pointers to member functions. This is not a suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think twice!

## Implementation

### Harl Class

The `Harl` class should be implemented to include the following functionalities:

- Private member functions for each level (`debug`, `info`, `warning`, `error`).
- A public member function (`complain`) that accepts a `std::string` parameter for the level and uses function pointers to call the appropriate private member function.

### Tests

Create and turn in tests to show that Harl complains a lot. You can use the examples of comments listed above in the subject or choose to use comments of your own.

## Usage

1. **Compile the Program**: Use a C++ compiler to compile the source files.
2. **Run the Program**: Execute the compiled binary to see Harl's various complaints based on different levels.

### Example

```cpp
#include "Harl.hpp"

int main()
{
    Harl h;
    h.complain("DEBUG");
    h.complain("INFO");
    h.complain("WARNING");
    h.complain("ERROR");
    return 0;
}
```


Este archivo `README.md` proporciona una visión general del proyecto, describe la funcionalidad esperada de la clase `Harl`, y ofrece instrucciones básicas sobre cómo utilizar y probar la implementación. Puedes adaptarlo según los detalles específicos de tu proyecto o agregar más información si es necesario.
