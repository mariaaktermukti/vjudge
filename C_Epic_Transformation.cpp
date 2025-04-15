#include <iostream>
#include <unordered_map>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::unordered_map<int, int> freq;
        int max_freq = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            std::cin >> x;
            freq[x]++;
            max_freq = std::max(max_freq, freq[x]);
        }
        int remaining = n - max_freq;
        if (max_freq > remaining) {
            std::cout << max_freq - remaining << '\n';
        } else {
            std::cout << n % 2 << '\n';
        }
    }
    return 0;
}
