#include <iostream>
#include <algorithm> //for sort()
using namespace std;
#define ll long long

const int N = 1e6 + 5;
int A[N];

int main()
{
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A, A + n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, ((n - i) * 1LL) * A[i]);
    }
    cout << ans << endl;
    return 0;
}
// AC on 14 checks!!