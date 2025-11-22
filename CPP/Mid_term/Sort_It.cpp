#include<bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n;
    cin >> n;
    int ar[n];

    for(int i = 0; i<n; i++){
        cin >> ar[i];
    }
    sort(ar, ar+n);
    for(int j = 0; j<n; j++){
        cout << ar[j] << " ";
    }
    cout << endl;

    for(int k = n-1; k>=0; k--){
        cout << ar[k] << " ";
    }
    return 0;
}