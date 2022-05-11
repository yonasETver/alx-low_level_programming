#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function add two int
  * @a: int parameter
  * @b: int parameter
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function for subtruction
  * @a: int parameter
  * @b: int parameter
  * Return: a-b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function for product of a and b
  * @a: int parameter
  * @b: int parameter
  * Return: a*b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function for devision
  * @a: int parameter
  * @b: int parameter
  * Return: a/b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function for remainder
  * @a: int parameter
  * @b: int parameter
  * Return: a%b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
