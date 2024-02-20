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
    int cnt=0;
    string s="";
    if(n>=28 && n<=78){
        int t=n/26;
        if(t==3){
            s=s+"zzz";
            n=n-78;
            cnt=3;
            cout<<s<<endl;
            return;
        }
        else if(t==2){
            n=n-52;
            if(n==0){
                s=s+"ayz";
                cnt=3;
                cout<<s<<endl;
                return;
            }
            s=s+"zz";
            cnt=2;
        }
        else{
            n=n-26;
            s=s+"z";
            cnt=1;
        }

    }
    if(n>0){
        if(cnt==2){
            s=s+char(96+n);
        }
        else if(cnt==1){
           s=s+char(96+n-1)+"a"; 
        }
        else if(cnt==0){
            s=s+char(96+n-2)+"aa";
        }
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}

int main(){

    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }

}