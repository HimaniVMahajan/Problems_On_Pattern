#include<stdio.h>

void DisplayPattern(int R , int C)
{
	char c = 'A';
	
	
	if(R== 0 || C==0)
	{
		printf("\nInvalid Input");
	}
	
	printf("\n");
	for(int i=1; i<=R; i++)
	{
		for(int j=C; j>0; j--)
		{
			if(i>j)
			{
				printf("\t");
			}
			else
			{
				printf("%c\t",c);
				c++;
			}
		}
		
		for(int k=1; k<=C; k++)
		{
			if(i>k)
			{
				printf("\t");
			}
			else
			{
				c--;
				printf("%c\t",c);
			}
		}
		c = 'A';
		printf("\n");
	}
}

int main()
{
	int Rows = 0, Cols = 0;
	
	printf("\nEnter the number of Rows:\t");
	scanf("%d",&Rows);
	
	printf("\nEnter the number of Columns:\t");
	scanf("%d",&Cols);
	
	DisplayPattern(Rows,Cols);
	
	return 0;
}