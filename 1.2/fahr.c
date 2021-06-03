// таблица вывода температур по Фаренгейту и Цельсию

#include <stdio.h>

void main()
{
	int	fahr, celsius;
	int	lower, upper, step;

	lower = 0;    // нижняя граница температуры
	upper = 300;  // верхняя граница температуры 
	step = 20;    // размер шага

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5* (fahr -32)/9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}	 
}