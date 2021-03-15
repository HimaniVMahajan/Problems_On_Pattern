/* Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
*/


#include<stdio.h>

void DisplayLinearPattern(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		printf("%d\t#\t",iNo);
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
	
	DisplayLinearPattern(iNum);
	
	return 0;
}