#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    unordered_set<string> seen; 
    
    for (int i = 0; i < n; ++i) 
    {
        string name;
        cin >> name;
        
        if (seen.find(name) != seen.end()) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
            seen.insert(name);  
        }
    }
    
    return 0;
}
