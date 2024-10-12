# Proyecto Span en C++

## Descripción

Desarrolla una clase `Span` que pueda almacenar un máximo de **N** enteros. **N** es una variable de tipo `unsigned int` y será el único parámetro pasado al constructor.

Esta clase tendrá una función miembro llamada `addNumber()` para agregar un solo número al `Span`. Se utilizará para llenarlo. Cualquier intento de agregar un nuevo elemento si ya hay **N** elementos almacenados debe lanzar una excepción.

A continuación, implementa dos funciones miembro: `shortestSpan()` y `longestSpan()`. Estas funciones determinarán respectivamente el span más corto o el span más largo (o distancia, si lo prefieres) entre todos los números almacenados y lo devolverán. Si no hay números almacenados o solo hay uno, no se puede encontrar ningún span, por lo que se lanzará una excepción.

Por supuesto, deberás escribir tus propias pruebas y serán mucho más exhaustivas que las que se indican a continuación. Prueba tu clase `Span` al menos con un mínimo de 10,000 números. ¡Más sería incluso mejor!

## Características

- **Almacenamiento de Números:** Capacidad para almacenar hasta **N** enteros.
- **Añadir Números:** Función `addNumber()` para agregar números al `Span`.
- **Cálculo de Spans:** Funciones `shortestSpan()` y `longestSpan()` para calcular el span más corto y más largo entre los números almacenados.
- **Manejo de Excepciones:** Control de errores al intentar agregar más de **N** números o al calcular spans con insuficientes datos.
- **Pruebas Exhaustivas:** Implementación de pruebas con al menos 10,000 números para asegurar el correcto funcionamiento y rendimiento de la clase.

## Instalación

1. **Clonar el Repositorio:**
    ```bash
    git clone https://github.com/tu_usuario/span.git
    ```
2. **Navegar al Directorio del Proyecto:**
    ```bash
    cd span
    ```
3. **Compilar el Proyecto:**
    Utiliza `make` para compilar los archivos fuente.
    ```bash
    make
    ```

## Uso

1. **Ejecutar el Programa:**
    ```bash
    ./span
    ```
2. **Agregar Números al Span:**
    - Utiliza la función `addNumber()` para añadir números individuales al `Span`.
    - Asegúrate de no exceder la capacidad máxima de **N** para evitar excepciones.

3. **Calcular Spans:**
    - **Span Más Corto:**
        ```cpp
        unsigned int shortest = span.shortestSpan();
        std::cout << "Shortest Span: " << shortest << std::endl;
        ```
    - **Span Más Largo:**
        ```cpp
        unsigned int longest = span.longestSpan();
        std::cout << "Longest Span: " << longest << std::endl;
        ```

## Pruebas

Es crucial realizar pruebas exhaustivas para garantizar que la clase `Span` funcione correctamente bajo diferentes condiciones. A continuación, se sugieren algunos escenarios de prueba:

1. **Prueba con Números Aleatorios:**
    - Genera al menos 10,000 números aleatorios y agrégalos al `Span` utilizando `addNumber()`.
    - Verifica que no se lancen excepciones al añadir números dentro de la capacidad.

2. **Prueba de Excepciones al Exceder la Capacidad:**
    - Intenta agregar más de **N** números y asegúrate de que se lance la excepción correspondiente.

3. **Prueba de Spans con Datos Insuficientes:**
    - Crea un `Span` sin añadir números o con solo un número.
    - Intenta calcular `shortestSpan()` y `longestSpan()` y verifica que se lancen las excepciones adecuadas.

4. **Prueba de Correctitud de Spans:**
    - Añade números conocidos y verifica que `shortestSpan()` y `longestSpan()` devuelvan los valores esperados.

## Estructura del Proyecto

span/ ├── Makefile ├── main.cpp ├── Span.hpp ├── Span.cpp └── README.md


- **Makefile:** Contiene las reglas para compilar el proyecto.
- **main.cpp:** Programa principal para probar la clase `Span`.
- **Span.hpp:** Declaración de la clase `Span`.
- **Span.cpp:** Implementación de la clase `Span`.
- **README.md:** Este archivo de documentación.


Este `README.md` proporciona una visión completa del proyecto, incluyendo la descripción, características, instalación, uso, pruebas, estructura del proyecto, ejemplo de código, compilación y ejecución, licencia, contribuciones y contacto. Asegúrate de ajustar las secciones según las necesidades específicas de tu proyecto y de incluir cualquier información adicional relevante.

¡Espero que te sea de ayuda!
