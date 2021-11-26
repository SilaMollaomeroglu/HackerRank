#include <stdio.h>

int main()
{
	
	int n;
	scanf("%d ",&n);
   	if(n<0){
    	printf("n>0 !");
	}
	int elements,i;
	int sum = 0;
	for(i=0;i<n;i++){
	
		scanf("%d",&elements);
		if(elements>1000)
		{
			printf("elements<1000 !");
			break;
		}
		sum = sum + elements;

    }
   	printf("%d",sum);



	return 0;
}
