#include <stdio.h>

int main (void)
{
    unsigned int size;
    unsigned int count1;
    unsigned int count2;

    printf("enter number of size :");
    scanf("%d" ,&size);

    for(count1 = 1; count1 <= size; count1++)
    {
        for (count2 = 1; count2 <= count1; count2++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    

    return 0;
}

/*
enter number of size :5
* 
* *
* * *
* * * *
* * * * *

*/