#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>> T;
    while(T--)
    {
        int H,X,Y;
        cin>> H>> X>> Y;
        int attacks_only_nornal=(H+X-1)/X;
        int remining_health=H-Y;
        int attracks_with_speical=1;
        if(remining_health>0)
          attracks_with_speical= attracks_with_speical+ (remining_health+X-1)/X;

        cout<< min(attacks_only_nornal, attracks_with_speical) << endl;  
    }
    return 0;
}
