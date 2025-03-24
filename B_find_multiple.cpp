#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    cin>> A >> B >> C;

    int X= ((A+C-1)/C)*C;

    if(X<=B) cout <<X << endl;
    else cout << -1 << endl;

    return 0;
}