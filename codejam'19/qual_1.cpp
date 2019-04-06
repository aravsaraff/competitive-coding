#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    int t;
    cin >> t;
    for(int s = 1; s <= t; s++) {
        ull n;
        cin >> n;
        ull n1 = 0;
        int k = 1;
        ull num = n;
        while(num != 0) {
            int dig = num % 10;
            if(dig == 4){
                n1 += 2 * pow(10, k - 1);
                n -= 2 * pow(10, k - 1);
            }
            num /= 10;
            k++;
        }
        cout << "Case #" << s << ": " << n << " " << n1 << "\n";
    }
}