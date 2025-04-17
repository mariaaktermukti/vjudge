#include <iostream>
#include <queue>
#include <vector>
#include <set>

using namespace std;

int main() {
    int q;
    cin >> q;

    queue<int> arrivalQueue; 
    priority_queue<pair<int, int>> polycarpQueue; 
    vector<bool> served(5e5 + 5, false); 

    int id = 1;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int m;
            cin >> m;
            arrivalQueue.push(id);
            polycarpQueue.push({m, -id}); 
            id++;
        } else if (type == 2) {
            while (served[arrivalQueue.front()]) {
                arrivalQueue.pop(); 
            }
            int servedId = arrivalQueue.front();
            arrivalQueue.pop();
            served[servedId] = true;
            cout << servedId << " ";
        } else if (type == 3) {
            while (served[-polycarpQueue.top().second]) {
                polycarpQueue.pop(); 
            }
            int servedId = -polycarpQueue.top().second;
            polycarpQueue.pop();
            served[servedId] = true;
            cout << servedId << " ";
        }
    }

    cout << endl;
    return 0;
}
