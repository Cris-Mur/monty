# 0x19. C - Stacks, Queues - LIFO, FIFO

---

![monty banner](monty_banner.png)

## Description

Using Bytecodes create a program that manages a Stacks and Queues in c, using a command interpreter of the monty-bytecodes file.

### The Monty language

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

#### Monty Files

Files containing Monty byte codes usually have the **.m** extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

```monty
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
```

#### The monty program

* Usage: ./monty <file>

  * where **`file`** is the path to the file containing Monty byte code

* If the user does not give any file or more than one argument to your program, print the error message `USAGE: monty file`, followed by a new line, and exit with the status `EXIT_FAILURE`
* If, for any reason, it’s not possible to open the file, print the error message `Error: Can't open file `, followed by a new line, and exit with the status `EXIT_FAILURE`
  * where `<file>` is the name of the file
* If the file contains an invalid instruction, print the error message `L: unknown instruction `, followed by a new line, and exit with the status `EXIT_FAILURE`
  * where is the line number where the instruction appears.
  * Line numbers always start at 1
* The monty program runs the bytecodes line by line and stop if either:
  * it executed properly every line of the file.
  * it finds an error in the file.
  * an error occured.
* If you can’t malloc anymore, print the error message `Error: malloc failed`, followed by a new line, and exit with status `EXIT_FAILURE`.
* You have to use `malloc` and `free` and are not allowed to use any other function from `man malloc` (realloc, calloc, …)

## Functions

## Prototype

```Prototype
void name(stack_t **stack, unsigned int line_number);
```

### push < unsigned int >

The opcode `push` pushes an element to the stack.

* Usage: push < int >
  * where `< int >` is an integer.
* if `< int >` is not an integer or if there is no argument given to `push`, print the error message `L<line_number>: usage: push integer`, followed by a new line, and exit with the status `EXIT_FAILURE`
  * where is the line number in the file.
* You won’t have to deal with overflows. Use the `atoi` function

### pall

The opcode `pall` prints all the values on the stack, starting from the top of the stack.

* Usage: `pall`
* Format: start in top.
* If the stack is empty, don’t print anything.

### pint

The opcode `pint` prints the value at the top of the stack, followed by a new line.

* Usage: `pint`
* If the stack is empty, print the error message `L: can't pint, stack empty`, followed by a new line, and exit with the status `EXIT_FAILURE`

### pop

The opcode `pop` removes the top element of the stack.

* Usage: `pop`
* If the stack is empty, print the error message `L: can't pop an empty stack`, followed by a new line, and exit with the status `EXIT_FAILURE`

### swap

The opcode `swap` swaps the top two elements of the stack.

* Usage: `swap`
* If the stack contains less than two elements, print the error message `L: can't swap, stack too short`, followed by a new line, and exit with the status `EXIT_FAILURE`

### add

The opcode `add` adds the top two elements of the stack.

* Usage: `add`
* If the stack contains less than two elements, print the error message `L: can't add, stack too short`, followed by a new line, and exit with the status `EXIT_FAILURE`
* The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
  * The top element of the stack contains the result
  * The stack is one element shorter

### nop

The opcode `nop` doesn’t do anything.

* Usage: `nop`





---

## Authors

* **Cristian A. Murcia T.** - [Cris-Mur](https://github.com/Cris-Mur/)
* **Juan Rengifo** - [juankarlos999](https://github.com/juankarlos999)

