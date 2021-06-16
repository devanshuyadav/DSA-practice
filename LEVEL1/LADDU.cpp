#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string a[100];

        int n;
        string nation;
        cin >> n >> nation;

        int laddus = 0;

        for (int i = 0; i < n; i++)
        {
            string type;
            cin >> type;
            // cout << "TYP: " << type << endl;
            if (type == "CONTEST_WON")
            {
                // contest winning laddus
                int rank;
                cin >> rank;

                laddus += 300;

                // bonus laddus on rank <=20
                if (rank <= 20)
                    laddus += (20 - rank);
            }
            else if (type == "TOP_CONTRIBUTOR")
            {
                // top contribution laddus
                laddus += 300;
            }
            else if (type == "BUG_FOUND")
            {
                // bug finding laddus
                int severity;
                cin >> severity;

                if (severity <= 1000 && severity >= 50)
                    laddus += severity;
            }
            else if (type == "CONTEST_HOSTED")
            {
                // contest hosting laddus
                laddus += 50;
            }
            else
            {
                cout << "BUG" << endl;
            }
        }
        if (nation == "INDIAN")
        {
            laddus /= 200;
        }
        else
            laddus /= 400;
        cout << laddus << "\n";
    }

    // contest hosted = s.substr(14, s.length());
}
// AC