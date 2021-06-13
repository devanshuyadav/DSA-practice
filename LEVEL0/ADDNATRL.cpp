#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    long long n;
    scanf("%lld", &n);
    long long ans = (n * (n + 1)) / 2;
    printf("%lld", ans);
    return 0;
}
// AC