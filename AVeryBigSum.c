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
	
	long n,elements;
	int i;
	scanf("%ld",&n);
	long long int array[n];
	long sum = 0;
	for(i=0;i<n;i++)
	{
		scanf("%ld",&elements);
		array[i] = elements;
		sum = sum + array[i];
		
	}
 	printf("%ld",sum);
	
	
	
	
	return 0;
}
