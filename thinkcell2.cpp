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
    vi arr(n);
    int j=0;
    for(int i=0; i<n; i++){
        if(i%2==0){   
            arr[i]=i+1;
        }
        else{
            int k=n%2==0?n:n-1;
            arr[i]=k-2*j;
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){

    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }

}