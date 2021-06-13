#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    int ans = -1;
    if (a > 0 && b > 0 && c > 0 && ((a + b) > c) && ((b + c) > a) && ((a + c) > b))
    {
        if (a == b && b == c)
            ans = 1;
        else if (a == b || b == c || a == c)
            ans = 2;
        else
            ans = 3;
    }
    printf("%i", ans);
    return 0;
}
// AC