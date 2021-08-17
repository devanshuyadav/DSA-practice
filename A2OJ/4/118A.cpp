// String Task
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int len = s.length();
    for (auto i : s)
    {
        char ch = tolower(i);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y')
        {
            cout << "." << ch;
        }
    }
}
// AC