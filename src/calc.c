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

int Fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n*Fact(n-1);
}
float Trigonometry(int Option, float var)
{
	switch(Option)
	{
		case 9:
		{
			return sin(var * Pi/180);
			break;
		}
		case 10:
		{
			return cos(var * Pi/180);
			break;
		}
		case 11:
		{
			if (var == 90 || var == 270)
			{
				return 0;
				break;
			}
			else
			{
				return tan(var * Pi/180);
				break;
			}
		}
		case 12:
		{
			if (var == 0 || var == 180 || var == 360)
			{
				return 0;
				break;
			}
			else
			{
				return 1/tan(var * Pi/180);
				break;
			}
		}
		case 13:
		{
			return asin(var) * 180/Pi;
			break;
		}
    	default: return 0;
	}
