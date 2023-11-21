#include<stdio.h>
#include<stdlib.h>


int compare(const void* x, const void* y)
{
	if (*(int*)x < *(int*)y)
		return 1;
	else if (*(int*)x > *(int*)y)
		return -1;
	else
		return 0;
}
int arr[1000000] = { 0 };
int main() 
{
	int a = 0;
	int b = 0;

	
	scanf("%d", &a);
	for (int i = 0; i < a; i++) 
	{
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, a, sizeof(int), compare);
	for (int i = 0; i < a; i++) 
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}