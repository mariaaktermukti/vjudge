#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        ll base = 0;
        vector<ll> gains;
        gains.reserve(n);

        for(int i = 0; i < n; i++){
            ll leftCnt  = i;
            ll rightCnt = (n - 1 - i);
            if(s[i] == 'L'){
                base += leftCnt;
                ll gain = rightCnt - leftCnt;
                if(gain > 0) gains.push_back(gain);
            } else {
                base += rightCnt;
                ll gain = leftCnt - rightCnt;
                if(gain > 0) gains.push_back(gain);
            }
        }

        sort(gains.begin(), gains.end(), greater<ll>());

        int m = gains.size();
        vector<ll> pref(m+1, 0);
        for(int i = 1; i <= m; i++){
            pref[i] = pref[i-1] + gains[i-1];
        }
        for(int k = 1; k <= n; k++){
            int use = min(k, m);
            cout << (base + pref[use]) << (k==n?'\n':' ');
        }
    }
    return 0;
}
