// таблица вывода температур по Фаренгейту и Цельсию

#include <stdio.h>

void main()
{
	int	fahr, celsius;
	int	lower, upper, step;

	lower = 0;    //  нижняя граница температуры
	upper = 200;  //  верхняя граница температуры 
	step = 10;    //  размер шага

	printf("celsius\tfahr\n");
	celsius = lower;
	while (celsius <= upper)
	{
		fahr = celsius*9/5 + 32;
		printf("%d\t%d\n", celsius, fahr);
		celsius = celsius + step;
	}	 
}