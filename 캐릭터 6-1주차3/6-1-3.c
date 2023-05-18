#include <stdio.h>
int main()
{
	int n, sum = 0;
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		sum = sum + i;
	}
	printf("%d\n", sum);
	return 0;
}