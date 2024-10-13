# MutantStack en C++

## Descripción

Es momento de avanzar hacia cosas más serias. Desarrollemos algo inusual.

El contenedor `std::stack` es muy útil. Desafortunadamente, es uno de los únicos contenedores de la STL (Standard Template Library) que **NO** es iterable. Eso es una lástima. Pero, ¿por qué deberíamos aceptar esto? Especialmente si podemos tomar la libertad de modificar el `std::stack` original para crear las funcionalidades que faltan.

Para reparar esta injusticia, debes hacer que el contenedor `std::stack` sea iterable. Para ello, crea una clase `MutantStack`. Esta clase se implementará en términos de un `std::stack` y ofrecerá todas sus funciones miembro, además de una característica adicional: **iteradores**.

Por supuesto, deberás escribir y entregar tus propias pruebas para asegurar que todo funcione como se espera.

### Ejemplo de Prueba

A continuación, se presenta un ejemplo de cómo se espera que funcione la clase `MutantStack`:

```cpp
#include <iostream>
#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl; // Imprime 17
    mstack.pop();
    std::cout << mstack.size() << std::endl; // Imprime 1
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...] 
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::stack<int> s(mstack); // Copia de la MutantStack a std::stack
    return 0;
}
```

### Explicación del Cambio:
- **Comparación con `std::list`:** Se añadió un ejemplo donde se reemplaza `MutantStack` con `std::list` y se detalla que ambos comportamientos deberían ser similares.
- **Actualización de funciones:** Se menciona que cuando se prueben otros contenedores, es necesario adaptar las funciones miembro correspondientes, como `push()` convirtiéndose en `push_back()` para contenedores como `std::list`.

Este añadido deja claro que `MutantStack` está diseñado para ser iterable como otros contenedores estándar de la STL.
