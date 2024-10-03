# ScalarConverter - Conversor de Literales Escalares en C++

# ScalarConverter

Escribe una clase `ScalarConverter` que contendrá solo un método estático "convert" que tomará como parámetro una representación en cadena de un literal de C++ en su forma más común y mostrará su valor en la siguiente serie de tipos escalares:

- `char`
- `int`
- `float`
- `double`

Dado que esta clase no necesita almacenar nada, **no debe ser instanciable** por los usuarios.

Exceptuando los parámetros de tipo `char`, solo se utilizará la notación decimal.

### Ejemplos de literales de char:
- `'c'`, `'a'`, ...

Para simplificar las cosas, ten en cuenta que no se deben utilizar caracteres no visualizables como entradas. Si una conversión a `char` no es visualizable, se imprimirá un mensaje informativo.

### Ejemplos de literales de int:
- `0`, `-42`, `42`, ...

### Ejemplos de literales de float:
- `0.0f`, `-4.2f`, `4.2f`, ...

También debes manejar estos pseudo-límites (por ciencia):
- `-inff`, `+inff`, `nanf`.

### Ejemplos de literales de double:
- `0.0`, `-4.2`, `4.2`, ...

También debes manejar estos pseudo-límites (por diversión):
- `-inf`, `+inf`, `nan`.

### Programa de prueba

Escribe un programa para probar que tu clase funciona como se espera. Primero, debes detectar el tipo del literal pasado como parámetro, convertirlo de cadena a su tipo real y luego convertirlo explícitamente a los otros tres tipos de datos escalares. Finalmente, muestra los resultados como se indica a continuación.

Si una conversión no tiene sentido o excede los límites permitidos, muestra un mensaje para informar al usuario que la conversión del tipo es imposible. Asegúrate de incluir los encabezados necesarios para manejar los límites numéricos y los valores especiales.

## Descripción

`ScalarConverter` es una clase en C++ diseñada para convertir representaciones en cadena de literales escalares en sus tipos fundamentales: `char`, `int`, `float` y `double`. Esta clase facilita la interpretación y conversión de diferentes tipos de literales, manejando también pseudo-límites como `-inff`, `+inff`, `nanf`, `-inf`, `+inf` y `nan`.

## Características

- **Conversión Multitipo:** Convierte una cadena de texto que representa un literal en `char`, `int`, `float` y `double`.
- **Manejo de Pseudo-Límites:** Soporta conversiones de literales especiales como `nan`, `+inf`, `-inf` y sus variantes con sufijo `f`.
- **Interfaz Sencilla:** Únicamente contiene un método estático `convert` para realizar las conversiones, evitando la necesidad de instanciar la clase.
- **Mensajes Informativos:** Proporciona mensajes claros cuando una conversión no es posible o resulta en un carácter no desplegable.
- **Validación de Entrada:** Detecta el tipo de literal proporcionado y maneja adecuadamente los errores y sobreflows.

## Requisitos

- **Compilador de C++:** Compatible con C++11 o superior.
- **Bibliotecas Estándar de C++:** Utiliza `<iostream>`, `<string>`, `<sstream>`, `<limits>`, `<cmath>`, entre otras.

## Instalación

1. **Clonar el Repositorio:**

    ```bash
    git clone https://github.com/4trastos/ScalarConverter.git
    cd ScalarConverter
    ```

2. **Compilar el Proyecto:**

    Asegúrate de tener un compilador de C++ instalado, como `g++`. Luego, ejecuta:

    ```bash
    g++ -std=c++11 -Wall -Wextra -Werror ScalarConverter.cpp main.cpp -o convert
    ```

    - `ScalarConverter.cpp`: Archivo fuente de la clase `ScalarConverter`.
    - `main.cpp`: Archivo fuente que contiene la función `main` para probar la clase.
    - `convert`: Archivo ejecutable resultante.

## Uso

El programa se ejecuta desde la línea de comandos, tomando como argumento una cadena que representa un literal escalar en C++. El programa intentará convertir y mostrar el valor en los cuatro tipos mencionados.

### Sintaxis

```bash
./convert <literal>
```
```
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
./convert 'a'
char: a
int: 97
float: 97.0f
double: 97.0
```

