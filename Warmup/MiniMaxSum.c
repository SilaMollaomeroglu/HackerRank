#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size = 5;
    long  sum = 0;
    long  maxElement;
    long  minElement;

    long long int array[size];
     long   i,j,elements;
    for(i=0;i<size;i++)
    {
        scanf("%ld",&elements);
        array[i] = elements;
        sum = sum + elements;    
    }
    minElement = array[0];
    maxElement = array[0];
    for( i=1;i<5;i++)
    {
        if(array[i]>maxElement)
        {
            maxElement = array[i];
        }
        if(array[i]<minElement)
        {
            minElement = array[i];
        }        
    }


    printf("%ld ",sum-maxElement);
    printf("%ld",sum-minElement);


    return 0;
}
