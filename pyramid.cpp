#include <iostream>
using namespace std;

int main(){

    int align, i, j, k;
    cout << "Enter the number align: ";
    cin >> align;

    for ( i = 1; i <= align; i++)
    {
        // Space
        for ( j = 1; j <= align - i; j++)
        {
            cout <<" ";
        }

        // Asterisk
        for ( k = 1; k <= (2 * i -1); k++)
        {
            cout <<"*";
        }
        cout << endl;
        
    }
    

    return 0;
}