#include <stdio.h> 
#include <math.h> 
#include <locale.h>

main()
{
	int yeas;
	float x;
	float s;
	setlocale(LC_ALL, "RUS");
	puts("������� 1\n");
	printf("������� ���\n");
	scanf("%d", &yeas);
	if ((yeas % 4 == 0 && yeas % 100 != 0) || yeas % 400 == 0)
	{
		printf("��� %d ����������\n", yeas);
	}
	else 
	{
		printf("��� %d �� ����������\n", yeas);
	}

	puts("\n������� 2\n");
	printf("������� x\n");
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