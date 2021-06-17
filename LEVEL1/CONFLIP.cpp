#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int g;
        cin >> g;
        while (g--)
        {
            ll i, n, q;
            cin >> i >> n >> q;

            int ans = 0;

            // if given = TAILS, query = TAILS
            // or, given = HEADS, query = HEADS
            // ans is always integer half due to the alternating pattern
            if ((i == 1 && q == 1) || (i == 2 && q == 2))
            {
                ans = n / 2;
            }
            else if ((i == 1 && q == 2) || (i == 2 && q == 1))
            {
                ans = n - (n / 2);
            }
            cout << ans << "\n";
        }
    }
}
// AC