#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin >> A >> B;
    if(A>B) cout << 0;
    else cout << (B-A+1);
    return 0;
}