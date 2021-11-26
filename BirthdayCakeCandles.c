#include<stdio.h>

int main()
{
	int size,elements;
	int counter = 0;
	scanf("%d",&size);
	int array[size],i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&elements);
		array[i]= elements;
		
	}
	
	int biggest = array[0];
	for(i=0;i<size;i++)
	{
		if(biggest<array[i])
		{
			biggest = array[i];
		}
			
	}
	
	
	for(i=0;i<size;i++)
	{
		if(array[i] == biggest)
		{
			counter +=1;
		}
	}
	printf("%d",counter);
	
	return 0;
}
