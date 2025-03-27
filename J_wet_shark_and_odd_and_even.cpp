#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> num(n);
    long long sum=0;
    int min_Odd= 1e9+1;
    for(int i=0;i<n;i++)
    {
       cin>> num[i];
       sum= sum+num[i];
       if(num[i] % 2 != 0)
       {
        min_Odd= min(min_Odd, num[i]);
       }
    }
    if(sum % 2== 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum-min_Odd << endl;
    }
    return 0;
}
