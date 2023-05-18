#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);

	if (a >= 14) {
		if (a > 65) printf("7000");
		else printf("10000");
	}
	else printf("5000");
	return 0;
}