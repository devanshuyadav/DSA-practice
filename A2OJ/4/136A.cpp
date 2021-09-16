// Presents
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    map<int, int>::iterator itr;
    int n;
    cin >> n;

    int reciever;
    for (int i = 0; i < n; i++)
    {
        cin >> reciever;
        mp.insert(pair<int, int>(reciever, i + 1));
    }

    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->second << " ";
    }
}
// AC