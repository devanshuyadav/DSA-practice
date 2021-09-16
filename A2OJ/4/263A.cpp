// Beautiful Matrix

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5], i, j;
    int row = 0, col = 0;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
                cout << abs(i + 1 - 3) + abs(j + 1 - 3) << endl;
        }
}

// AC