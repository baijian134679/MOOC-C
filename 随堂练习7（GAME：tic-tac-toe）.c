#include <stdio.h>

int main ()
{
	const int size = 3;
	int board[size][size];
	int i,j;
	int numOfX,numOfX1;
	int numOfO,numOfO1;
	int result = -1; // -1:没人赢，1：X赢，0：O赢
	
	//	读入矩阵
	for ( i=0; i<size; i++ ){
		for ( j=0; j<size; j++ ){
			scanf("%d", &board[i][j]);
		}
	} 
	// 检查行和列
    for(i = 0;i < size && result == -1;i++)
    {
        numOfO = 0;
        numOfX = 0;
        numOfX1 = 0;
        numOfO1 = 0;
        for(j = 0;j < size;j++)
        {
            if(board[i][j])
                numOfX++;
            else 
                numOfO++;
            if(board[j][i])
                numOfX1++;
            else
                numOfO1++;
        }
        if(numOfO == size || numOfO1 == size)
            result = 0;
            break;
        if(numOfX == size || numOfX1 == size)
            result = 1;
            break;
    }
    // 检查对角线
    numOfO = numOfX = 0;
    for(i = 0;i < size;i++)
    {
        if(board[i][i] == 1)
            numOfX++;
        else 
            numOfO++;
    }
    if(numOfO == size)
        result = 0;
    if(numOfX == size)
        result = 1;
         
    numOfO = numOfX = 0;
    for(i = 0;i < size;i++)
    {
        if(board[i][size-1-i] == 1)
            numOfX++;
        else 
            numOfO++;
    }
    if(numOfO == size)
        result = 0;
    if(numOfX == size)
        result = 1;
    printf("%d\n",result);
    return 0;
}

