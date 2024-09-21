## Exercise 01: Form up, maggots!

# Clase Formulario (Form)

Ahora que tenemos burócratas (Bureaucrats), vamos a darles algo que hacer. ¿Qué mejor actividad podría haber que llenar una pila de formularios?

Vamos a crear una clase **Form** (Formulario). Esta clase tiene los siguientes atributos:
- Un nombre constante.
- Un booleano que indica si está firmado (por defecto, no lo está en el momento de su construcción).
- Un grado constante requerido para firmarlo.
- Un grado constante requerido para ejecutarlo.

Todos estos atributos son privados, no protegidos.

### Reglas de validación para los grados:
Los grados del Formulario siguen las mismas reglas que se aplican al **Bureaucrat**. Por lo tanto, se lanzarán las siguientes excepciones si el grado de un formulario está fuera de los límites permitidos:
- `Form::GradeTooHighException`: si el grado es demasiado alto.
- `Form::GradeTooLowException`: si el grado es demasiado bajo.

### Métodos a implementar:
- Escribe **getters** para todos los atributos.
- Sobrecarga del operador de inserción («) para que imprima toda la información del formulario.

### Función beSigned():
Añade también una función miembro **beSigned()** al formulario que toma un **Bureaucrat** como parámetro. Esta función cambia el estado del formulario a "firmado" si el grado del burócrata es lo suficientemente alto (es decir, mayor o igual al grado requerido para firmarlo). Recuerda que el grado 1 es más alto que el grado 2.
Si el grado del burócrata es demasiado bajo, se lanzará una excepción **Form::GradeTooLowException**.

### Función signForm():
Por último, añade una función miembro **signForm()** al **Bureaucrat**. Si el formulario se firma, imprimirá algo como:
`<bureaucrat> firmó <form>`
```
De lo contrario, imprimirá algo como:
```
` <bureaucrat> no pudo firmar <form> porque <razón>`

### Tests:
Implementa y entrega algunas pruebas para asegurarte de que todo funciona como se espera.


