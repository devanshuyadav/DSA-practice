#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if (a != 0 && b != 0 && c != 0 && (a + b + c) == 180)
    {
        if ((a + b) >= c || (b + c) >= a || (a + c) >= b)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("NO");
    return 0;
}
// AC