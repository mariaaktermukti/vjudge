#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) 
    {
        int N, D;
        cin >> N >> D;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) 
        {
            cin >> A[i];
        }

        int switches = 0;
        bool holdingClose = true; 

        for (int i = 0; i < N; ++i) 
        {
            bool needsClose = (A[i] <= D);

            if (holdingClose != needsClose) 
            {
                ++switches;
                holdingClose = needsClose;
            }
        }

        cout << switches << '\n';
    }

    return 0;
}
