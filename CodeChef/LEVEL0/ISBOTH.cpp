#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0)
        printf("BOTH");
    else if (n % 5 == 0 || n % 11 == 0)
        printf("ONE");
    else
        printf("NONE");
    return 0;
}
// AC