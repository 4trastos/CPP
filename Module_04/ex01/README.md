# Descripción del ejercicio

En este proyecto, debes implementar clases que manejen correctamente la memoria y el polimorfismo en C++. Los **constructores** y **destructores** de cada clase deben mostrar mensajes específicos para asegurarte de que se están llamando en el orden esperado.

## Requisitos

1. Implementa una clase **Brain** que contenga un array de 100 `std::string` llamado `ideas`.  
   Esta clase servirá para representar las ideas que tienen los objetos de tipo **Dog** y **Cat**.

2. Las clases **Dog** y **Cat** tendrán un atributo privado de tipo `Brain*`. 
   - Al construir un **Dog** o un **Cat**, se debe crear un nuevo objeto **Brain** usando `new Brain()`.
   - Al destruir un **Dog** o un **Cat**, se debe liberar la memoria de su **Brain** con `delete`.

3. En la función `main`, debes crear y llenar un array de objetos **Animal**.
   - La mitad del array debe contener objetos de tipo **Dog**.
   - La otra mitad debe contener objetos de tipo **Cat**.

4. Al final de la ejecución del programa, debes recorrer el array y eliminar cada **Animal**.
   - Debes eliminar directamente los **Dog** y **Cat** como si fueran **Animal**.
   - Los destructores apropiados (de **Dog**, **Cat** y **Brain**) deben ser llamados en el orden esperado.

5. Asegúrate de verificar si hay **fugas de memoria**.

6. **Copias profundas**:
   - Las copias de los objetos **Dog** o **Cat** no deben ser superficiales (*shallow copies*). Esto significa que si copias un objeto **Dog** o **Cat**, debes asegurarte de que la copia sea una **copia profunda** de su atributo **Brain**.
   - Debes probar que tus copias son realmente copias profundas.

## Ejemplo de código

```cpp
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; // No debe generar fugas de memoria
    delete i;

    // ...
    return 0;
}
```

Este `README.md` proporciona una descripción clara de los requisitos del proyecto, incluyendo los puntos clave como la creación y eliminación de memoria dinámica, la correcta llamada a los destructores y la implementación de copias profundas.

