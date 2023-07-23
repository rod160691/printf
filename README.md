0x11. C - printf group project

Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded
Note that we will not provide the _putchar function for this project

TASK 0
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

TASK 1
Handle the following conversion specifiers:
d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

TASK 2
Handle the following custom conversion specifiers:
b: the unsigned int argument is converted to binary

TASK 3
Handle the following conversion specifiers:
u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

TASK 4
Use a local buffer of 1024 chars in order to call write as little as possible.

TASK 5
Handle the following custom conversion specifier:
S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

TASK 6
Handle the following conversion specifier: p.
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

TASK 7
Handle the following flag characters for non-custom conversion specifiers:
+
space
#

TASK 8
Handle the following length modifiers for non-custom conversion specifiers:
l
h
Conversion specifiers to handle: d, i, u, o, x, X

TASK 9
Handle the field width for non-custom conversion specifiers.

TASK 10
Handle the precision for non-custom conversion specifiers.

TASK 11
Handle the 0 flag character for non-custom conversion specifiers.

TASK 12
Handle the - flag character for non-custom conversion specifiers.

TASK 13
Handle the following custom conversion specifier:
r : prints the reversed string

TASK 14
Handle the following custom conversion specifier:
R: prints the rot13'ed string

TASK 15
All the above options work well together


CONTRIBUTORS
(RAPHAEL OSEI DUODU)
(Elelwani Mukondi Tshikosi)
