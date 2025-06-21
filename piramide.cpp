#include <iostream>
using namespace std;

int main(){
    int align;
    cout << "Enter the number of aligns: ";
    cin>> align;

    for (int i = 1; i <= align; i++)
    {
        // Space
        for (int j = 1; j <= align -i; j++)
        {
            cout << " ";
        }

        // Asteriscos
        for(int k = 1; k<=(2 * i -1); k++){
            cout <<"*";
        }
        cout <<endl;
    }
    

    return 0;
}