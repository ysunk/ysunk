#include <stdio.h>
int main()
{
	char arr[10] = "OXOOXXXOOO";
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 'O')
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}