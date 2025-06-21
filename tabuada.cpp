#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Digite um numero para ver a tabuada: ";
    cin >> num;

    for(int i = 0; i <= 12; ++i){
        cout << num << " * " << i << " = " << num * i<<endl;
    }

    return 0;
}