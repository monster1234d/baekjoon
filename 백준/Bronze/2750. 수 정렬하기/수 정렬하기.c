#include<stdio.h>

int main() 
{
	int a = 0;
	int b = 0;
	int arr[1000] = { 0 };
	
	scanf("%d", &a);
	for (int i = 0; i < a; i++) 
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < a; i++) 
	{
		for (int j = 0; j < a - 1; j++) 
		{
			if (arr[j + 1] < arr[j]) 
			{
				b = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = b;
			}
		}
	}
	for (int i = 0; i < a; i++) 
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}