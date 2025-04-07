#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    unordered_map<string, string> ipToName;
    for (int i = 0; i < n; i++) 
    {
        string name, ip;
        cin >> name >> ip;
        ipToName[ip] = name;
    }
    
    for (int i = 0; i < m; i++) 
    {
        string command, ipWithSemicolon;
        cin >> command >> ipWithSemicolon;
        string ip = ipWithSemicolon.substr(0, ipWithSemicolon.size() - 1);
        cout << command << " " << ipWithSemicolon << " #" << ipToName[ip] << "\n";
    }
    
    return 0;
}
