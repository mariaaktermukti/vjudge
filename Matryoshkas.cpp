#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    set<int> B;
    for (auto &p : cnt) {
        B.insert(p.first);
        B.insert(p.first + 1);
    }

    int last = 0, res = 0;
    for (int x : B) {
        int have = cnt[x];
        if (have > last) {
            res += have - last;
        }
        last = have;
    }

    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
