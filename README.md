*This activity has been created as part of the 42 curriculum by nalrjoub*

# Printf

## Description
libftprintf is a library which contains `ft_printf()`, which is a function that mimics the original `printf()` defined in `stdio` library in C.
`ft_printf` contains nine conversions, which are:
- `c` for character literals.
- `s` for strings.
- `p` for pointer arguments.
- `d` for decimal values.
- `i` for ints in base 10.
- `u` for unsigned decimal values.
- `x` for lower-cased hexadecimal representation.
- `X` for upper-cased hexadecimal representation.
- `%` for the percent sign.

## Instructions
### Compilation
``` bash
make         # builds libftprintf.a and .o files
make clean   # removes .o files
make fclean  # removes .o files and libftprintf.a
make re      # rebuilds from scratch
```
### Usage
Include `libftprinft.h` header file in your source code file
``` c
#include "libftprintf.h"
```
Use `make` to compile your library using bash
```bash
$ make
```
Compile your source code using the resultant library `libftprintf.a`
``` bash
cc main.c libftprintf.a 
```
Which will automatically produce the executable `a.out`.
Then, run the executable to see the actuall output
```bash
./a.out
```
`ft_printf()` function mimics the original `printf()` function. for more information on how to use the function, it is recommended to check the manual using
``` bash
man printf
```
## Resources
- https://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdarg.h.html (stdarg.h)
- https://www.geeksforgeeks.org/c/variadic-functions-in-c/ (variadic functions)
- https://medium.com/@turman1701/va-list-in-c-exploring-ft-printf-bb2a19fcd128 (variadic functions macros)
- https://en.cppreference.com/c/variadic/ (variadic functions)
- https://www.geeksforgeeks.org/cpp/cpp-macros/ (macros)
- https://www.geeksforgeeks.org/c/cc-preprocessors/ (preprocessors)
- AI was not used in this project.
