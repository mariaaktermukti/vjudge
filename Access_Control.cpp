#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int T; 
    cin >> T;
    while (T--) 
    {
        int N, X;
        string S;
        cin >> N >> X >> S;

        int swipes = 0; 
        bool valid = true;

        for (char c : S) 
        {
            if (c == '1') 
            {
                swipes = X; 
            } 
            else 
            { 
                if (swipes == 0) 
                {
                    valid = false; 
                    break;
                }
                swipes--;
            }
        }

        cout << (valid ? "YES" : "NO") << '\n';
    }
    return 0;
}
