#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>> n>> k;
    string S;
    cin>> S;
    vector<int> freq(26,0);
    for(char c: S){
        freq[c-'a']++;
    }
    int oddCount=0;
    for(int i=0;i<26;i++){
        if(freq[i]%2!=0) oddCount++;
    }
    if(oddCount<=k+1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
