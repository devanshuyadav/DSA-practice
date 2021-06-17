#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    string S;
    cin >> T;

    while (T--)
    {
        cin >> S;
        const int len = S.size();

        int count = 0, ans = 0;
        for (int i = 0; i < len; i++)
        {
            if (S.substr(i, 1) == ">")
                count--;
            else
                count++;

            if (count == 0)
                ans = i + 1;
            // since we're starting from 0
            else if (count < 0)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}
// testcases in JSON
// {"name":"Local: COMPILER","url":"d:\\Repositories\\DSA\\LEVEL2\\COMPILER.cpp","tests":[{"id":1623937167331,"input":"3\n<<>>\n><\n<>>>","output":"4\n0\n2"},{"id":1623937290790,"input":"1\n<<>>","output":"4"},{"id":1623937299004,"input":"1\n><","output":"0"},{"id":1623937307335,"input":"1\n<>","output":"2"},{"id":1623944879679,"input":"1\n<<<>>><>","output":"8"},{"id":1623945391088,"input":"1\n><><","output":"0"},{"id":1623945399975,"input":"1\n>>","output":"0"},{"id":1623945411881,"input":"1\n<><>","output":"4"},{"id":1623945472683,"input":"1\n","output":"0"},{"id":1623945491041,"input":"1\n<<<>>>>>","output":"6"}],"interactive":false,"memoryLimit":1024,"timeLimit":3000,"srcPath":"d:\\Repositories\\DSA\\LEVEL2\\COMPILER.cpp","group":"local","local":true}