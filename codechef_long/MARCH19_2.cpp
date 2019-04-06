#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll power(ll n)
{
    ll pow[19] = {
        1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000, 100000000000, 1000000000000, 10000000000000, 100000000000000, 1000000000000000, 10000000000000000, 100000000000000000, 1000000000000000000
    };

    return pow[n];
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, num = 0;
        ll d;
        cin >> n >> d;
        ll dig = n % 10, prev = dig, ind = 0;
        while(n != 0) {
            if(dig >= d || prev < dig)
                num = num * 10 + d;
            else
                num = dig * power(ind) + num;
            prev = num / power(ind);
            n /= 10;
            dig = n % 10;
            ind++;
        }
        cout << num << "\n";
    }
}
