#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, T;
    cin >> N >> X >> T;

    int batches = (N + X - 1) / X;
    int total_time = batches * T;

    cout << total_time << endl;

    return 0;
}
