# PmergeMe

## Descripción

**PmergeMe** es un programa diseñado para ordenar una secuencia de enteros positivos utilizando el algoritmo de **ordenación por inserción-merge** (Ford-Johnson). Este programa implementa el algoritmo de ordenación utilizando al menos dos contenedores diferentes para gestionar y ordenar la secuencia de números. Además, puede manejar secuencias de hasta **3000 enteros diferentes**.

## Características

- El nombre del programa es **PmergeMe**.
- El programa acepta una secuencia de enteros positivos como argumento.
- Utiliza el algoritmo de **ordenación por inserción-merge** (Ford-Johnson) para ordenar la secuencia.
- Si se produce un error durante la ejecución del programa, se muestra un mensaje de error en la salida estándar.
- El programa utiliza al menos **dos contenedores diferentes** en su implementación.
- Puede manejar secuencias de **al menos 3000 enteros diferentes**.

## Reglas

- El programa debe mostrar la secuencia de enteros **desordenada** en la primera línea.
- Debe mostrar la secuencia **ordenada** en la segunda línea.
- En la tercera línea, se debe mostrar el tiempo que ha tomado el algoritmo en ordenar la secuencia utilizando el **primer contenedor**.
- En la cuarta línea, se debe mostrar el tiempo que ha tomado el algoritmo en ordenar la secuencia utilizando el **segundo contenedor**.
- El formato del tiempo mostrado es libre, pero debe ser lo suficientemente preciso como para mostrar la diferencia entre los dos contenedores utilizados.

## Ejemplo de uso

```bash
$> ./PmergeMe 3 5 9 7 4
Before: 3 5 9 7 4
After:
3 4 5 7 9
Time to process a range of 5 elements with std::[..] : 0.00031 us
Time to process a range of 5 elements with std::[..] : 0.00014 us
$> ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
Before: 141 79 526 321 [...]
After:
79 141 321 526 [...]
Time to process a range of 3000 elements with std::[..] : 62.14389 us
Time to process a range of 3000 elements with std::[..] : 69.27212 us
$> ./PmergeMe "-1" "2"
Error
$> # For OSX USER:
$> ./PmergeMe `jot -r 3000 1 100000 | tr '\n' ' '`
[...]
$>
```
## Advertencias

Los contenedores utilizados en ejercicios anteriores están prohibidos en este ejercicio.
La gestión de errores relacionados con números duplicados queda a discreción del desarrollador.

## Requisitos Técnicos

El programa debe ser compilable en C++98.
Es altamente recomendado implementar el algoritmo por separado para cada contenedor utilizado.
El programa debe poder manejar un mínimo de 3000 números diferentes.
