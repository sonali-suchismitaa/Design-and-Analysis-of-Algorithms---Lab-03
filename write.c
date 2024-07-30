#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    FILE *fptr;
    fptr = fopen("write.txt", "w");
    if (fptr == NULL)
    {
        printf("FILE IS NULL");
        exit(0);
    }
    for(int i=0; i<10; i++)
    {
        fprintf(fptr, "%d ", arr[i]);
    }
    fclose(fptr);
}