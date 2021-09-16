// Lucky Division
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int luckyNums[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    bool divisible = false;
    for (auto i : luckyNums)
    {
        if (n % i == 0)
        {
            divisible = true;
            break;
        }
    }

    if (divisible)
        cout << "YES\n";
    else
        cout << "NO\n";
}
// AC