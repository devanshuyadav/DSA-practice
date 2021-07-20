#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int n;
    vector<int> facts;
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            facts.push_back(i);
        }
    }
    cout << count << endl;
    for (int i = 0; i < facts.size(); i++)
        cout << facts[i] << " ";
    return 0;
}
// AC