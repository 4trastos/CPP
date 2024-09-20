# Proyecto: Bureaucrat - Una Pesadilla Artificial de Oficinas

## Descripción

Diseñemos una pesadilla artificial de oficinas, pasillos, formularios y filas de espera. ¿Suena divertido? ¿No? Qué lástima. 

Empezaremos con el engranaje más pequeño de esta vasta máquina burocrática: el **Bureaucrat** (burócrata).

## Requisitos del Bureaucrat

Un **Bureaucrat** debe tener:

- Un nombre constante.
- Un grado (grade) que oscila entre 1 (el grado más alto posible) y 150 (el grado más bajo posible).

Cualquier intento de instanciar un **Bureaucrat** con un grado inválido debe lanzar una excepción: 
- **Bureaucrat::GradeTooHighException** (si el grado es demasiado alto)
- **Bureaucrat::GradeTooLowException** (si el grado es demasiado bajo)

## Funcionalidades

- Se deben proporcionar métodos getters para ambos atributos:
  - `getName()`
  - `getGrade()`

- Se deben implementar también dos funciones miembro para **incrementar** o **decrementar** el grado del burócrata. 
  - Si el grado está fuera del rango permitido (1-150), estas funciones lanzarán las mismas excepciones que el constructor.

Recuerda que el **grado 1 es el más alto** y el **grado 150 es el más bajo**. Por lo tanto, **incrementar** un grado de 3 debe dar un grado de 2 al burócrata.

## Manejo de Excepciones

Las excepciones lanzadas deben poder ser capturadas utilizando bloques `try` y `catch`:

```cpp
try
{
    /* realizar algunas acciones con los burócratas */
}
catch (std::exception & e)
{
    /* manejar la excepción */
}
```
# Sobrecarga del Operador de Inserción en Bureaucrat

## Descripción

En este proyecto, vamos a sobrecargar el operador de inserción (`<<`) para la clase `Bureaucrat`. El propósito es permitir que los objetos de esta clase puedan imprimirse utilizando `std::cout` de una manera sencilla y legible.

La impresión deberá seguir este formato:

```cpp
<nombre>, bureaucrat grade <grado>.
```
