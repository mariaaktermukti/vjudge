#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T; 

    while(T--) {
        int X;
        cin >> X; 
        int change = 100 - X; 
        int maxPayback = (change / 10) * 10; 
        cout << maxPayback << "\n";
    }
    return 0;
}
