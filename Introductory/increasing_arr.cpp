#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, ans = 0;
    cin >> n;
    long long int a[n];
    cin >> a[0];
    long long int highest = a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (highest <= a[i]) {
            highest = a[i];
            continue;
        } else
            ans += (highest - a[i]);
    }

    cout << ans;
    return 0;
}