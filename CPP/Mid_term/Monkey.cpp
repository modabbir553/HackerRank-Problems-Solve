#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char str1[100001];

    while (cin.getline(str1, 100001))
    {
        int l1 = strlen(str1);

        sort(str1, str1 + l1);

        for (int i = 0; i < l1; i++)
        {
            if (str1[i] != ' ')
            {
                cout << str1[i];
            }
        }
        cout << endl;
    }

    return 0;
}