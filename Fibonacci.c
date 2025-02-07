#include <stdio.h>
int fibonacci(int n);
int main(void)
{
    int num;

    printf("Please enter an integer:\n");
    while (scanf("%d",&num) != EOF)
    {
        int result = fibonacci(num);
        printf("%d\n",result);
    }
   
    return 0;
}

int fibonacci(int n)
{
   if (n == 0)
   {
    return 0;
   }
   else if (n == 1)
   {
    return 1;
   }
   else
   {
    return fibonacci(n - 1) + fibonacci(n - 2);
   }
}