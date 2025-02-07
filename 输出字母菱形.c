#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char c = 'A' + n - 1;
    
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int b_num = abs(i - n + 1);
        int a_num = (2 * n - 1) - 2 * abs(i - n + 1);
        
        for (int j = 0; j < b_num; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < a_num; k++)
        {
            printf("%c", c - b_num);
        }
        printf("\n");
    }

    return 0;
}