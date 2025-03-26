#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S, T;
    cin >> S >> T;
    
    int count = 0;
    for (size_t i = 0; i < S.length(); ++i) 
    {
        if (S[i] != T[i]) 
        {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
