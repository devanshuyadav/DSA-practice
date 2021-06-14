#include <iostream>
using namespace std;

#define ll long long

int main()
{
    // your code goes here
    int t;
    scanf("%i", &t);
    while (t--)
    {
        ll k;
        int d0, d1;
        scanf("%lld %i %i", &k, &d0, &d1);

        int s = d0 + d1;
        int c = ((2 * s) % 10) + ((4 * s) % 10) + ((8 * s) % 10) + ((6 * s) % 10);
        // printf("%i ", c);

        ll cycles = (k - 3) / 4;
        ll total = 0;

        if (k == 2)
        {
            // only first two digits go out
            total = s;
        }
        else
        {
            total = s + (s % 10) + (c * 1LL * cycles);
            // and now adding any left overs(if any)
            //which will take only O(3) at max

            //printf("%lld ", total);
            int lefts = (k - 3) - (cycles * 4);

            int r = 2;
            for (int i = 0; i < lefts; i++)
            {
                total += ((r * s) % 10);
                //printf("%i ", ((r * s) % 10));
                // where r is 2, 4, 8, 6 in cycles
                r = (r * 2) % 10;
            }
        }

        // printf("%lld \n", total);
        if (total % 3 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
// AC(Tricky!!)