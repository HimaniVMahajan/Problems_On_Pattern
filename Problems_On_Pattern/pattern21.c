/* Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4

Output : * * * *
		 * * * #
		 * * # #
		 * # # #
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
		for(int j=4; j>0; j--)
		{
			if(i == j || i < j)
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;
	
	printf("\n");
	
	printf("Enter the Number of Rows:\t");
	scanf("%d",&iValue1);
	
	printf("\n");
	
	printf("Enter the Number of Columns:\t");
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1,iValue2);
	
	return 0;
}
	
	
	