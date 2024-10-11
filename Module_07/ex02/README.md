# Clase Plantilla `Array`

Desarrolla una clase plantilla `Array` que contenga elementos de tipo `T` y que implemente el siguiente comportamiento y funciones:

- **Constructor sin parámetros**: Crea un array vacío.
- **Constructor con un parámetro `unsigned int n`**: Crea un array de `n` elementos inicializados por defecto.
  - Sugerencia: Intenta compilar `int *a = new int();` y luego muestra `*a`.
- **Constructor por copia y operador de asignación**: En ambos casos, modificar el array original o su copia después de copiar no debe afectar al otro array.
- **Debes utilizar el operador `new[]` para asignar memoria**. La asignación preventiva (asignar memoria por adelantado) está prohibida. Tu programa nunca debe acceder a memoria no asignada.
- Los elementos pueden ser accedidos mediante el operador de subíndice `[ ]`.
- Al acceder a un elemento con el operador `[ ]`, si su índice está fuera de los límites, se debe lanzar una excepción `std::exception`.
- **Función miembro `size()`** que devuelve el número de elementos en el array. Esta función miembro no toma parámetros y no debe modificar la instancia actual.

Como de costumbre, asegúrate de que todo funcione como se espera y entrega un archivo `main.cpp` que contenga tus pruebas.
