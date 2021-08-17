// Petya And Strings
#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.length();

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 > c2)
        {
            ans++;
            break;
        }
        else if (c2 > c1)
        {
            ans--;
            break;
        }
    }
    cout << ans << "\n";
}
// 2 WA
// AC