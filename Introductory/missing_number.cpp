#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
        int temp;
        cin >> temp;
        a[temp] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            cout << i;
        }
    }

    return 0;
}