#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int count1 = 0;
    string ans="";
    vector<vector<char>> v(n);
    for (int i = 0; i < n; i++) {
        int count = 0;
        v[i] = vector<char>(n);
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
            if (v[i][j] == '1') {
                count++;
            }
        }
        if (count1 == 0) {
            count1 = count;
        } else {
            if(ans==""){
                if (count1 == count) {
                ans="SQUARE";
                
            } else {
                ans="TRIANGLE";
                
            }
            }
            
        }
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        solve();
    }

    return 0;
}
