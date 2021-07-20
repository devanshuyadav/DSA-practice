#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int S[N], P[N], V[N];
        int ans = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> S[i] >> P[i] >> V[i];
            ans = max(ans, ((P[i] / (S[i] + 1)) * V[i]));
        }
        cout << ans << "\n";
    }
    return 0;
}
// AC