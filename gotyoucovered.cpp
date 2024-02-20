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

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve(){
    int x, n;
        std::cin >> x >> n;

        int maxDifficulty = x / n;
        int remainingDifficulty = x % n;
        int maxBalance=0;

        if (remainingDifficulty == 0) {
            maxBalance = maxDifficulty;
        } else {
            if(gcd(maxDifficulty,remainingDifficulty)==1)
            maxBalance = gcd(maxDifficulty+(n)*remainingDifficulty, abs(maxDifficulty-remainingDifficulty));
            else{
                maxBalance = gcd(maxDifficulty, remainingDifficulty);
            }
        }

        std::cout << maxBalance << std::endl;

}

int main(){

    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }

}