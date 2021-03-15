/* Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4

Output : 2 4 6 8 10
		 1 3 5 7 9
		 2 4 6 8 10
		 1 3 5 7 9
*/


#include<stdio.h>

void DisplayPattern(int iRows , int iCols)
{
	int iTemp = 2 , iResult = 0;
	int iX = 1;
	
	if(iRows < 0 && iCols < 0)
	{
		iRows = -iRows;
		iCols = -iCols;
	}
	
	printf("\n");
	
	for(int i=1; i<=iRows; i++)
	{
		if(i == 3)
		{
			iResult = 0;
			iX = 1;
		}
		
		if((i % 2) != 0)
		{
			for(int j=1; j<=iCols; j++)
			{
				iResult = iResult + iTemp;
				printf("%d\t",iResult);
			}
			printf("\n");
		}
		else
		{
			for(int j=1; j<=iCols; j++)
			{
				printf("%d\t",iX);
				iX = iX + iTemp;
			}
			printf("\n");
		}
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