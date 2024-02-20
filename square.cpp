#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x[4], y[4];
        cin>>x[0]>>y[0];
        cin>>x[1]>>y[1];
        cin>>x[2]>>y[2];
        cin>>x[3]>>y[3];

        int num=x[0];
        int index;
        for(int i=1; i<4;i++){
            if(num==x[i]){
                index=i;
                break;
            }
        }

        int diff=(y[0]-y[index]);
        int area=diff*diff;
        cout<<area<<endl;
    }

}