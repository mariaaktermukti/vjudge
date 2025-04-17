#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        int m;
        cin >> m;
        while (m--) {
            string s;
            cin >> s;

            if ((int)s.length() != n) {
                cout << "NO\n";
                continue;
            }

            unordered_map<int, char> num_to_char;
            unordered_map<char, int> char_to_num;
            bool ok = true;

            for (int i = 0; i < n; ++i) {
                int num = a[i];
                char ch = s[i];

                if (num_to_char.count(num) && num_to_char[num] != ch) {
                    ok = false;
                    break;
                }
                if (char_to_num.count(ch) && char_to_num[ch] != num) {
                    ok = false;
                    break;
                }

                num_to_char[num] = ch;
                char_to_num[ch] = num;
            }

            cout << (ok ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
