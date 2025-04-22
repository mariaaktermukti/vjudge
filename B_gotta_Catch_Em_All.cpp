#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int N,X,Y;
        cin>>N>>X>>Y;
        int totalcost=0;
        for(int i=0;i<N;i++)
        {
            int difficulties;
            cin>> difficulties;
            totalcost= totalcost+ min(difficulties*X,Y);
        }
        cout<< totalcost << endl;
    }
 return 0;
}
