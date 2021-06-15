#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
            count = 1;
        else
        {
            int max = a[0];
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i] < max)
                    count++;
                else
                    max = a[i];
                //cout<<a[i] <<" "<<a[i+1]<<endl;
            }
        }
        cout << count << "\n";
        //cout<<"\n";
    }
    return 0;
}
