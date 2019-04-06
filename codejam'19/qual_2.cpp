#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        ull n;
        cin >> n;
        string s;
        cin >> s;
        for(int j = 0; j < s.length(); j++)
            s[j] = (s[j] == 'E') ? 'S' : 'E';
        cout << "Case #" << i << ": " << s << "\n";
    }
}