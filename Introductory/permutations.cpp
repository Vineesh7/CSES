#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n;
    cin >> n;
    lli even, odd;
    if(n==1)
    cout<<"1"<<endl;
    else if (n <= 3)
        cout << "NO SOLUTION" << endl;

    else {
        if (n % 2 == 0) {
            even = n;
            odd = n - 1;
        } else {
            even = n - 1;
            odd = n;
        }
        for (lli i = 2; i <= even; i += 2) {
            cout << i << " ";
        }
        for (lli i = 1; i <= odd; i += 2) {
            cout << i << " ";
        }
        
    }
    return 0;
}