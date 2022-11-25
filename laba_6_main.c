#include <stdio.h> 
#include <math.h> 
#include <locale.h>

main()
{
	int yeas;
	float x;
	float s;
	setlocale(LC_ALL, "RUS");
	puts("Задание 1\n");
	printf("Введите год\n");
	scanf("%d", &yeas);
	if ((yeas % 4 == 0 && yeas % 100 != 0) || yeas % 400 == 0)
	{
		printf("Год %d високосный\n", yeas);
	}
	else 
	{
		printf("Год %d не високосный\n", yeas);
	}

	puts("\nЗадание 2\n");
	printf("Введите x\n");
	scanf("%f", &x);
	float f;
	if (x < 10)
	{
		f = ((1 / 2) * pow(x, 2) - sin(x));
	}
	if (10 <= x <= 15)
	{
		f = exp(x + 1);
	}
	if (x > 15)
	{
		f = sin(pow(x, 2) + 1);
	}
	printf("%f\n", f);

	return 0;
}