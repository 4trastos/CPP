# Ejercicio 02: Ahora estamos hablando

## Descripción

En este ejercicio, mejoraremos nuestra clase personalizada añadiendo sobrecargas de operadores y funciones miembro estáticas para proporcionar mayor funcionalidad y facilidad de uso. El enfoque principal está en sobrecargar los operadores de comparación y aritméticos, así como en implementar funciones para encontrar el valor mínimo y máximo entre dos números de punto fijo.

### Objetivos:
1. Sobrecargar los operadores de comparación y aritméticos para la clase.
2. Implementar los operadores de incremento y decremento.
3. Añadir funciones miembro estáticas para encontrar el valor mínimo y máximo de dos números de punto fijo.

## Funcionalidades

Se implementan los siguientes operadores y funciones como parte de este ejercicio:

### 1. **Operadores de Comparación**
   Sobrecargar los 6 operadores de comparación para la clase:
   - `>` : Mayor que
   - `<` : Menor que
   - `>=` : Mayor o igual que
   - `<=` : Menor o igual que
   - `==` : Igual a
   - `!=` : Distinto de

### 2. **Operadores Aritméticos**
   Sobrecargar los 4 operadores aritméticos:
   - `+` : Suma
   - `-` : Resta
   - `*` : Multiplicación
   - `/` : División

### 3. **Operadores de Incremento/Decremento**
   Sobrecargar los operadores de pre-incremento, post-incremento, pre-decremento y post-decremento, que aumentarán o disminuirán el valor de punto fijo en la mínima representación ϵ, tal que `1 + ϵ > 1`.

### 4. **Funciones Estáticas**
   Añadir las siguientes funciones miembro estáticas:

   - `min`: Devuelve una referencia al menor de dos números de punto fijo (versión no constante).
   - `min`: Devuelve una referencia al menor de dos números de punto fijo constantes (versión constante).
   - `max`: Devuelve una referencia al mayor de dos números de punto fijo (versión no constante).
   - `max`: Devuelve una referencia al mayor de dos números de punto fijo constantes (versión constante).

## Cómo utilizar

Implementa estas funcionalidades en tu clase para mejorar el manejo de números de punto fijo. La sobrecarga de operadores permitirá una manipulación más intuitiva de los objetos de esta clase.

# Ejercicio: Prueba de Funcionalidades de la Clase Fixed

## Descripción

Es tu responsabilidad probar todas las funcionalidades de tu clase `Fixed`. Para verificar que la implementación de la clase está funcionando correctamente, puedes ejecutar el siguiente código de prueba.

### Código de prueba:

```cpp
#include <iostream>

int main(void) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}
```

### Salida esperada:
```cpp
$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>
```
