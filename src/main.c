#include <stdio.h>
#include "calc.h"

int main()
{
	int i, n, Option;
	printf("***************CALCULATOR***************\n\n1.Addition		\n2.Subtraction		\n3.Multiplication        \n4.Division				5. Exit\n");
	while (Option != 5)
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
	}
	return 0;
}

