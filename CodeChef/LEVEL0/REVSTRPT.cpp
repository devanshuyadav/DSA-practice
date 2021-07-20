#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// AC
