#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float Addition(float *A, int n)
{
	int i; float result = 0;
	for (i = 0; i < n; i++)
		result += A[i];
	return result;
}

float Subtraction(float a, float b)
{
	return a - b;
}

float Multiplication(float *A, int n)
{
	int i; float result = 1;
	for (i = 0; i < n; i++)
		result *= A[i];
	return result;
}

float Division(float a, float b)
{
	float result;
	if (b == 0)
		return 0;
	else
	{
		result = a / b;
		return result;
	}
}
