#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>


int main(void) {
	int vstup;
	float a, b, c, obvod, max, pravouhlost, obsah, s;
	int existuje;
	pravouhlost; 
	printf("Zadejte: \n");
	printf("1 pro trojuhelnik\n");
	printf("2 pro obdelnik\n");
	printf("3 pro kruznici\n ");
	scanf("%d", &vstup);
	system("cls");
	if (vstup == 1)
	{
		//trojuhelnik
		printf("Zadejte prvni stranu trojuhelniku: ");
		scanf("%f", &a);
		printf("Zadejte druhou stranu trojuhelniku: ");
		scanf("%f", &b);
		printf("Zadejte treti stranu trojuhelniku: ");
		scanf("%f", &c);
		system("cls");
		//existuje
		

		if ((a + b) > c && (a + c) > b && (c + b) > a)
		{
			printf("trojuhelnik existuje\n");
				existuje = 1;
		}
		else
		{
			printf("trojuhelnik neexistuje\n");
				existuje = 0;
		}

		if (existuje == 1)
		{
			// obvod
			obvod = a + b + c;
			printf("obvod  zadaneho trojuhelniku je %f\n", obvod);
			
			// pravouhlost
			
			max = a, pravouhlost = c * c + b * b;
			if (b > max) max = b, pravouhlost = c * c + a * a;
			if (c > max) max = c, pravouhlost = a * a + b * b;

			if (pravouhlost == max * max)
			{
				printf("trojuhelnik je pravouhly\n");
			}

			// obsah
			s = (a + b + c) / 2;
			obsah = sqrt(s * (s - a) * (s - b) * (s - c));
			printf("obsah trojuhelniku je: %f\n", obsah);
		}

	
	}
	else if (vstup == 2)
	{
		printf("zadejte prvi stranu: ");
		scanf("%f", &a);
		printf("zadejte druhou stranu: ");
		scanf("%f", &b);
		system("cls");
		// ctverec

		if (a == b)
		{
			printf("je to ctverec\n");
		}

		obvod = 2 * a + 2 * b;
		printf("obvod obdelniku je: %f\n", obvod);

		obsah = a * b;
		printf("obsah obdelniku je: %f\n", obsah);
	}
	else
	{
		printf("zadejte polomer kruznice: ");
		scanf("%f", &a);
		system("cls");
		double obvod1 = 2 * M_PI * a;
		double obsah1 = M_PI * a * a;
		printf("obvod kruznice je: %f\n", obvod1);
		printf("obsah kruznice je: %f\n", obsah1);
	}

}