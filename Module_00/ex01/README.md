# Agenda telefónica de los 80 🇪🇸

¡Bienvenidos a los 80 y a su increíble tecnología! Este proyecto es una versión divertida de un programa de agenda telefónica de estilo retro que se comporta como un programa de software asombroso (o quizás un poco malo) de esa época.

## Descripción general

El objetivo es crear un programa de agenda telefónica simple con dos clases principales:

## Clases

- **Agenda telefónica**
- Contiene una matriz de contactos.
- Puede almacenar un máximo de 8 contactos. Si el usuario intenta agregar un noveno contacto, el contacto más antiguo será reemplazado por el nuevo.
- Nota: La asignación de memoria dinámica está prohibida.

- **Contacto**
- Representa un contacto de la agenda telefónica.

## Detalles de implementación

- La agenda telefónica debe crearse como una instancia de la clase `Agenda telefónica`.
- Cada contacto debe crearse como una instancia de la clase `Contacto`.
- Tienes libertad para diseñar las clases como desees, pero recuerda:
- Todo lo que se use siempre dentro de una clase debe ser "privado".
- Todo lo que se pueda usar fuera de una clase debe ser "público".

## Primeros pasos

Este programa es una excelente manera de practicar conceptos básicos de C++, como clases, encapsulación y administración de memoria estática. También es un viaje nostálgico a los días en que la tecnología era más simple, ¡pero aún fascinante!

## Cómo funciona

Al iniciar el programa, la libreta de teléfonos está vacía y se le solicita al usuario que ingrese uno de tres comandos. El programa solo acepta AGREGAR, BUSCAR y SALIR:

- **AGREGAR**: Guardar un nuevo contacto
- Si el usuario ingresa este comando, se le solicita que ingrese la información del nuevo contacto un campo a la vez. Una vez que se hayan completado todos los campos, el contacto se agrega a la libreta de teléfonos.
- Los campos de contacto son: nombre, apellido, apodo, número de teléfono y secreto más oscuro. Un contacto guardado no puede tener campos vacíos.

- **BUSCAR**: Muestra un contacto específico
- Muestra los contactos guardados como una lista de 4 columnas: índice, nombre, apellido y apodo.
- Cada columna debe tener 10 caracteres de ancho. Un carácter de barra vertical (`|`) las separa. El texto debe estar alineado a la derecha. Si el texto es más largo que la columna, debe truncarse y el último carácter que se pueda mostrar debe reemplazarse por un punto (`.`).
- Luego, vuelve a solicitarle al usuario el índice de la entrada que se mostrará. Si el índice está fuera de rango o es incorrecto, se debe definir un comportamiento relevante. De lo contrario, muestra la información del contacto, un campo por línea.

- **SALIR**: ¡El programa se cierra y los contactos se pierden para siempre!

- Cualquier otra entrada se descarta. Una vez que se ha ejecutado correctamente un comando, el programa espera otro. Se detiene cuando el usuario ingresa `SALIR`.

Dale un nombre relevante a tu ejecutable.


# 80s Phonebook 🇬🇧

Welcome to the 80s and their unbelievable technology! This project is a fun take on a retro-style phonebook program that behaves like an awesome (or maybe a bit crappy) piece of software from that era.

## Overview

The goal is to create a simple phonebook program with two main classes:

## Classes

- **PhoneBook**
  - Holds an array of contacts.
  - Can store a maximum of 8 contacts. If the user attempts to add a 9th contact, the oldest contact will be replaced with the new one.
  - Note: Dynamic memory allocation is forbidden.

- **Contact**
  - Represents a phonebook contact.

## Implementation Details

- The phonebook should be created as an instance of the `PhoneBook` class.
- Each contact should be created as an instance of the `Contact` class.
- You're free to design the classes as you wish, but remember:
  - Anything that is always used inside a class should be `private`.
  - Anything that can be used outside a class should be `public`.

## Getting Started

This program is a great way to practice basic C++ concepts such as classes, encapsulation, and static memory management. It's also a nostalgic trip back to the days when technology was simpler, yet still fascinating!

## How It Works

On program start-up, the phonebook is empty, and the user is prompted to enter one of three commands. The program only accepts ADD, SEARCH, and EXIT:

- **ADD**: Save a new contact
  - If the user enters this command, they are prompted to input the information of the new contact one field at a time. Once all the fields have been completed, the contact is added to the phonebook.
  - The contact fields are: first name, last name, nickname, phone number, and darkest secret. A saved contact can’t have empty fields.
  
- **SEARCH**: Display a specific contact
  - Display the saved contacts as a list of 4 columns: index, first name, last name, and nickname.
  - Each column must be 10 characters wide. A pipe character (`|`) separates them. The text must be right-aligned. If the text is longer than the column, it must be truncated, and the last displayable character must be replaced by a dot (`.`).
  - Then, prompt the user again for the index of the entry to display. If the index is out of range or incorrect, a relevant behavior should be defined. Otherwise, display the contact information, one field per line.

- **EXIT**: The program quits, and the contacts are lost forever!

- Any other input is discarded. Once a command has been correctly executed, the program waits for another one. It stops when the user inputs `EXIT`.

Give a relevant name to your executable.
