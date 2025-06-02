#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    
    while (T--) 
    {
        int N;
        cin >> N;
        vector<int> scores(N);
        bool isgood = true;
        
        for (int i = 0; i < N; ++i) 
        {
            cin >> scores[i];
            if (scores[i] <= 4) 
            {
                isgood = false;
            }
        }

        if (isgood) cout << "YES" << endl;
        else cout << "NO" << endl;
    
    }
    
    return 0;
}
