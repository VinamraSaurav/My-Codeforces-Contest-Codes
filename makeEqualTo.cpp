#include <bits/stdc++.h>

#define ll long long int
#define F first
#define S second 
#define pb push_back 
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int,int>>
#define mx map<int, int>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int left=0, right=n-1, leftCount=0, rightCount=0;
    
    while(left<n && v[left]==v[0] ){
        left++;
        leftCount++;
    } 
    while(right>0 && v[right]==v[n-1]){
        right--;
        rightCount++;
    }
    if(v[0]==v[n-1]){
        cout<<max(0,n-leftCount-rightCount)<<endl;
        return;
    }
    else{
        cout<<min(n-leftCount,n-rightCount)<<endl;
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