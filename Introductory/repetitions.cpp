#include <bits/stdc++.h>
using namespace std;

int main() {
    string bio;
    cin >> bio;
    int n = bio.length();
    int ans = 1;
    stack<char> stac;
    stac.push(bio[0]);
    for (int i = 1; i < n; i++) {
        if (bio[i] == bio[i - 1]) {
            stac.push(bio[i]);
            int temp = stac.size();
            ans = max(ans, temp);
        } else {
            while (!stac.empty()) {
                stac.pop();
            }
            stac.push(bio[i]);
        }
    }
    cout << ans;
    return 0;
}