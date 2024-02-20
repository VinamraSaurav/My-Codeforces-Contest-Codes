#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        int count=0;
        for(int i=0; i<n; i++){
            if(c[i]==a[i] || c[i]==b[i]){
                count++;
            }
        }
        string r=count<n?"YES":"NO";
        cout<<r<<endl;
        return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
            
    }
}

