#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        vector<int> B(M);
        int maxSuffix = 0;
        for (int i = 0; i < M; ++i) 
        {
            cin >> B[i];
            maxSuffix = max(maxSuffix, B[i]); 
        }

        sort(A.end() - maxSuffix, A.end());

        for (int i = 0; i < N; ++i)
            cout << A[i] << " ";
        cout << "\n";
    }
    return 0;
}
