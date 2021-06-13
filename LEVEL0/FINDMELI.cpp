#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int n, k;
    scanf("%i %i", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
            ans = 1;
    }
    printf("%i ", ans);
    return 0;
}
// AC