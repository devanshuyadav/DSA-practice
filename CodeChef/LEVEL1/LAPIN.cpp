#include <iostream>
using namespace std;

bool equal(int *a, int *b)
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    // scanf("%i", &t);
    cin >> t;
    while (t--)
    {
        string s;
        string ans = "YES";
        cin >> s;
        int len = s.size();
        int left[26] = {0}, right[26] = {0};
        for (int i = 0; i <= len / 2 - 1; ++i)
        {
            left[s[i] - 'a']++;
        }
        for (int j = (len + 1) / 2; j < len; ++j)
        {
            right[s[j] - 'a']++;
        }
        equal(left, right) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
// AC