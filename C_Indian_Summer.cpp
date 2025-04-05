#include <iostream>
#include <set>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    set<pair<string, string>> uniqueLeaves;

    for (int i = 0; i < n; i++) 
    {
        string species, color;
        cin >> species >> color;

        uniqueLeaves.insert({species, color});
    }

    cout << uniqueLeaves.size() << endl;

    return 0;
}
