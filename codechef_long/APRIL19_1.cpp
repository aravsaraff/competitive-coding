#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    int n;
    cin >> n;
    ull a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ull max = *max_element(a, a + n);
    ull sec = 0;
    for(int i = 0; i < n; i++)
        if(a[i] > sec && a[i] < max)
            sec = a[i];
    cout << sec;
}