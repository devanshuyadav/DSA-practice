#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;

        int prev = a[0];

        for (int i = 0; i < n; i++)
        {
            if (prev >= a[i])
            {
                ans++;
                prev = a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// AC
