#include <stdio.h>
int main()
{
	int n = 0;
	int x = 0;
	scanf_s("%d %d", &n, &x);
	int arr[10000] = { 0, };
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < x)
			printf("%d", arr[i]);
	}
	return 0;
}