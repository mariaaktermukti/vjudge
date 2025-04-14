#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n + 1], d[n + 2] = {0};
    unordered_set<int> seen;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = n; i >= 1; --i) {
        seen.insert(a[i]);
        d[i] = seen.size();
    }

    while (m--) {
        int l;
        cin >> l;
        cout << d[l] << endl;
    }

    return 0;
}
