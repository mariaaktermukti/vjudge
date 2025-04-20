#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n, m, q;
        std::cin >> n >> m >> q;
        std::vector<int> teachers(m);
        for (int i = 0; i < m; ++i) {
            std::cin >> teachers[i];
        }
        std::sort(teachers.begin(), teachers.end());
        while (q--) {
            int david_pos;
            std::cin >> david_pos;
            auto it = std::lower_bound(teachers.begin(), teachers.end(), david_pos);
            if (it == teachers.begin()) {
                std::cout << *it - 1 << "\n";
            } else if (it == teachers.end()) {
                std::cout << n - *(it - 1) << "\n";
            } else {
                int left = *(it - 1);
                int right = *it;
                std::cout << (right - left) / 2 << "\n";
            }
        }
    }
    return 0;
}
