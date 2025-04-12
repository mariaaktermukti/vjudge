#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        string word;
        cin >> word;
        string root = word.substr(0, word.size() - 2);
        cout << root + "i" << "\n";
    }
    return 0;
}
