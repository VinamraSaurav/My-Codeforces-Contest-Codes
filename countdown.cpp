#include <bits/stdc++.h>
#include <string>
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
    int n;
    string s;
    cin>>n>>s;
    ll m=stoll(s);
    ll r=0;
    while(m>0){
        r=r+m;
        m=m%10;
    }
    cout<<r<<endl;
    return;
}

int main(){

    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }

}