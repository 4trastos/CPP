# Ejercicio 02: No, necesitas el formulario 28B, no el 28C...

Ahora que tienes formularios básicos, es momento de crear algunos más que realmente hagan algo.

En todos los casos, la clase base **Form** debe ser una clase abstracta, y por lo tanto, debe ser renombrada a **AForm**. Recuerda que los atributos del formulario deben seguir siendo privados y que estarán en la clase base.

## Clases concretas a implementar:
Añade las siguientes clases concretas:

### 1. ShrubberyCreationForm:
- Grados requeridos: Firma 145, Ejecución 137.
- Crea un archivo `<objetivo>_shrubbery` en el directorio de trabajo y escribe árboles en ASCII dentro de él.

### 2. RobotomyRequestForm:
- Grados requeridos: Firma 72, Ejecución 45.
- Hace algunos ruidos de perforación y luego informa que el objetivo `<objetivo>` ha sido robotizado con éxito el 50% del tiempo. En el otro 50%, informa que la robotización ha fallado.

### 3. PresidentialPardonForm:
- Grados requeridos: Firma 25, Ejecución 5.
- Informa que el objetivo `<objetivo>` ha sido perdonado por Zaphod Beeblebrox.

### Constructor de los formularios:
Todas las clases toman solo un parámetro en su constructor: el **objetivo** del formulario. Por ejemplo, "casa" si deseas plantar árboles en casa.

## Función execute():
Ahora, añade la función miembro **execute(Bureaucrat const & executor) const** a la clase base **AForm** e implementa una función para ejecutar la acción correspondiente en las clases concretas. Debes verificar que el formulario esté firmado y que el grado del burócrata que intenta ejecutar el formulario sea lo suficientemente alto. Si no es así, lanza una excepción apropiada.

Puedes decidir si quieres verificar los requisitos en cada clase concreta o en la clase base (y luego llamar a otra función para ejecutar el formulario). Sin embargo, una manera es más elegante que la otra.

## Función executeForm():
Por último, añade la función miembro **executeForm(AForm const & form)** a la clase **Bureaucrat**. Esta función debe intentar ejecutar el formulario. Si tiene éxito, imprime algo como:
`<bureaucrat> ejecutó <form>`
Si no, imprime un mensaje de error explícito.

## Pruebas:
Implementa y entrega algunas pruebas para asegurarte de que todo funciona como se espera.
