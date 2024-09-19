# Clase Animal no instanciable

## Descripción

Crear objetos de la clase `Animal` no tiene sentido, ya que no hacen ningún sonido por defecto. Para evitar posibles errores y garantizar que la clase se utilice correctamente, se ha decidido que la clase `Animal` no debe ser instanciable.

## Objetivo

El objetivo de este ejercicio es modificar la clase base `Animal` para que no pueda ser instanciada directamente. Esto se logra haciendo que la clase sea abstracta al incluir al menos una función virtual pura.

Todo debe seguir funcionando como antes, con las clases derivadas (`Dog`, `Cat`, etc.) capaces de ser instanciadas y de implementar sus propios comportamientos, como la función `makeSound()`.

## Pasos a seguir

1. Modificar la clase `Animal` para que no sea instanciable.
2. Esto se consigue añadiendo una función virtual pura, haciendo que `Animal` se convierta en una **clase abstracta**.
3. Asegurarse de que las clases derivadas como `Dog` y `Cat` puedan seguir siendo instanciadas y funcionen correctamente.
4. Opcional: Si lo deseas, puedes cambiar el nombre de la clase `Animal` a algo como `AAnimal`, añadiendo un prefijo "A" para hacer más claro que es una clase abstracta.

## Ejemplo de implementación

- La clase `Animal` ahora debe tener al menos un método virtual puro, como por ejemplo:

```cpp
virtual void makeSound() const = 0;
```
