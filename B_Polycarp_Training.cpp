#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> contests(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> contests[i];
    }

    std::sort(contests.begin(), contests.end());

    int day = 1;
    for (int i = 0; i < n; ++i) {
        if (contests[i] >= day) {
            ++day;
        }
    }

    std::cout << day - 1 << std::endl;
    return 0;
}