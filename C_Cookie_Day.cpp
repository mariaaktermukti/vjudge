#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        long long K;
        cin>> N >> K;
        vector<long long> A(N);
        for(int i=0;i<N;i++)
        {
            cin>> A[i];
        }
        long long minwaste =-1;
        for(long long cookies :A)
        {
            if(cookies>=K)
            {
                long long waste = cookies %K;
                if(minwaste ==-1 || waste< minwaste)
                {
                    minwaste= waste;
                }
            }
        }
        cout<< minwaste << endl;
    }
    return 0;
}
