#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    FILE *fptr;
    fptr = fopen("read.txt", "r");
    if (fptr == NULL)
    {
        printf("FILE IS NULL");
        exit(0);
    }
    fscanf(fptr, "%d", &size);
    int arr[size];
    for (int i = 1; i < size; i++)
    {
        fscanf(fptr, "%d", &arr[i]);
        printf("%d ", arr[i]);
    }
    fclose(fptr);

    return 0;
}