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
    int k,x,a;
    cin>>k>>x>>a;
    if(a-x>0){
        int c=a-x;
        
            c=c*k;
        
        if(c>a){
            cout<<"YES"<<endl;
        return;
        }
        else{
        cout<<"NO"<<endl;
        return;
    }
        
    }
    else{
        cout<<"NO"<<endl;
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