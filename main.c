#include <stdio.h>

int main(void)
{
    int n;
    long long b = 0;
    scanf("%d", &n);
    /* TODO: n が負なら NG、そうでなければ 1+2+...+n を for 文で計算して表示 */
    if (n < 0)
    {
        printf("NG");
    }
    else
    {
        for (long long i = 1; i <= n; i++)
        {
            b = b + i;
        }
        printf("%lld", b);
    }
    return 0;
}
