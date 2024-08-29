# Fixed Class - Extended Functionality

Este proyecto es una continuación del ejercicio anterior, donde implementamos una clase `Fixed` que utilizaba una representación de número en punto fijo. En esta versión mejorada, agregaremos constructores y funciones miembro que permiten que la clase maneje valores enteros y de punto flotante, además de convertir entre estos tipos de datos.

## Nuevas funcionalidades

### Constructores

1. **Constructor que toma un entero constante como parámetro:**
   - Este constructor convierte el valor entero al valor correspondiente en punto fijo.
   - El valor de los bits fraccionales se inicializa en 8, como en el ejercicio 00.

2. **Constructor que toma un número de punto flotante constante como parámetro:**
   - Este constructor convierte el valor de punto flotante al valor correspondiente en punto fijo.
   - El valor de los bits fraccionales se inicializa en 8, como en el ejercicio 00.

### Funciones miembro

1. **`float toFloat( void ) const;`**
   - Esta función convierte el valor de punto fijo a un valor de punto flotante.

2. **`int toInt( void ) const;`**
   - Esta función convierte el valor de punto fijo a un valor entero.

### Sobrecarga del operador de inserción

- **Sobrecarga del operador `<<`:** 
  - Inserta una representación en punto flotante del número en punto fijo en el objeto de flujo de salida pasado como parámetro.

## Ejemplo de ejecución

El siguiente código muestra cómo se pueden utilizar estas nuevas funcionalidades:

```cpp
#include <iostream>

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}
```

## Resultado esperado:

```cpp
$> ./a.out
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Copy assignment operator called
Float constructor called
Copy assignment operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called
$>
```
