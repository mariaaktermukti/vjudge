#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count_one=0;
        int count_greater=0;
        for(int i=0;i<n;i++)
        {
            int h;
            cin >> h;
            if(h==1) count_one++;
            else count_greater++;
        }
        int ans= count_greater + (count_one/2)+(count_one%2);
        cout << ans << endl;
    }
    return 0;
}
