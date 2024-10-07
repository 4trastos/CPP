# Proyecto de Herencia en C++

Este proyecto implementa una clase base y varias clases derivadas en C++. El objetivo es comprender el uso de la herencia, la identificación de tipos y la gestión de memoria en C++.

## Descripción

Se implementa una clase `Base` que tiene solo un destructor virtual público. Se crean tres clases vacías `A`, `B` y `C`, que heredan públicamente de `Base`. Estas cuatro clases no necesitan estar diseñadas en la Forma Canónica Ortodoxa.

Se implementan las siguientes funciones:

- **Base * generate(void);**  
  Esta función instancia aleatoriamente `A`, `B` o `C` y devuelve la instancia como un puntero a `Base`. Puedes utilizar cualquier método que desees para la implementación de la elección aleatoria.

- **void identify(Base* p);**  
  Esta función imprime el tipo actual del objeto al que apunta `p`: "A", "B" o "C".

- **void identify(Base& p);**  
  Esta función imprime el tipo actual del objeto al que se refiere `p`: "A", "B" o "C". Se prohíbe el uso de un puntero dentro de esta función.

- **Incluir el encabezado `typeinfo` está prohibido.**

## Prueba del Programa

Se incluye un programa de prueba que verifica que todo funcione como se espera.

## Compilación

Para compilar el proyecto, utiliza el siguiente comando:

```bash
./serialization
```
### Notas
- Puedes personalizar el título y la sección de licencia según tus necesidades.
- Asegúrate de que el archivo `README.md` esté en la raíz de tu repositorio de GitHub para que sea visible al acceder al repositorio.
- Si tienes otras secciones que deseas agregar, como ejemplos de uso o información de contacto, no dudes en incluirlas.
