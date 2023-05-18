#include <stdio.h>
int main()
{
	int arr[100] = { 0, };
	int n = 0;
	int v = 0;
	int count = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &v);
	for (int i = 0; i < n; i++)
	{
		if (v == arr[i])
			count++;
	}
	printf("%d", count);
	return 0;
}