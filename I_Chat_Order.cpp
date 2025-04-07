#include <iostream>
#include <unordered_map>
#include <list>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    unordered_map<string, list<string>::iterator> seen;
    list<string> order;
    
    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;

        if (seen.find(name) != seen.end()) {
            order.erase(seen[name]);
        }
        order.push_front(name);
        seen[name] = order.begin();
    }
    for (const auto& name : order) {
        cout << name << "\n";
    }
    
    return 0;
}
