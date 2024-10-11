#include "Fixed.hpp"
#include "Array.hpp"

int main()
{
    srand(time(NULL));
    // Prueba 1: Crear un array vacío
    std::cout << "Prueba 1: Crear un array vacío" << std::endl;
    Array<int> emptyArray;
    std::cout << "Tamaño del array vacío: " << emptyArray.size() << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 2: Crear un array de enteros con 5 elementos
    std::cout << "Prueba 2: Crear un array de enteros con 5 elementos" << std::endl;
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); i++)
    {
        intArray[i] = std::rand() % 100;;
    }
    std::cout << "Contenido del intArray:" << std::endl;
    for (unsigned int i = 0; i < intArray.size(); i++)
    {
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 3: Acceso a un índice válido
    std::cout << "Prueba 3: Acceso a un índice válido" << std::endl;
    try
    {
        std::cout << "intArray[2] = " << intArray[2] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 4: Acceso a un índice inválido (negativo)
    std::cout << "Prueba 4: Acceso a un índice inválido (negativo)" << std::endl;
    try
    {
        std::cout << "intArray[-1] = " << intArray[-1] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 5: Acceso a un índice inválido (fuera de límites)
    std::cout << "Prueba 5: Acceso a un índice inválido (fuera de límites)" << std::endl;
    try
    {
        std::cout << "intArray[10] = " << intArray[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 6: Constructor de copia
    std::cout << "Prueba 6: Constructor de copia" << std::endl;
    Array<int> copiedArray(intArray);
    std::cout << "Contenido del copiedArray (copiado de intArray):" << std::endl;
    for (unsigned int i = 0; i < copiedArray.size(); i++)
    {
        std::cout << "copiedArray[" << i << "] = " << copiedArray[i] << std::endl;
    }

    // Modificar el original y verificar que la copia no se vea afectada
    intArray[0] = 100;
    std::cout << "Después de modificar intArray[0] a 100:" << std::endl;
    std::cout << "intArray[0] = " << intArray[0] << std::endl;
    std::cout << "copiedArray[0] = " << copiedArray[0] << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 7: Operador de asignación
    std::cout << "Prueba 7: Operador de asignación" << std::endl;
    Array<int> assignedArray;
    assignedArray = intArray;
    std::cout << "Contenido del assignedArray (asignado desde intArray):" << std::endl;
    for (unsigned int i = 0; i < assignedArray.size(); i++)
    {
        std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
    }

    // Modificar el original y verificar que la asignación no se vea afectada
    intArray[1] = 200;
    std::cout << "Después de modificar intArray[1] a 200:" << std::endl;
    std::cout << "intArray[1] = " << intArray[1] << std::endl;
    std::cout << "assignedArray[1] = " << assignedArray[1] << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 8: Array de cadenas de texto
    std::cout << "Prueba 8: Array de cadenas de texto" << std::endl;
    Array<std::string> stringArray(3);
    stringArray[0] = "Hola";
    stringArray[1] = "Mundo";
    stringArray[2] = "C++";
    std::cout << "Contenido del stringArray:" << std::endl;
    for (unsigned int i = 0; i < stringArray.size(); i++)
    {
        std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
    }
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 9: Constructor de copia para arrays de cadenas
    std::cout << "Prueba 9: Constructor de copia para arrays de cadenas" << std::endl;
    Array<std::string> copiedStringArray(stringArray);
    std::cout << "Contenido del copiedStringArray (copiado de stringArray):" << std::endl;
    for (unsigned int i = 0; i < copiedStringArray.size(); i++)
    {
        std::cout << "copiedStringArray[" << i << "] = " << copiedStringArray[i] << std::endl;
    }

    // Modificar el original y verificar que la copia no se vea afectada
    stringArray[0] = "Adiós";
    std::cout << "Después de modificar stringArray[0] a 'Adiós':" << std::endl;
    std::cout << "stringArray[0] = " << stringArray[0] << std::endl;
    std::cout << "copiedStringArray[0] = " << copiedStringArray[0] << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 10: Asignación para arrays de cadenas
    std::cout << "Prueba 10: Operador de asignación para arrays de cadenas" << std::endl;
    Array<std::string> assignedStringArray;
    assignedStringArray = stringArray;
    std::cout << "Contenido del assignedStringArray (asignado desde stringArray):" << std::endl;
    for (unsigned int i = 0; i < assignedStringArray.size(); i++)
    {
        std::cout << "assignedStringArray[" << i << "] = " << assignedStringArray[i] << std::endl;
    }

    // Modificar el original y verificar que la asignación no se vea afectada
    stringArray[1] = "Universo";
    std::cout << "Después de modificar stringArray[1] a 'Universo':" << std::endl;
    std::cout << "stringArray[1] = " << stringArray[1] << std::endl;
    std::cout << "assignedStringArray[1] = " << assignedStringArray[1] << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 11: Excepciones en Arrays de tipo `char`
    std::cout << "Prueba 11: Excepciones en Arrays de tipo `char`" << std::endl;
    Array<char> charArray(5);
    for (unsigned int i = 0; i < charArray.size(); i++)
    {
        charArray[i] = 'a' + i;
    }
    std::cout << "Contenido del charArray:" << std::endl;
    for (unsigned int i = 0; i < charArray.size(); i++)
    {
        std::cout << "charArray[" << i << "] = " << charArray[i] << std::endl;
    }
    std::cout << "Intentar acceder a un índice inválido:" << std::endl;
    try
    {
        std::cout << "charArray[5] = " << charArray[5] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "-----------------------------------------" << std::endl;

    // Prueba 12: Constructor de copia para arrays de cadenas
    std::cout << "Prueba 12: Array con objetos personalizados `Fixed`" << std::endl;
    Array<Fixed> fixedArray(3);
    fixedArray[0] = Fixed(1.5f);
    fixedArray[1] = Fixed(2);
    fixedArray[2] = Fixed(3.2f);
    std::cout << "Contenido del fixedArray: " << std::endl;
    for (size_t i = 0; i < fixedArray.size(); i++)
    {
        std::cout << "fixedArray[" << i << "] = " << fixedArray[i] <<std::endl;
    }
    std::cout << "-----------------------------------------" << std::endl;


    return 0;
}
