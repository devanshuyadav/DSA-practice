#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a, b, c;
    int sec = 0;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    if (a > b && a > c)
    {
        if (b > c)
            sec = b;
        else
            sec = c;
    }
    else if (b > a && b > c)
    {
        if (a > c)
            sec = a;
        else
            sec = c;
    }
    // 	c is largest or all are equal
    else
    {
        if (a > b)
            sec = a;
        else
            sec = b;
    }
    printf("%i", sec);
    return 0;
}
// AC