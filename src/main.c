#include <stdio.h>
#include "calc.h"

int main()
{
	int i, n, Option;
	printf("***************CALCULATOR***************\n\n1.Addition		\n2.Subtraction		\n3.Multiplication        \n4.Division		\n5.Factorial	 \n6.Sin(x)		\n7.Cos(x)		\n8.Tg(x)		\n9.Ctg(x)		\n10.Arcsin(x)		\n11.Arccos(x)		\n12.Arctg(x)		\n13.Arcctg(x)	14.Exit\n");
	while (Option != 14)
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
			float angle;
			printf("Enter the angle value: ");
			scanf("%f",&angle);
			printf("Sin(x) = %.3f\n", Trigonometry(Option, angle));
		}
		if (Option == 7)
		{
			float angle;
			printf("Enter the angle value: ");
			scanf("%f",&angle);
			printf("Cos(x) = %.3f\n", Trigonometry(Option, angle));
		}
		if (Option == 8)
		{
			float angle;
			printf("Enter the angle value: ");
			scanf("%f",&angle);
			if (Trigonometry(Option, angle) == 0)
				printf("Does not exist");
			else
				printf("Tg(x) = %.3f\n", Trigonometry(Option, angle));
		}
		if (Option == 9)
		{
			float angle;
			printf("Enter the angle value: ");
			scanf("%f",&angle);
			if (Trigonometry(Option, angle) == 0)
				printf("Does not exist");
			else
				printf("Ctg(x) = %.3f\n", Trigonometry(Option, angle));
		}
		if (Option == 10)
		{
			float sinus;
			printf("Enter the value of the sin(x): ");
			scanf("%f", &sinus);
			printf("Arcsin(x)= %.2f\n", Trigonometry(Option, sinus));
		}
		if (Option == 11)
		{
			float cosine;
			printf("Enter the value of the cos(x): ");
			scanf("%f", &cosine);
			printf("Arccos(x) = %.2f\n", Trigonometry(Option, cosine));
		}
		if (Option == 12)
		{
			float tangent;
			printf("Enter the value of the tg(x): ");
			scanf("%f", &tangent);
			printf("Arctg(x) = %.2f\n", Trigonometry(Option, tangent));
		}
		if (Option == 13)
		{
			float cotangent;
			printf("Enter the value of the ctg(x): ");
			scanf("%f", &cotangent);
			printf("Arcctg(x) = %.2f\n", Trigonometry(Option, cotangent));
		}
	}
	return 0;
}

