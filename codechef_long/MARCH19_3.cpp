#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int value(string s) {
    int val[5] = {16, 8, 4, 2, 1};
    int sum = 0;
    for(int i = 0; i < s.length(); i++) {
        switch(s[i]) {
            case 'a': sum |= val[0]; break;
            case 'e': sum |= val[1]; break;
            case 'i': sum |= val[2]; break;
            case 'o': sum |= val[3]; break;
            case 'u': sum |= val[4]; break;
        }
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        int arr[n], sol = 0;
        string s;
        for(int i = 0; i < n; i++) {
            cin >> s;
            arr[i] = value(s);
        }
        for(int i = 0; i < n - 1; i++)
            for(int j = i + 1; j < n; j++)
                if((arr[i] | arr[j]) == 31)
                    sol++;
        cout << sol << "\n";
    }
}
