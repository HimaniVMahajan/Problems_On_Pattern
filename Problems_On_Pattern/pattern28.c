/* Accept number of rows and number of columns from user and display below pattern.

Output:-	1	2	3	4	5
			1	2			5
			1		3		5
			1			4	5
			1	2	3	4	5
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
			if(i == j || i == 1 || i == iRows || j == 1 || j == iCols)
			{		
					printf("%d\t",j);
			} 
			else
			{
				printf(" \t");
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