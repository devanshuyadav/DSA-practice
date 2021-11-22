#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a;
        long long int ans = 0;
        int mini = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mini = min(a, mini);
            ans += mini;
        }
        cout << ans << endl;
    }
    return 0;
}