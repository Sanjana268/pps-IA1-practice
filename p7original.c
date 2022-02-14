#include <stdio.h>
float inp()
{
    float n;
    printf("Enter no. - ");
    scanf("%f", &n);
    return n;
}
float sqrtt(float n)
{
    float str = 1, end = n, ans, mid;
    while (str <= end)
    {
        mid = (str + end) / 2;
        if (mid * mid == n)
        {
            ans = mid;
            break;
        }
        if (mid * mid < n)
        {
            str = mid + 1;
            ans = mid;
        }
        else
            end = mid - 1;
    }
    float inc = 0.1;
    for (int i = 0; i < 6; i++)
    {
        while (ans * ans <= n)
        {
            ans += inc;
        }
        ans -= inc;
        inc /= 10;
    }
    return ans;
}