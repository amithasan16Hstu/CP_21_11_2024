#include <bits/stdc++.h>
using namespace std;

bool good(int n, int p[]) {
    for (int i = 0; i < n; i++) {
        if (abs((i + 1) - p[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        if (good(n, p)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
