int sum_array1(int* ar, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += ar[i];
    }
    return total;
}

int sum_array2(int ar[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += ar[i]++;
    }
    return total;
}