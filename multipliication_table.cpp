#include <iostream>
using namespace std;

int main(){
    int number;
    cout <<"Enter a number to see its multiplication table: ";
    cin >> number;

    for (int i = 1; i <= 12; i++)
    {
        cout <<number<< " * " << i << " = " << number * i<<endl;
    }
    
    
    return 0;
}