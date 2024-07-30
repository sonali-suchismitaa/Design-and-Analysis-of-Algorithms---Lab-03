#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    FILE *fptr;
    fptr = fopen("random.txt", "w");
    if (fptr == NULL)
    {
        printf("FILE IS NULL");
        exit(0);
    }
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand();
        fprintf(fptr, "%d \n", arr[i]);
    }
    fclose(fptr);
}