#include <stdio.h>
/* more header goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int n;

Srand(time(0));
n = rand() - Rand_max / 2;
/* your code goes there */
if (n > 0)
	printf("%d is positive\n", n);
	else if (n==0)
	printf("%d is zero\n", n);
	else
	printf("%d is nagative\n", n);
	return (0);
