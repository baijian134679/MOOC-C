#include <stdio.h>

int main()
{
    int x = 2, y;
	int cnt = 0, isPrime, i;
	int sum1 = 0, sum2 = 0, sum = 0;
    int n, m;
    
	scanf("%d %d", &n, &m);

    while (cnt < m)
    {
        isPrime = 1;
        for (i = 2;i <= x / 2;i++)
        {
            if (x%i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if ((isPrime == 1) && (cnt < n))
        {
            sum1 = sum1 + x;
            y = x;
        }
        if (isPrime == 1)
        {
            cnt++;
            sum2 = sum2 + x;
        }
        x++;
    }

    sum = sum2 - sum1 + y;
    printf("%d\n", sum);
    return 0;
}
