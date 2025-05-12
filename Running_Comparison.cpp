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
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) 
        {
            cin >> B[i];
        }

        int both_happy = 0;
        for (int i = 0; i < N; i++) 
        {
            if (B[i] <= 2LL * A[i] && A[i] <= 2LL * B[i]) 
            {
                both_happy++;
            }
        }

        cout << both_happy << "\n";
    }

    return 0;
}
