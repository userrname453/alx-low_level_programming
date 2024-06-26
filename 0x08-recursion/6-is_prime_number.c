#include "main.h"
/**
  *helperFunction - returns 0 or 1 .
  *@num: number to checked.
  *@i: possible factor og number.
  *
  *Return: 0  not prime, 1  prime.
  */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
  *is_prime_number - checks   number is prime or not.
  *@n: number to  checked.
  *
  *Return: 1  number is prime.
  *0  number is not prime.
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
