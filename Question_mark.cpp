#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int result = 0;
        for (char c : "ABCD") { 
            result += min(n, static_cast<int>(count(s.begin(), s.end(), c)));
        }

        cout << result << endl;
    }

    return 0;
}
