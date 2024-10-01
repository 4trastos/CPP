# Proyecto: Intern - Automatización de Formularios Burocráticos

## Descripción

Completar formularios es suficientemente molesto por sí solo, y sería cruel pedir a nuestros burócratas que lo hagan todo el día. Afortunadamente, existen los **internos**. En este ejercicio, debes implementar la clase `Intern`. El interno no tiene nombre, grado ni características únicas. Lo único que les importa a los burócratas es que hagan su trabajo.

Sin embargo, el interno tiene una capacidad importante: la función `makeForm()`. Esta función toma dos cadenas de caracteres (`std::string`). La primera es el nombre de un formulario y la segunda es el objetivo del formulario. Devuelve un puntero a un objeto `Form` (cuyo nombre es el que se pasa como parámetro) cuyo objetivo será inicializado con el segundo parámetro. Además, imprimirá algo como:

`Intern creates <form>`


Si el nombre del formulario pasado como parámetro no existe, se imprimirá un mensaje de error explícito.

## Requisitos

- **Clase Intern**:
  - No posee atributos como nombre o grado.
  - Función principal: `makeForm(const std::string& formName, const std::string& target)`
    - **Parámetros**:
      - `formName`: Nombre del formulario a crear.
      - `target`: Objetivo del formulario.
    - **Retorno**: Puntero a un objeto `Form`.
    - **Comportamiento**:
      - Crea un formulario del tipo especificado con el objetivo proporcionado.
      - Imprime un mensaje indicando la creación del formulario.
      - Si el `formName` no corresponde a ningún formulario conocido, imprime un mensaje de error.

- **Formularios Disponibles**:
  - `ShrubberyCreationForm`
  - `RobotomyRequestForm`
  - `PresidentialPardonForm`
  
  *(Asegúrate de implementar estos formularios antes de crear el interno)*

## Funcionalidades

- **makeForm()**:
  - Evita soluciones poco legibles y desordenadas como múltiples condiciones `if/else if/else`.
  - Utiliza estructuras más limpias y eficientes, como tablas de funciones o mapas, para manejar la creación de formularios.
  
- **Manejo de Excepciones**:
  - Si se intenta crear un formulario inexistente, se lanza una excepción o se maneja el error de manera adecuada.

## Ejemplo de Uso

El siguiente fragmento de código demuestra cómo un interno crea un `RobotomyRequestForm` dirigido a "Bender":

```cpp
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main() {
    Intern someRandomIntern;
    Form* rrf;

    try {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;
        // Aquí podrías ejecutar el formulario si tienes un burócrata adecuado
        // rrf->execute(bureaucrat);
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    delete rrf; // Asegúrate de liberar la memoria
    return 0;
}
```
