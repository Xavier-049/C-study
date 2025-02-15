#define ROWS 3
#define COLS 4
#include <stdio.h>
void sum_rows(int ar[][COLS])
{
     int r;
     int c;
    for (r = 0; r < ROWS; r++)
    {
        int tot = 0;
        for (c = 0; c < 4; c++)
        {
            tot += ar[r][c];
        }
        printf("Sum of row%d = %d\n",r,tot);
    } 
}

int main(void)
{
    int array[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {12,10,8,6}
    };

    sum_rows(array);

    return 0;
}