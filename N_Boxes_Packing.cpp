#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> freq;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        freq[a]++;
    }

    int max_visible = 0;
    for (auto &entry : freq) {
        max_visible = max(max_visible, entry.second);
    }

    cout << max_visible << endl;
    return 0;
}
