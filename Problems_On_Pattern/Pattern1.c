/* Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 *
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int i = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(i < iNo)
	{
		i++;
		printf("%d\t*\t",i);
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