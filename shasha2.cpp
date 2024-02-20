#include <bits/stdc++.h>

#define ll long long int
#define F first
#define S second 
#define pb push_back 
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int,int>>
#define mi map<int, int>

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    if(k==4*n-2){
        cout<<n*2<<endl;
        return;
    }
    else{
        if(k%2!=0){
            k=k+1;
        }
        cout<<k/2<<endl;
        return;
    }
    
}

int main(){

    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }

}