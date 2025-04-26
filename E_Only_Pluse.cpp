#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        int maxProduct = 0;
        for (int da = 0; da <= 5; ++da) 
        {
            for (int db = 0; db <= 5 - da; ++db) 
            {
                int dc = 5 - da - db;
                int newA = a + da;
                int newB = b + db;
                int newC = c + dc;
                int product = newA * newB * newC;
                maxProduct = max(maxProduct, product);
            }
        }
        cout << maxProduct << endl;
    }
    return 0;
}
