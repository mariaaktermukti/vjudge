#include<bits/stdc++.h>
using namespace std;
int main()
{ int A, B;
    cin>> A >> B;
    int all_coins= 0;
    for(int i=0;i<2; i++)
    {
        if(A>=B)
        {
            all_coins= all_coins+A;
            A--;
        }
        else
        {
            all_coins= all_coins+B;
            B--;
        }
    }
    cout<< all_coins << endl;
    return 0;
}
