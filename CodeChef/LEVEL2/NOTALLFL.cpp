#include <iostream>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        int ans = 0;
        rep(i, 0, n)
        {

            if (a[i] == k)
                break;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}