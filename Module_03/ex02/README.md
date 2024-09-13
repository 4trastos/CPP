## Creando un FragTrap: Otro Robot en la Familia ClapTrap

**¿Cansado de ClapTraps?**

¡No te preocupes! Ahora vamos a crear un FragTrap, otro robot derivado de ClapTrap. Aunque es similar a ScavTrap, tiene algunas diferencias clave.

**Características de FragTrap:**

* **Herencia:** FragTrap heredará de ClapTrap, al igual que ScavTrap.
* **Mensajes personalizados:** Los mensajes de construcción y destrucción de FragTrap serán diferentes a los de ClapTrap y ScavTrap.
* **Encadenamiento de construcción/destrucción:** Asegúrate de que la construcción y destrucción se realicen en el orden correcto.
* **Atributos:**
    * **Nombre:** Se pasa como parámetro al constructor.
    * **Puntos de vida:** Inicializados en 100.
    * **Puntos de energía:** Inicializados en 100.
    * **Daño de ataque:** Inicializado en 30.
* **Capacidad especial:**
    * `highFivesGuys()`: Esta función mostrará un mensaje de saludo y solicitud de choca esos cinco.

**¿Cómo empezar?**

1. **Crea una clase FragTrap:** Esta clase heredará de ClapTrap.
2. **Implementa los constructores, destructor y funciones:** Asegúrate de que los mensajes personalizados se impriman y que los atributos se inicialicen correctamente.
3. **Agrega la función `highFivesGuys()`:** Esta función mostrará el mensaje de saludo.
4. **Escribe pruebas:** Crea pruebas unitarias para verificar que FragTrap funcione correctamente y que la herencia se haya implementado de manera adecuada.

**Recuerda:**

* **Orden de construcción/destrucción:** Al crear un FragTrap, se construye primero un ClapTrap. La destrucción sigue el orden inverso.
* **Actualización de ClapTrap:** Los cambios en FragTrap también afectarán a ClapTrap, ya que FragTrap hereda de él.

**¡Diviértete creando tu propio FragTrap!**

**¿Tienes alguna pregunta? No dudes en consultarla.**

**#C++ #Programación #GameDev #Borderlands #FragTrap #ClapTrap**
