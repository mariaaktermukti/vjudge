#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string s;
        getline(cin, s);

        int b_count = 0, B_count = 0;
        vector<char> result;
        for (int i = s.size() - 1; i >= 0; --i) {
            char ch = s[i];
            if (ch == 'b') {
                b_count++;
            } else if (ch == 'B') {
                B_count++;
            } else if (islower(ch)) {
                if (b_count > 0) {
                    b_count--;
                } else {
                    result.push_back(ch);
                }
            } else if (isupper(ch)) {
                if (B_count > 0) {
                    B_count--;
                } else {
                    result.push_back(ch);
                }
            }
        }
        reverse(result.begin(), result.end());

        for (char ch : result) cout << ch;
        cout << '\n';
    }

    return 0;
}
