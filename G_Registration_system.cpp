#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> db;

    while (n--) {
        string name;
        cin >> name;

        if (db.find(name) == db.end()) {
            db[name] = 1;
            cout << "OK\n";
        } else {
            int count = db[name];
            string newName = name + to_string(count);
            while (db.find(newName) != db.end()) {
                count++;
                newName = name + to_string(count);
            }
            db[name] = count + 1;  
            db[newName] = 1;      
            cout << newName << '\n';
        }
    }

    return 0;
}
