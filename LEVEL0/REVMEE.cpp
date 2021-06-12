#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int n, input;
    vector<int> ans;

    scanf("%i", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        ans.insert(ans.begin(), input);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
// AC
