#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        set<char> unique_chars(b.begin(), b.end());

        vector<char> r(unique_chars.begin(), unique_chars.end());

        unordered_map<char, char> decode_map;
        int len = r.size();
        for (int i = 0; i < len; ++i) {
            decode_map[r[i]] = r[len - 1 - i];
        }

        for (char c : b) {
            cout << decode_map[c];
        }
        cout << '\n';
    }

    return 0;
}
