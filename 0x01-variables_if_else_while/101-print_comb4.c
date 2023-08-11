#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
int first_digit = 0;
int second_digit;
int third_digit;
while (first_digit <= 7)
{
second_digit = first_digit + 1;
while (second_digit <= 8)
{
third_digit = second_digit + 1;
while (third_digit <= 9)
{
putchar(first_digit + '0');
putchar(second_digit + '0');
putchar(third_digit + '0');
if (first_digit != 7 || second_digit != 8 || third_digit != 9)
{
putchar(',');
putchar(' ');
}
third_digit++;
}	 
second_digit++;
}
first_digit++;
}
putchar('\n');
return (0);
}

