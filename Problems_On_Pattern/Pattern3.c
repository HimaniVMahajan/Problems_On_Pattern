/* Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int i = 2 , iTemp = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iTemp = i;
	
	while(iNo > 0)
	{
		printf("%d\t",i);
		i = i + iTemp;
		iNo--;
	}
	printf("\n");
}
	
int main()
{
	int iNum = 0;
	
	printf("\n");
	
	printf("Enter the number:\t");
	scanf("%d",&iNum);
	
	printf("\n");
	
	DisplayPattern(iNum);
	
	return 0;
}