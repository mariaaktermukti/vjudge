#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> sequences(n, vector<int>(n - 1));
    map<int, int> first_elem_count;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            cin >> sequences[i][j];
        }
        first_elem_count[sequences[i][0]]++;
    }

    int first_element = -1;
    for (const auto& [num, count] : first_elem_count) {
        if (count == n - 1) {
            first_element = num;
            break;
        }
    }

    cout << first_element << " ";
    for (const auto& seq : sequences) {
        if (seq[0] != first_element) {
            for (int num : seq) {
                cout << num << " ";
            }
            break;
        }
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
