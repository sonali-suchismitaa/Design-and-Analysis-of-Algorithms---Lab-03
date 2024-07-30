#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("randomWithinLimit.txt", "w");

    int lowerBound = 1;
    int upperBound = 100;
    int noOfIntegers = 10;
    int i, n;
    int arr[10];
    for (i = 1; i<noOfIntegers; i++)
    {
        arr[i] = rand() % (upperBound - lowerBound + 1) + lowerBound;
        fprintf(fptr, "%d \n", arr[i]);
    }
    fclose(fptr);
}