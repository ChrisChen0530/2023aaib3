#include <stdio.h>
int main()
{
	int money;
	scanf("%d",&money);
	printf("%d=50*%d+5*%d+1*%d\n",money,money/50,money%50/5,money%5);


}