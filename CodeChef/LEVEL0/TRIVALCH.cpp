#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    int ans = 0;
    if (a > 0 && b > 0 && c > 0 && ((a + b) > c) && ((b + c) > a) && ((a + c) > b))
    {
        ans = 1;
    }

    ans == 1 ? cout << "YES" : cout << "NO";
    return 0;
}
// AC