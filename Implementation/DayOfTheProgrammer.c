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
#include <stdio.h>

int main()
{
	int year,calculatedValue;
	char array[12][20]={"01","02","03","04","05","06","07","08","09","10","11","12"};
    int Jnry = 31;
	int Mrch = 31;
	int My = 31;
	int Jly = 31;
	int Agst = 31;
    int Fbry = 29;
    int Aprl = 30;
	int Jn = 30;
    
    int sum = Jnry+Fbry+Mrch+Aprl+My+Jn+Jly+Agst;
    calculatedValue=256-sum;
   
    scanf("%d",&year);
    if( (year>=1700) && (year<=1917) ){
	
    if((year % 4) == 0 )
    {
    int i,j;
		for(i=0;i<1;i++){
			for(j=0;j<1;j++){
			
				char str[20];
				sprintf(str,"%d.%s.%d",calculatedValue,array[i+8],year);
				printf("%s\n",str);	
            }
		}
    }
    
    else{	
	
   	    int i,j;
		for(i=0;i<1;i++){
			
		    char str[20];
            sprintf(str,"%d.%s.%d",calculatedValue+1,array[i+8],year);
		    printf("%s\n",str);	
		
        }
   }
}


  else if(year==1918) 
  {
  
    int i,j;
		for(i=0;i<1;i++){
			for(j=0;j<1;j++)
			{
			
			  char str[20];
              sprintf(str,"%d.%s.%d",calculatedValue+14,array[i+8],year);
		      printf("%s\n",str);	

            }
        }

   }
  else if((year<=1919) || (year<=2700))
  {
  	if((year % 4) == 0 &&  (year % 100 != 0))
    {
    int i,j;
		for(i=0;i<1;i++){
			for(j=0;j<1;j++)
			{
		        
				char str[20];
				sprintf(str,"%d.%s.%d",calculatedValue,array[i+8],year);
	        	printf("%s\n",str);	

            }
        }
}
 	else if((year % 400) == 0 && (year % 4) == 0 &&  (year % 100 == 0))
    {
    int i,j;
		for(i=0;i<1;i++){
			for(j=0;j<1;j++){
		
				char str[20];

               sprintf(str,"%d.%s.%d",calculatedValue,array[i+8],year);
		       printf("%s\n",str);	

			
            }
}
}

    else{
	
   
   	int i,j;
		for(i=0;i<1;i++){
			
		char str[20];
        sprintf(str,"%d.%s.%d",calculatedValue+1,array[i+8],year);
		printf("%s\n",str);	
   }
}
  }
  
    return 0;
}
