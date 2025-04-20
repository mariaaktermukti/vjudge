#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];

        long long ans = 0;
        priority_queue<int> pq;  

        for (int x : s) {
            if (x > 0) {
                pq.push(x);        
            } else if (!pq.empty()) {
                ans += pq.top();   
                pq.pop();
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
