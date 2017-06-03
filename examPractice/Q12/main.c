#include <stdio.h>

int main() 
{
    int list[7] = {10, 8, 15, 14, 16, 24, 36};
    int *ptr = list;
    *ptr = *ptr + 2; //puts "adds 2 to value in List[0]
    for (int i = 0; i < 7; i++)
    {
        printf("%i ",list[i]);
    }
    printf("\n");
    
    ptr = ptr + 2; //ptr = address for list[4]
    for (int i = 0; i < 7; i++)
    {
        printf("%i ",list[i]);
    }
    printf("\n");
    
    *ptr = (*ptr) - *(ptr-1); //ptr = address for list[2]
    ptr++;
    for (int i = 0; i < 7; i++)
    {
        printf("%i ",list[i]);
    }
    printf("\n");
    
    *ptr = 2 * (*ptr) - 3;
    for (int i = 0; i < 7; i++)
    {
        printf("%i ",list[i]);
    }
    printf("\n");
    return 0;
}

/*
12 8 15 14 16 24 36 
12 8 15 14 16 24 36 
12 8 7 14 16 24 36 
12 8 7 25 16 24 36 */