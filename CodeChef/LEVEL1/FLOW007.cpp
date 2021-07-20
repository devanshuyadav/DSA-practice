#include <iostream>
using namespace std;

int main()
{
    long long num;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> num;
        long long rev = 0;
        while (num > 0)
        {
            rev = (rev * 10) + (num % 10);
            // num % 10 is the digit after every iteration
            num = num / 10;
        }
        cout << rev << "\n";
    }

    return 0;
}
// AC