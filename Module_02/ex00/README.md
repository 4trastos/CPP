# Fixed-Point Number Class in Orthodox Canonical Form

Este proyecto implementa una clase en la **Forma Ortodoxa Canónica** que representa un número en punto fijo.

## Miembros Privados

- Un entero para almacenar el valor del número en punto fijo.
- Un entero constante estático para almacenar el número de bits fraccionales. Su valor siempre será el literal entero `8`.

## Miembros Públicos

- Un **constructor por defecto** que inicializa el valor del número en punto fijo a `0`.
- Un **constructor de copia**.
- Una **sobrecarga del operador de asignación por copia**.
- Un **destructor**.
- Una función miembro `int getRawBits( void ) const;` que devuelve el valor bruto del número en punto fijo.
- Una función miembro `void setRawBits( int const raw );` que establece el valor bruto del número en punto fijo.

## Ejecución de este código

A continuación se muestra un ejemplo de cómo se puede utilizar esta clase:

```cpp
#include <iostream>

int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
```
## Salida esperada

```cpp
$> ./a.out
Default constructor called
Copy constructor called
Copy assignment operator called // <-- Esta línea puede faltar dependiendo de tu implementación
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
$>
```
