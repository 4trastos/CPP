# Proyecto EasyFind en C++

## Descripción

Un primer ejercicio sencillo es la forma ideal de comenzar con buen pie.

Escribe una plantilla de función (`function template`) llamada `easyfind` que acepte un tipo `T`. Esta función toma dos parámetros:
- El primero es de tipo `T` (que se supone es un contenedor de enteros).
- El segundo es un número entero.

La función debe encontrar la primera ocurrencia del segundo parámetro dentro del primer parámetro.

Si no se encuentra ninguna ocurrencia, puedes lanzar una excepción o devolver un valor de error de tu elección. Si necesitas algo de inspiración, analiza cómo se comportan los contenedores estándar de la STL (Standard Template Library).

Por supuesto, implementa y entrega tus propias pruebas para asegurar que todo funcione como se espera.

**Nota:** No es necesario manejar contenedores asociativos.

## Características

- **Función Plantilla (Template):** Implementa una función genérica `easyfind` que trabaje con cualquier contenedor de enteros.
- **Búsqueda en Contenedores:** La función busca la primera ocurrencia de un número entero dentro del contenedor.
- **Manejo de Errores:** Si no se encuentra el valor, puedes optar por lanzar una excepción o devolver un valor de error que tú definas.
- **Pruebas Personalizadas:** Desarrolla pruebas exhaustivas para asegurar el correcto funcionamiento de la función.

## Instalación

1. **Clonar el Repositorio:**
    ```bash
    git clone https://github.com/tu_usuario/easyfind.git
    ```
2. **Navegar al Directorio del Proyecto:**
    ```bash
    cd easyfind
    ```
3. **Compilar el Proyecto:**
    Utiliza `make` para compilar los archivos fuente.
    ```bash
    make
    ```

## Uso

1. **Ejecutar el Programa:**
    ```bash
    ./easyfind
    ```
2. **Llamar a la Función `easyfind`:**
    - Puedes llamar a la función `easyfind` pasando un contenedor de enteros como primer parámetro, y el número entero que deseas buscar como segundo parámetro.
    - Ejemplo con un `std::vector`:
    ```cpp
    std::vector<int> v = {1, 2, 3, 4, 5};
    int value = 3;
    try {
        std::vector<int>::iterator result = easyfind(v, value);
        std::cout << "Valor encontrado: " << *result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    ```

## Pruebas

Es crucial realizar pruebas para garantizar que la función `easyfind` funcione correctamente. A continuación se presentan algunos escenarios de prueba recomendados:

1. **Prueba con un Contenedor de Enteros:**
    - Utiliza diferentes contenedores como `std::vector`, `std::list`, etc., para probar la función con números que están presentes y otros que no lo están.
    - Verifica que cuando el número está presente, la función devuelve el iterador correcto.
    - Verifica que cuando el número no está presente, se lanza la excepción esperada.

2. **Prueba de Errores:**
    - Si el número no se encuentra en el contenedor, asegúrate de que se maneja correctamente (ya sea lanzando una excepción o devolviendo un valor de error).

## Ejemplo de Código

### easyfind.hpp

```cpp
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <iterator>
#include <exception>

template<typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("Valor no encontrado en el contenedor.");
    }
    return it;
}

#endif // EASYFIND_HPP
