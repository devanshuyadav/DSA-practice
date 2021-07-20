#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
            printf("%i ", i);
    }
    return 0;
}
// AC