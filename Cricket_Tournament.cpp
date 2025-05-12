#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) 
    {
        int N, M;
        cin >> N >> M;
        if (N - 1 >= M) 
        {
            cout << "YES\n";
        } 
        else 
        {
            cout << "NO\n";
        }
    }
    return 0;
}
