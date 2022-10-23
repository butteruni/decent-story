#include <stdio.h>
#include <string.h>
#include <math.h>
long long n;
long long m;
int t = 0;
int main()
{
    scanf("%lld",&n);
    while(n > 0)
    {
        m += (n%10) * pow(2,t);
        t++;
        n /= 10;
    }
    printf("%lld",m);
}
