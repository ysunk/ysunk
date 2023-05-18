#include <stdio.h>
int main()
{
	int n, a = 1;
	scanf_s("%d", &n);
	while (a < 10) {
		printf("%d * %d = %d\n", n, a, n * a);
		a++;
	}
	return 0;
}