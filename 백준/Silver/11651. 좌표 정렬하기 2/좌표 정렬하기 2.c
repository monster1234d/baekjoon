#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
    int x;
    int y;
}Pos;
int compare(const void* a, const void* b)
{
    Pos A = *(Pos*)a;
    Pos B = *(Pos*)b;
    if (A.y > B.y)
    {
        return 1;
    }
    else if (A.y == B.y)
    {
        if (A.x > B.x)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    Pos* arr = (Pos*)malloc(sizeof(Pos) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    qsort(arr, n, sizeof(Pos), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    
}