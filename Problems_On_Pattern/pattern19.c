/* Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4

Output : 1 2 3 4
		   2 3 4
             3 4
               4
*/

#include<stdio.h>

void DisplayPattern(int iRows , int iCols)
{
	
    if(iRows < 0 && iCols < 0)
	{
		iRows = -iRows;
		iCols = -iCols;
	}
	
	printf("\n");
	
	for(int i=1; i<=iRows; i++)
	{
		for(int j=1; j<=iCols; j++)
		{
			if(i>j)
			{
				printf(" \t");
			}
			else
			{
				printf("%d\t",j);
			}
	
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;
	
	printf("\n");
	printf("Enter the Number of rows:\t");
	scanf("%d",&iValue1);
	
	printf("\n");
	printf("Enter the Number of columns:\t");
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1 , iValue2);
	
	return 0;
}