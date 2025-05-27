#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) 
{
    return (a / gcd(a, b)) * b;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long X, Y, K;
        cin >> X >> Y >> K;

        if (X == Y) {
            cout << X + Y << '\n';
            continue;
        }

        long long g = gcd(X, Y);
        long long a1 = g, b1 = Y;
        long long a2 = X, b2 = g;

        long long result1_a = lcm(a1, b1);
        long long result1_b = b1;
        long long result2_a = lcm(a2, b2);
        long long result2_b = b2;

        long long sum1 = a1 + lcm(a1, b1);
        long long sum2 = b2 + lcm(a2, b2);

        long long minSum;
        if (K == 0) 
        {
            minSum = X + Y;
        } 
        else if (K == 1) 
        {
            minSum = min(sum1, sum2);
        } 
        else 
        {
            long long firstLCM = min(result1_a, result2_a);
            long long firstGCD = g;
            long long finalGCD = gcd(firstGCD, firstLCM);
            long long finalLCM = lcm(firstGCD, firstLCM);
            minSum = finalGCD + finalLCM;
        }

        cout << minSum << '\n';
    }

    return 0;
}
