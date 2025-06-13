#include <stdio.h>

int main()
{
    int i, numeros=0;
    
    for(i=1; i<50; i++)
    {
        if(i%2 == 0)
        {
            printf("%d, ", -i);
        }
        else {
    printf("%d, ", i);
        }
    }
}
