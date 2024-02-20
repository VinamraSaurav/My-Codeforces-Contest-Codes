#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define F first
#define S second 
#define pb push_back 
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int,int>>
#define mi map<int, int>

void solve(){
    int n,m;
    cin>>n>>m;
    vi v(n);
    ll product=1; // Use long long for product
    for(int i=0; i<n; i++){
        cin>>v[i];
        product=(product*v[i]); // Update product modulo m
    }
    string s;
    cin>>s;
    int index=0;
    vi r(n);
    r[index++]=product%m;
    int left=0;
    int right=n-1;
    for(int i=0; i<n; i++){
        if(s[i]=='L'){
            product=(product/v[left]);
            r[index++]=product%m;
            left++;
        }
        else{
            product=(product/v[right]);
            r[index++]=product%m;
            right--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
