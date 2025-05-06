#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> A(N);
        long long sum = 0;
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            sum += A[i];
        }

        if (sum % N == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}