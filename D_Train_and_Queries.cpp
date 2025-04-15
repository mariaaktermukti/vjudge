#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> route(n);
        map<int, vector<int>> pos; 

        for(int i = 0; i < n; i++){
            cin >> route[i];
            pos[route[i]].push_back(i);
        }

        while(k--){
            int a, b;
            cin >> a >> b;
            
            if(pos.find(a) == pos.end() || pos.find(b) == pos.end()){
                cout << "NO\n";
                continue;
            }

            if(pos[a][0] <= pos[b].back()){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
