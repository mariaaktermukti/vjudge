#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>> n;
    string r1,r2;
    cin>> r1 >> r2;
    for(int i=0;i<n;i++){
        if((r1[i]== 'G' || r1[i]=='B') && (r2[i]=='G' || r2[i]=='B')){
            continue;
        }
        if(r1[i]!= r2[i]){
            cout<< "NO" << endl;
            return;
        }
    }
    cout<< "YES" << endl;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        solve();
    }
    return 0;
}