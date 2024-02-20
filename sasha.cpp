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
    int n;
    cin>>n;
    vi v(n);
    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0; i<n; i++){
        cin>>v[i];
        min=min<v[i]?min:v[i];
        max=max>v[i]?max:v[i];
    }
    cout<<abs(max-min)<<endl;
    return;
}

int main(){

    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }

}