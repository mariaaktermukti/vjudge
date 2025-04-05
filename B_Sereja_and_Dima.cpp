#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int cards[1000];  
    for (int i = 0; i < n; i++) 
    {
        cin >> cards[i];
    }

    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    bool turn = true;

    while (left <= right) 
    {
        int pick;
        if (cards[left] > cards[right]) 
        {
            pick = cards[left];
            left++;
        } 
        else 
        {
            pick = cards[right];
            right--;
        }

        if (turn) 
        {
            sereja += pick;
        } 
        else 
        {
            dima += pick;
        }

        turn = !turn; 
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
