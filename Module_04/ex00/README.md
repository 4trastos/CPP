# Descripción del ejercicio

Para cada ejercicio, debes proporcionar las pruebas más completas posibles.  
Los constructores y destructores de cada clase deben mostrar mensajes específicos. No uses el mismo mensaje para todas las clases.

## Requisitos

1. Comienza implementando una clase base simple llamada **Animal**. Esta clase tiene un atributo protected:
   - `std::string type;`

2. Implementa una clase **Dog** que herede de **Animal**.
   
3. Implementa una clase **Cat** que herede de **Animal**.
   
4. Las dos clases derivadas deben establecer su campo `type` dependiendo de su nombre:
   - El tipo de la clase **Dog** se inicializa a `"Dog"`.
   - El tipo de la clase **Cat** se inicializa a `"Cat"`.
   
5. El tipo de la clase **Animal** puede quedar vacío o establecerse a un valor de tu elección.

## Funcionalidades

Cada animal debe poder usar la función miembro:

- `makeSound()`

Esta función debe imprimir un sonido apropiado para el animal (los gatos no ladran).

## Ejemplo de código

Al ejecutar el siguiente código, se deben imprimir los sonidos específicos de las clases **Dog** y **Cat**, no los de la clase **Animal**:

```cpp
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // Debería imprimir el sonido de un gato.
    j->makeSound(); // Debería imprimir el sonido de un perro.
    meta->makeSound(); // Debería imprimir el sonido del Animal.

    delete i;
    delete j;
    delete meta;

    return 0;
}
```

## Desafío adicional

Para asegurarte de que entiendes cómo funciona el polimorfismo, implementa una clase **WrongCat** que herede de una clase **WrongAnimal**. En este caso, **WrongCat** no debe comportarse como las clases correctas (es decir, **Cat** y **Animal**), y debería heredar el comportamiento de **WrongAnimal** en lugar de sobrescribirlo. 

Si reemplazas **Animal** y **Cat** por las clases incorrectas en el código anterior, **WrongCat** debería imprimir el sonido de **WrongAnimal** en lugar de su propio sonido.

### Ejemplo de código

```cpp
int main()
{
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();

    std::cout << wrong_cat->getType() << " " << std::endl;

    wrong_cat->makeSound(); // Debería imprimir el sonido de WrongAnimal, no el de un gato.
    wrong_meta->makeSound(); // Debería imprimir el sonido de WrongAnimal.

    delete wrong_cat;
    delete wrong_meta;

    return 0;
}
```
