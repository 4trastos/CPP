# Serializador

Este proyecto implementa una clase `Serializer`, la cual no puede ser inicializada por el usuario de ninguna forma. La clase cuenta con los siguientes métodos estáticos:

## Métodos

### `uintptr_t serialize(Data* ptr);`
Este método toma un puntero y lo convierte en un tipo de entero sin signo `uintptr_t`.

### `Data* deserialize(uintptr_t raw);`
Este método toma un parámetro de tipo entero sin signo y lo convierte en un puntero a `Data`.

## Requisitos

- Debes crear una estructura `Data` que no esté vacía (es decir, que tenga miembros de datos).
- Usa el método `serialize()` en la dirección del objeto `Data` y pasa su valor de retorno al método `deserialize()`.
- Asegúrate de que el valor de retorno de `deserialize()` sea igual al puntero original.

## Pruebas

El programa incluye pruebas para verificar que la clase `Serializer` funciona como se espera. Asegúrate de entregar también los archivos que definen la estructura `Data`.

---

Este proyecto pone en práctica conceptos relacionados con la serialización y deserialización de punteros, trabajando con la conversión de punteros a enteros sin signo y viceversa.
