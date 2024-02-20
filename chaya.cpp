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
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int years=0;
    for(int i=0; i<n ; i++){
        if(years < v[i]){
            years=v[i];
        }
        else{
            int j=2;
            while(years>=v[i]*j){
                j=j+1;
            }
            years=v[i]*j;
        }
    }
    cout<<years<<endl;
    return;
}

int main(){

    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }

}