// Helpful Maths
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> a;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
            a.push_back(s[i] - 48);
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < a.size() - 1; i++)
    {
        cout << a[i] << "+";
    }

    cout << a[a.size() - 1];
}