#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    cout << n << " ";
    while (n) {
        if (n % 2 == 0) {
            n /= 2;
            cout << n << " ";
        } else if (n == 1)
            break;
        else {
            n *= 3;
            n += 1;
            cout << n << " ";
        }
    }

    return 0;
}