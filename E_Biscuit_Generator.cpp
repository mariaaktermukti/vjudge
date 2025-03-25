#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,T;
    cin>> A >> B >> T;
    double Time_lim = T+0.5;
    int count=0;
    for(int time=A;time<=Time_lim; time = time +A)
    {
        count++;
    }
    cout << count*B;
    return 0;
}
