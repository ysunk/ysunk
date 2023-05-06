#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a < b && a < c) {
		if (d < e) {
			printf("%d", a + d - 50);
		}
		else
			printf("%d", a + e - 50);
	}
	else if (b < c && b < a) {
		if (d < e) {
			printf("%d", b + d - 50);
		}
		else
			printf("%d", b + e - 50);
	}
	else {
		if (d > e) {
			printf("%d", c + d - 50);
		}
		else
			printf("%d", c + e - 50);
	}
	return 0;
}