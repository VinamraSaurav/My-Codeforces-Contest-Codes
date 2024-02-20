#include <bits/stdc++.h>

using namespace std;

int main() {
    int t=1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, f;
        cin >> s >> f;
        int add = 0;
        int remove = 0;


        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && f[i] == '0') {
                remove++;
            }
            if (s[i] == '0' && f[i] == '1') {
                add++;
            }
        }
        cout << max(add,remove) << endl;
    }

    return 0;
}
