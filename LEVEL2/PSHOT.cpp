#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int A = 0, B = 0, leftA = N, leftB = N;
        for (int i = 0; i < 2 * N; i++)
        {
            char ch = S[i];
            if (i % 2 == 0)
            {
                A += (int)ch - 48;
                leftA--;
            }
            else
            {
                B += (int)ch - 48;
                leftB--;
            }

            if ((A > (B + leftB)) || (B > (A + leftA)))
            {
                // A or B wins
                cout << i + 1 << endl;
                break;
            }

            if (A <= (B + leftB) && B <= (A + leftA))
            {
                // unclear
                // do nothin... continue
            }
            if (A == B && leftB == 0)
            {
                // draw
                cout << i + 1 << endl;
                break;
            }
            // cout << "AT " << i + 1 << " - " << A << " " << B << endl;
        }
    }
    return 0;
}
// AC