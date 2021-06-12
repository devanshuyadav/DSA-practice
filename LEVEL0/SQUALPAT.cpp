#include <iostream>
using namespace std;
void rep(int num)
{
    for (int i = num; i < num + 5; i++)
    {
        printf("%i ", i);
    }
    printf("\n");
    // num+=5;
}
void reprev(int num)
{
    for (int i = num + 4; i >= num; --i)
    {
        printf("%i ", i);
    }
    printf("\n");
    // num+=5;
}
int main()
{
    // your code goes here
    int n, num = 1;
    scanf("%i", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            reprev(num);
        else
            rep(num);
        num += 5;
    }
    return 0;
}
// AC