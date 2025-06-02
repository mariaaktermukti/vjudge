#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) 
        {
            cin >> A[i];
        }

        vector<bool> received(N, false);

        for (int i = 0; i < N - 1; ++i) 
        {
            for (int j = i + 1; j < N; ++j) 
            {
                if (A[j] < A[i]) 
                {
                    received[j] = true;
                }
            }
        }

        int count = 0;
        for (bool got : received) 
        {
            if (got) count++;
        }

        cout << count << '\n';
    }

    return 0;
}
