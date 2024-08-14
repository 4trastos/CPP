# 80s Phonebook

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
