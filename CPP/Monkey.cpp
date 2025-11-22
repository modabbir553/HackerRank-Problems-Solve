#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char str1[100001];
    char str2[100001];
    cin.getline(str1, 100001);
    cin.getline(str2, 100001);

    int l1 = strlen(str1);
    int l2 = strlen(str2);
    sort(str1, str1 + l1);
    sort(str2, str2 + l2);

    for (int i = 0; i < l1; i++)
    {
        if (str1[i] != ' ')
        {
            cout << str1[i];
        }
    }
    cout << endl;

    for (int i = 0; i < l2; i++)
    {
        if (str2[i] != ' ')
        {
            cout << str2[i];
        }
    }
    return 0;
}