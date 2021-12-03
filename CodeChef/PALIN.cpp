#include <bits/stdc++.h>
using namespace std;

/*
LOGIC:

Case 1. Already a PALIN, but all 9's;
        - all mid's are 0 and corners are 1
Case 2. Every Other case (PALIN or not):
        - copy left part to right part
        - if(copied <= orig):
            increment mid (but if mid == 9, mid = 0 && next_to_mid ++)
        - copy left part to right part again, to tackle any inconsistencies
*/
string copyLeftToRight(string s, int n)
{
    for (int i = 0; i < n / 2; ++i)
        s[n - i - 1] = s[i];
    return s;
}

int case1(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '9')
            return 0;
    }
    return 1;
}

void solve()
{
    string s;
    cin >> s;
    string orig = s;
    int n = s.length();

    // If it's case1 -
    if (case1(s, n))
    {
        cout << "1";
        for (int i = 1; i < n; ++i)
            cout << "0";
        cout << "1" << endl;
    }
    else
    {
        // Except mid, Copy leftPart to rightPart
        s = copyLeftToRight(s, n);

        // If ans not obtained
        if (s <= orig)
        {
            // from mid -> towards firstIdx
            for (int i = (n - 1) / 2; i >= 0; i--)
            {
                // for every other normal mid element
                if (s[i] != '9')
                {
                    // Increment needed only once, whatever the case
                    s[i] += 1;
                    break;
                }
                else
                {
                    // 292 -> 303
                    // Set mid to '0', increment digit left to mid (once)(above)
                    s[i] = '0';
                }
            }

            // Copy again for the updated string.
            s = copyLeftToRight(s, n);
        }

        // ANS Obtained at this point.
        cout << s << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}