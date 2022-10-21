#include <stdio.h>
/**
 * main - print out size of data types in C
 * code by efa
<<<<<<< HEAD
 * Retur: 0
*/
=======
 * Return: Always 0
 */
>>>>>>> 1fae5ed9a8463f92c14f7dfb06f8546e4dc5c1a1
int main(void)
{
char a;
int b;
<<<<<<< HEAD
long int c;
long long int d;
float f;

=======
long int c;  
long long int d;  
float f;  
  
>>>>>>> 1fae5ed9a8463f92c14f7dfb06f8546e4dc5c1a1
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
pritf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
