#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--) 
    {
        long long N, K;
        cin >> N >> K;
        long long sum = 0;
        for (int i = 0; i < N; i++) 
        {
            long long x;
            cin >> x;
            sum += x;
        }
        if (sum >= N && sum <= N * (K + 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
