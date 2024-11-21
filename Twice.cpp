#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> freq;
        int x, pairs = 0;

        for (int i = 0; i < n; i++) {
            cin >> x;
            freq[x]++;
        }

        for (auto i : freq) {
            pairs += i.second / 2;
        }

        cout << pairs << endl;
    }

    return 0;
}
