#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>> T;
    while(T--)
    {
        int N;
        cin>> N;
        vector<long long> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        long long sumPo=0;
        for(auto x: A)
        {
            if(x>0) sumPo= sumPo+x;
        }
        if(sumPo==0)
        {
            cout<< 0 << endl;
            continue;
        }
        int l=0;
        while(l<N && A[l] <= 0) l++;
        int r= N-1;
        while(r>=0 && A[r] <= 0) r--;

        int operation=0;
        for(int i=l;i<=r;i++)
        {
            if(A[i]<0) operation++;
        }
        cout << operation << endl;
    }
    return 0;
}