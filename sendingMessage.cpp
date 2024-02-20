#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, f, a, b;
        cin>>n>>f>>a>>b;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int last=0;
        for(int i=0; i<n; i++){
            long long keepn=(long long)a*(v[i]-last);
            long long turnOnAndOff=(long long) b;
            long long required=min(keepn,turnOnAndOff);
            f -= required;
            last=v[i];
            if(f<=0){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(f>0){
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}