#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        unordered_map<int, int> freq; 
        int maxFreq = 0;

        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            freq[k]++;
            maxFreq = max(maxFreq, freq[k]); 
        }

        int result = n - maxFreq;
        cout << result << endl;
    }

    return 0;
}
