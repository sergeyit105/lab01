// lab01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	float a = 5.21f, b = 13.04f, x = -8.07f;

	double y = log10(x + sqrt(x * x - a * a)) / (b * tan(2 * x));		//за умовою результат "log10(x + sqrt(x * x - a * a))" < 0, а прологорифмувати від'ємне число - неможливо
	printf("Result: %.5f\n", y);
	getchar();
    return 0;
}

