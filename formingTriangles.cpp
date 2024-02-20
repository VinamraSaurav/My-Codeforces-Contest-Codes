#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(n<3){
        cout<<0<<endl;
        return;
    }
    int count=0;
    for(int p=0; p<n-2; p++){
    for(int r=n-1; r>1; r--){
        for(int q=1; q<r; q++){
            if(a[p]+a[q]>a[r] && a[r]+a[q]>a[p] && a[p]+a[r]>a[q]){
                count++;
            }
        }
    }
    }
    cout<<count<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}