#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int computeF(const vector<int>& arr) {
    int result = 0;
    for (int i = 0; i + 1 < arr.size(); i++) {
        result += arr[i] + arr[i + 1];
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N);
        int sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }
        sort(A.begin(), A.end());
        int minF = computeF(A);
        reverse(A.begin(), A.end());
        int maxF = computeF(A);

        while (Q--) {
            int X;
            cin >> X;
            if (X < minF || X > maxF) {
                cout << -1 << endl;
            } else {
                sort(A.begin(), A.end());
                if (computeF(A) == X) {
                    for (int num : A) cout << num << " ";
                    cout << endl;
                } else {
                    reverse(A.begin(), A.end());
                    if (computeF(A) == X) {
                        for (int num : A) cout << num << " ";
                        cout << endl;
                    } else {
                        cout << -1 << endl; 
                    }
                }
            }
        }
    }
    return 0;
}
