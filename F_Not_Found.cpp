#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (char c = 'a'; c <= 'z'; c++) 
    {
        if (s.find(c) == string::npos) 
        {  
            cout << c << "\n";
            return 0;
        }
    }
    cout << "None" << "\n";
    return 0;
}