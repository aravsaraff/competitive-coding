#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char x;
        cin >> x;
        int res = 0;
        for(int i = 0; i < n; i++) {
            int f = 0;
            for(int j = i; j < n; j++)
                if(s[j] == x) {
                    f = 1;
                    res += n - j;
                }
        }
        cout << res << "\n";
    }
}