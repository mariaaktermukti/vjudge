#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<ll> A(N+1), pref(N+1, 0);
        for (int i = 1; i <= N; i++)
        {
            cin >> A[i];
            pref[i] = pref[i-1] + A[i];
        }

        ll total = pref[N];
        ll ways = 0;
        for (int i = 1; i <= N; i++)
        {
            if (A[i] != 0) continue;           
            ll sumL = pref[i-1];
            ll sumR = total - pref[i];
            if (sumL == 0 || sumR == 0) continue; 
            if (sumL == sumR) 
                ways += 2;
            else 
                ways += 1;
        }

        cout << ways << "\n";
    }
    return 0;
}
