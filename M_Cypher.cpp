#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        
        int finalDigits[110];
        for (int i = 0; i < n; i++) 
        {
            cin >> finalDigits[i];
        }
        
        for (int i = 0; i < n; i++) 
        {
            int b;
            cin >> b;
            string moves;
            cin >> moves;
            
            int countU = 0;
            int countD = 0;
            for (char move : moves) 
            {
                if (move == 'U') countU++;
                else if (move == 'D') countD++;
            }
            int delta = countD - countU;
            int original = (finalDigits[i] + delta) % 10;
            if (original < 0) original += 10; 
            
            cout << original;
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
