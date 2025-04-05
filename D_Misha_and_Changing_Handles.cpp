#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main() {
    int q;
    cin >> q;

    unordered_map<string, string> currentToOriginal;
    map<string, string> result;

    for (int i = 0; i < q; i++) {
        string oldHandle, newHandle;
        cin >> oldHandle >> newHandle;

        string originalHandle;
        if (currentToOriginal.count(oldHandle)) {
            originalHandle = currentToOriginal[oldHandle];
            currentToOriginal.erase(oldHandle);
        } else {
            originalHandle = oldHandle;
        }

        currentToOriginal[newHandle] = originalHandle;
    }

    for (auto& pair : currentToOriginal) {
        result[pair.second] = pair.first;
    }

    cout << result.size() << endl;
    for (auto& pair : result) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
