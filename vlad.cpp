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
    string s;
    cin>>s; 
    unordered_map<char,int> m;
    for(auto x:s){
        m[x]++;
    }
    char max=m['A']>m['B']?'A':'B';
    cout<<max<<endl;
    return;
}

int main(){

    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }

}