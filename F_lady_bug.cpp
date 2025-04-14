#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int evenOneInA = 0;
    int oddOneInA = 0;

    int evenZeroInB = 0;
    int oddZeroInB = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            if (i % 2 == 0) evenOneInA++;
            else oddOneInA++;
        }

        if (b[i] == '0') {
            if (i % 2 == 0) evenZeroInB++;
            else oddZeroInB++;
        }
    }

    if (oddZeroInB >= evenOneInA && evenZeroInB >= oddOneInA) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
