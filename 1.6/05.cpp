#include <cstdio>
int main()
{
    int n,t;
    float a = 0, b = 0, c = 0, d = 0;
    scanf("%d",&n);
    int N[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&t);
        N[i] = t;
    }
    for (int i = 0; i < n; i++)
    {
        if(N[i]>=0 && N[i] <= 18)
        {
            a += 1.0 / n;
        }
        if (N[i] >= 19 && N[i] <= 35)
        {
            b += 1.0 / n;
        }
        if (N[i] >= 36 && N[i] <= 60)
        {
            c += 1.0 / n;
        }
        if (N[i] >= 61)
        {
            d += 1.0 / n;
        }
    }
    printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%\n", a * 100, b * 100, c * 100, d * 100);
    return 0;
}

