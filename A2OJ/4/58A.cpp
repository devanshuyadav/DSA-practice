// Chat Room

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string a = "hello";
    int aIdx = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == a[aIdx])
            aIdx++;
    }
    aIdx == 5 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}

// AC