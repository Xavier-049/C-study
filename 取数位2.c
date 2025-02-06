#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	int hundred, ten, one;
	hundred = num / 100;
	one = num % 10;
	ten = (num - hundred * 100 - one) / 10;
	
	printf("%d\n",hundred);
	printf("%d\n",ten);
	printf("%d\n",one);
	
	return 0;
	
}