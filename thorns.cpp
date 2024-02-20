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
    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<n; i++){
        if(s[i]=='*' ){
            if(s[i+1]=='*'){
                cout<<count<<endl;
                return;
            }
            else{
                continue;
            }
            
        }
        else if(s[i]=='@'){
            count++;
        }
        else{
            continue;
        }
        
    }
    cout<<count<<endl;
    return;

}

int main(){

    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }

}