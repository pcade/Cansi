#include <stdio.h>

/*подсчёт символов во входном потоке; 1-я версия*/

void main()
{
	long	nc = 0;

	while (getchar() != EOF)
	printf("%ld\n", nc++);
}