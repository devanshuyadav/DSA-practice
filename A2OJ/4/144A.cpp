// Arrival of the General
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int maxHt = 0;
    int minHt = 10000;
    int maxInd = 0, minInd = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a > maxHt)
        {
            maxHt = a;
            maxInd = i;
        }
        if (a <= minHt)
        {
            minHt = a;
            minInd = i;
        }
    }

    // cout << "MIN_IND : " << minInd << endl;
    // cout << "MAX_IND : " << maxInd << endl;

    // CASE 1: Both indices have to pass each other
    if (maxInd > minInd)
        /*
        General Answer but Subtract an extra 1.
        Reason: while moving max to front, we shifted min to right by index simultaneously.
        So, we have one less step for the min soldier in shifting him to the right.
        */
        cout << (maxInd - 1) + (n - minInd) - 1 << endl;
    // CASE 2: No intersection of min and max soldiers
    else
        // General Answer
        cout << (maxInd - 1) + (n - minInd) << endl;
}
// AC