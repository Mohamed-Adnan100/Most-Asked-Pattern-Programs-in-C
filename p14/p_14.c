#include <stdio.h>

int main (void)
{
    unsigned int size;
    unsigned int count1;
    unsigned int count2;

    printf("enter number of size :");
    scanf("%d" ,&size);

    for(count1 = size; count1 >= 1; count1--)
    {
        for (count2 = 1; count2 <= count1; count2++)
        {
            if((count1 == size) || (count2 == 1)  || (count1 == count2))
            {
            printf("%i " ,count2);
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
        
    }
    return 0;
}

/*

enter number of size :5
1 2 3 4 5
1     4
1   3
1 2
1

*/