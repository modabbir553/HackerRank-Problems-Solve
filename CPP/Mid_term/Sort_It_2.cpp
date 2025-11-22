#include <bits/stdc++.h>
using namespace std;

int *sort_it(int s){
    int* ar = new int[s];
    for(int i = 0; i<s; i++){
        cin >> ar[i];
    }
    sort(ar, ar+s, greater<int>());
    return ar;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int s; 
    cin >> s;
    int * ar = new int[s];

    ar = sort_it(s);
    
    for(int i = 0; i<s; i++){
        cout << ar[i] << " ";
    }


    return 0;
}