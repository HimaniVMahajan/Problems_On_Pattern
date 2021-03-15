/* Accept number from user and display below pattern.
Input : 5
Output : A B C D E
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int i = 0;
	
	char c = 'A';
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(i< iNo)
	{
		printf("%c\t",c);
		c++;
		i++;
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