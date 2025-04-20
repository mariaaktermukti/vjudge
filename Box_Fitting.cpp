#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long W;
        cin >> n >> W;

        vector<int> count(21, 0);
        for (int i = 0; i < n; ++i) {
            int w;
            cin >> w;
            int idx = log2(w);
            count[idx]++;
        }

        int height = 0;
        while (n > 0) {
            long long space = W;
            for (int i = 20; i >= 0; --i) {
                while (count[i] > 0 && space >= (1 << i)) {
                    int fit = min((int)(space / (1 << i)), count[i]);
                    count[i] -= fit;
                    n -= fit;
                    space -= (1LL << i) * fit;
                }
            }
            height++;
        }

        cout << height << endl;
    }
    return 0;
}
