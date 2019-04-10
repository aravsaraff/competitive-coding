#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ull n;
        cin >> n;
        string s;
        cin >> s;
        char x;
        cin >> x;
        int seglen = 0;
        int sub = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] != x) seglen++;
            else {
                sub += seglen* (seglen+ 1) / 2;
                seglen= 0;
            }
        }
        sub += seglen* (seglen+ 1) / 2;
        cout << (n * (n + 1) / 2) - sub << "\n";
    }
}