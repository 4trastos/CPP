# Harl Filter

Sometimes you don’t want to pay attention to everything Harl says. Implement a system to filter what Harl says depending on the log levels you want to listen to.

## Overview

Create a program that takes as parameter one of the four levels. It will display all messages from this level and above. For example:

```bash
$ ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years whereas you started working here since last month.
[ ERROR ]
This is unacceptable, I want to speak to the manager now.
```
```bash
$ ./harlFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
```
Although there are several ways to deal with Harl, one of the most effective is to SWITCH it off.

## Instructions

- Give the name `harlFilter` to your executable.
- You must use, and maybe discover, the `switch` statement in this exercise.

