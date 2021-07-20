#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    scanf("%i", &n);
    if (n % 5 == 0 || n % 6 == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
// AC