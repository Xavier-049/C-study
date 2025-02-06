#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	int ten, one;
	ten = num / 10;
	one = num % 10;
	
	printf("%d\n",ten);
	printf("%d\n",one);
	
	return 0;
	
}