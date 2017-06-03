#include <stdio.h>

int main() 
{
    int list[7] = {10, 8, 15, 14, 16, 24, 36};
    int *ptr = list;
    *ptr = *ptr + 2; //puts adds 2 to value in List[0]
    //12 8 15 14 16 24 36 
    //* accesses what's in the pointer 
    
    ptr = ptr + 2; //ptr = addressmoves to address for list[2] (with value 15)
    
    *ptr = (*ptr) - *(ptr-1); //list[2] = list[2] - list[1], 15 - 8 = 7
    ptr++; // ptr moves to list[3]

    *ptr = 2 * (*ptr) - 3; //list[3] = 2 * 14 - 3 = 28 - 3 = 25
    
    for (int i = 0; i < 7; i++)
    {
        printf("%i ",list[i]);
    }
    
    return 0;
}

/*
12 8 15 14 16 24 36 
12 8 15 14 16 24 36 
12 8 7 14 16 24 36 
12 8 7 25 16 24 36 */