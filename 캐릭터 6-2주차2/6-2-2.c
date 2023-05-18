#include <stdio.h>
int main()
{
	int a = 0, n = 1;
	while (n <= 100) {
		if (n % 2 == 1) {
			a += n;
		}
		n++;
	}
	printf("%d", a);
	return 0;
}