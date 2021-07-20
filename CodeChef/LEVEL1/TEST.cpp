#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    while (1)
    {
        scanf("%i", &n);
        if (n < 100 && n != 42)
        {
            printf("%i \n", n);
        }
        else
            break;
    }
    return 0;
}
// AC