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
        cin >> N >> X;
        string S;
        cin >> S;

        int swipesLeft = 0;
        bool valid = true;

        for (char c : S) 
        {
            if (c == '1') 
            {
                swipesLeft = X;
            } 
            else 
            { 
                if (swipesLeft > 0) 
                {
                    swipesLeft--; 
                } 
                else 
                {
                    valid = false; 
                    break;
                }
            }
        }

        cout << (valid ? "YES" : "NO") << '\n';
    }

    return 0;
}