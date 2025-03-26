#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X;
    cin>> N >> X;
    vector<int>A(N);
    for(int i=0;i<N;++i)
    {
        cin>> A[i];
    }
    bool frist =true;
    for(int i=0;i<N;++i)
    {
        if(A[i]!=X)
        {
           if(!frist) cout << " ";
           cout<< A[i];
           frist= false;
        }
    }
    cout<< endl;
    return 0;
}