#include <iostream>
using namespace std;

#define ll long long

int main()
{
    // your code goes here
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        ll count = 0;
        if (n < 0)
            count = -1;
        else
        {
            for (int i = 5; i <= n; i *= 5)
            {
                count += n / i;
            }
            printf("%lld \n", count);
        }
    }
    return 0;
}
// AC