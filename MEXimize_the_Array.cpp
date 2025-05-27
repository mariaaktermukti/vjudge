#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int &x : A) cin >> x;

        vector<bool> present(N + 2, false);
        for (int x : A) {
            if (x <= N) present[x] = true;
        }

        int max_mex = 0;
        for (int i = 0; i <= N + 1; ++i) {
            if (!present[i]) {
                max_mex = i;
                break;
            }
        }

        vector<int> freq(N + 1, 0);
        for (int x : A) {
            if (x <= N) freq[x]++;
        }

        int operations = 0;
        for (int i = 0; i < max_mex; ++i) {
            if (freq[i] == 0) {
                // Find a number greater than max_mex to convert
                for (int j = 0; j < N; ++j) {
                    if (A[j] > max_mex) {
                        operations += abs(A[j] - i);
                        A[j] = i;
                        break;
                    }
                }
            }
        }

        cout << operations << '\n';
    }

    return 0;
}
