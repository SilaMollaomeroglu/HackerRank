 #!/usr/bin/python

def displayPathtoPrincess(n,grid):
    for i in range(0,n):
        for j in range(0,n):
            if(grid[i][j]=='p'):
                pRow = i+1
                pColumn = j+1
    for i in range(0,n):
        for j in range(0,n):
            if(grid[i][j]=='m'):
                mRow = i+1
                mColumn = j+1
    while(True):
        if(pRow<mRow):
            mRow = mRow-1
            print("UP")

        if(pRow>mRow):
            mRow = mRow+1
            print("DOWN")
        
        if(pColumn>mColumn):
            mColumn = mColumn+1
            print("RIGHT")

        if(pColumn<mColumn):
            mColumn = mColumn-1
            print("LEFT")
        if((pRow == mRow) and (pColumn == mColumn)):
            break
 
m = int(input())
grid = [] 
for i in range(0, m): 
    grid.append(input().strip())

displayPathtoPrincess(m,grid)
 