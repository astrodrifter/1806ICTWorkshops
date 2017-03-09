#include <stdio.h>

int main(int argc, char **argv)
{
    float height, width;
	printf("Enter rectangle hieght and width.\n");
    scanf("%f %f\n", &height, &width);
    float area = height*width;
    
    /*int rows, colm;
    for (rows=0;rows<2;rows++){
        
        int i = 0;
        int j = 0;
        
        for(colm=0;colm<3;colm++){
        
            if ( i == 0) && (rows == 0) {
                printf("Height \t");
            } else if (i == 1) && (rows == 0) {
                printf("Width \t");
            } else {
                printf("Area \t");
            }
            i = i+1;
        
            
        }
    rows = 0; 
    colm = 0;
    for (rows=0;rows<2;rows++){
        
        
        int j = 0;
        
        for(colm=0;colm<3;colm++){
        
            if ( j == 0) && (rows == 0) {
                printf("%f\t", height);
            } else if (j == 1) {
                printf("%f\t", width);
            } else {
                printf("%\t", area);
            }
            j = j+1;*/
        
            
        }
    }
    
	return 0;
}
