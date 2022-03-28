## Formatted Printing Function

### Header file
#### int printf(const char *format, ...)
The printf() function prints output to STDOUT, according to format and
other arguments passed to printf(). The string format consists of two
types of items - characters that will be printed to the screen, and
format commands that define how the other arguments to printf() are
displayed. Basically, you specify a format string that has text in it,
as well as "special" characters that map to the other arguments of
printf(). For example, this code
- Formats and prints its arguments as specified by the format string.
- Plain characters in format are simply copied.
- Format specifications are made up of a the percent sign (%) followed by one of the following conversion
operators, which determine what printf does with its arguments:
% - print a single % character

####Code	**Format**
%c 		character
%d 		signed integers
%i 		signed integers
%e 		scientific notation, with a lowercase "e"
%E 		scientific notation, with a uppercase "E"
%f 		floating point
%g 		use %e or %f, whichever is shorter
%G 		use %E or %f, whichever is shorter
%o 		octal
%s 		a string of characters
%u 		unsigned integer
%x 		unsigned hexadecimal, with lowercase letters
%X 		unsigned hexadecimal, with uppercase letters
%p 		a pointer
%n 		the argument shall be a pointer to an integer into which is placed the number of characters written so far
%% 		a '%' sign
