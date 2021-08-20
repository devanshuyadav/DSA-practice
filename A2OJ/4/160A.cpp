// Twins

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long a[n];
    int tot_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tot_sum += a[i];
    }

    sort(a, a + n); // O(n logn)
    int coins = 0, sum = 0;
    for (int j = n - 1; j >= 0; j--)
    {
        sum += a[j];
        coins++;
        if (sum > tot_sum / 2)
            break;
    }
    cout << coins << endl;
}

// AC