#include <stdio.h>

/*подсчёт символов во входном потоке; 1-я версия*/

void main()
{
	double nc = 0;
	for (nc = 0; getchar() != EOF; ++nc)
		printf("%.0f\n", nc);
}