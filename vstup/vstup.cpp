#include <stdio.h>
#include <math.h>

int main(void) {
	int vstup;
	float a, b, c, obvod, max, pravouhlost, obsah, s;
	int existuje;
	pravouhlost; 
	printf("Vlozte 1 pro trojuhelnik, 2 pro obdelnik, 3 pro kruznici: ");
	scanf("%d", &vstup);
	if (vstup == 1)
	{
		//trojuhelnik
		printf("Vlozte prvni stranu trojuhelniku: ");
		scanf("%f", &a);
		printf("Vlozte druhou stranu trojuhelniku: ");
		scanf("%f", &b);
		printf("Vlozte treti stranu trojuhelniku: ");
		scanf("%f", &c);

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
		scanf("%f", a);
		printf("zadejte druhou stranu: ");
		scanf("%f", b);

		// ctverec

		if (a == b)
		{
			printf("je to ctverec\n");
		}

		obvod = 2 * a + 2 * b;
		printf("obvod obdelniku je: %f", obvod);

		obsah = a * b;
		printf("obsah obdelniku je: %f", obsah);
	}
	else
	{

	}

}