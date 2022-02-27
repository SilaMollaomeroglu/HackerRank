#include <stdio.h>
#include <string.h>
#include <math.h>

void displayPathtoPrincess(int n, char grid[101][101]){
	
   int i,j;
   int pRow;
   int pColumn;
   int mRow;
   int mColumn;  
    for(i=0;i<n;i++)
  	{
 		for(j=0;j<n;j++){
 			if(grid[i][j]=='p'){
 
 				pRow = i+1;
 				pColumn = j+1;
 			
 
			 }
     		
  	    }
   
   }
   for(i=0;i<n;i++)
  	{
 		for(j=0;j<n;j++){
 			if(grid[i][j]=='m'){
 
 				mRow = i+1;
 				mColumn = j+1;
 
			 }
   		
  	    }
   
   }
   while(1)
   {
   if(pRow<mRow)
   {
   	mRow--;
   	printf("UP\n");
   	
   }
    if(pRow>mRow)
   {
   	mRow++;
   	printf("DOWN\n");
   }
     if(pColumn>mColumn)
   {
   	mColumn++;
   	printf("RIGHT\n");
   }
      if(pColumn<mColumn)
   {
   	mColumn--;
   	printf("LEFT\n");
   }
    
   	if(pRow == mRow && pColumn == mColumn)
   	{
   		break;
   	}

}
 
}

int main(void) {

    int m,i;
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
     }
    displayPathtoPrincess(m,grid);
    return 0;
}
