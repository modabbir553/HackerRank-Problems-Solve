#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int n, s;
    while (t--)
    {
        int temp = 0;
        int result = 0;
        cin >> n >> s;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        sort(ar, ar + n, greater<int>());
        for (int j = n - 1; j >= 0; j--)
        {

            temp = result + ar[j];
            if (temp <= s)
            {
                result = temp;
            }
        }
        if (result == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}