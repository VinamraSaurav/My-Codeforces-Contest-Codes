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
    ll n,k;
    cin>>n>>k;
    ll even=n/2;
    ll odd=n-even;
    if(k<=odd){
        cout<<2*k-1<<endl;
        return;
    }
    else{
        k=k-odd;
        cout<<2*k<<endl;
        return;
    }
}

int main(){

    int tc=1;
    // cin>>tc;
    while(tc--){
        solve();
    }

}