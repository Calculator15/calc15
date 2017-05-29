#include <stdio.h>
#include "calc.h"

int main()
{
	int i, n, Option;
	printf("***************CALCULATOR***************\n\n1.Addition		9.Sin(x)		13.Arcsin(x) \n2.Subtraction		10.Cos(x)		14.Arccos(x)\n3.Multiplication        11.Tg(x)		15.Arctg(x)\n4.Division	        12.Ctg(x)		16.Arcctg(x)\n5.Factorial\n6.The solution of the quadratic equation\n7.Сalculate the percentage of the number\n8.x^y\n\n				17. Exit\n");
	while (Option != 17)
	{	
		printf("\nSelect one of the actions:  ");
		scanf("%d", &Option);
		if (Option == 1)
		{
			printf("Enter the number of terms: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter the terms: ");
			for (i = 0; i < n; i++)
				scanf("%f", &A[i]);
			printf("Answer: %.2f\n",Addition(A, n));
		}	
		if (Option == 2)
		{
			float a, b;
	       		printf("Enter a decrement and subtract: ");
			scanf("%f %f", &a, &b);
			printf("Answer: %.2f\n", Subtraction(a, b));
		}
		if (Option == 3)
		{
			printf("Enter the number of multipliers: ");
			scanf("%d", &n);
			float A[n];
			printf("Enter multipliers: ");
			for (i = 0; i < n; i++)
				scanf("%f", &A[i]);
			printf("Answer: %.2f\n", Multiplication(A, n));
		}	
		if (Option == 4)
		{
			float a, b;
			printf("Enter dividend and divisor: ");
			scanf("%f %f", &a, &b);
			if (Division (a, b) == 0)
				printf("Error");
			else
				printf("Answer: %.2f\n", Division(a, b));
		}
		if (Option == 5)
		{
			printf("Enter the number, whose factorial you want to receive: ");
			scanf("%d", &n);
			printf("Factorial = %d", Fact(n));
		}
		if (Option == 6)
		{
			int a, b, c; float roots[2];
			printf("Enter the coefficients a, b, c: ");
			scanf("%d %d %d", &a, &b, &c);
			
			if (Roots(roots, a, b, c) == 2)
				printf("x1 = %.2f x2 = %.2f", roots[0], roots[1]);
			else if (Roots(roots, a, b, c) == 1)
				printf("x = %.2f", roots[0]);
			else
				printf("No roots");
		}
		if (Option == 7)
		{
			float value, percent;
			printf("Enter a number and percentage: ");
			scanf("%f %f", &value, &percent);
			printf("The percentage of the number = %.2f\n", PercentageOfValue(value, percent));
		}
		if (Option == 8)
		{
			float x, y;
			printf("Enter the number and extent: ");
			scanf("%f %f", &x, &y);
			printf("x^y = %.2f\n", Exponentiation(x,y));
		}
		if (Option == 9)
		{
			float angle;
			printf("Enter the angle value: ");
			scanf("%f",&angle);
			printf("Sin(x) = %.3f\n", Trigonometry(Option, angle));
		}
		if (Option == 10)
		{
			float angle;
			printf("Enter the angle value: ");
			scanf("%f",&angle);
			printf("Cos(x) = %.3f\n", Trigonometry(Option, angle));
		}
		if (Option == 11)
		{
			float angle;
			printf("Enter the angle value: ");
			scanf("%f",&angle);
			if (Trigonometry(Option, angle) == 0)
				printf("Does not exist");
			else
				printf("Tg(x) = %.3f\n", Trigonometry(Option, angle));
		}
		if (Option == 12)
		{
			float angle;
			printf("Enter the angle value: ");
			scanf("%f",&angle);
			if (Trigonometry(Option, angle) == 0)
				printf("Does not exist");
			else
				printf("Ctg(x) = %.3f\n", Trigonometry(Option, angle));
		}
		if (Option == 13)
		{
			float sinus;
			printf("Enter the value of the sin(x): ");
			scanf("%f", &sinus);
			printf("Arcsin(x)= %.2f\n", Trigonometry(Option, sinus));
		}
		if (Option == 14)
		{
			float cosine;
			printf("Enter the value of the cos(x): ");
			scanf("%f", &cosine);
			printf("Arccos(x) = %.2f\n", Trigonometry(Option, cosine));
		}
		if (Option == 15)
		{
			float tangent;
			printf("Enter the value of the tg(x): ");
			scanf("%f", &tangent);
			printf("Arctg(x) = %.2f\n", Trigonometry(Option, tangent));
		}
		if (Option == 16)
		{
			float cotangent;
			printf("Enter the value of the ctg(x): ");
			scanf("%f", &cotangent);
			printf("Arcctg(x) = %.2f\n", Trigonometry(Option, cotangent));
		}
	}
	return 0;
}
