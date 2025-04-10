#include <bits/stdc++.h>
using namespace std;

int calculateTypingTime(const string &s) {
    int time = 2;
    for (int i = 1; i < s.size(); i++) {
        time += (s[i] == s[i - 1]) ? 1 : 2;
    }
    return time;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        int maxTime = -1;
        string result;

        for (int i = 0; i <= s.size(); i++) {
            for (char ch = 'a'; ch <= 'z'; ch++) {
                string temp = s.substr(0, i) + ch + s.substr(i);
                int time = calculateTypingTime(temp);
                if (time > maxTime) {
                    maxTime = time;
                    result = temp;
                }
            }
        }

        cout << result << '\n';
    }

    return 0;
}
