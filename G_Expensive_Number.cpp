#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int pos = s.size() - 1;
        while (pos >= 0 && s[pos] == '0') {
            pos--;
        }
        int op = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (i < pos) {
                if (s[i] != '0') {
                    op++;
                }
            } else if (i > pos) {
                op++;
            }
        }
        cout << op << "\n";
    }
    return 0;
}