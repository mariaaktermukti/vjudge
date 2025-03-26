#include<bits/stdc++.h>
using namespace std;
int main()
{
    int S,T;
    cin>> S >> T;
    int count=0;
    for(int i=0;i<=S;++i)
    {
        for(int j=0;j<=S-i;++j)
        {
            for(int k=0;k<=S-i-j;++k)
            {
                if(i*j*k<=T)
                {
                    count++;
                }
            }
        }
    }
    cout<< count << endl;
    return 0;
}