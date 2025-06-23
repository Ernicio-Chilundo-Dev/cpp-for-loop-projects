#include <iostream>
#include <string>
using  namespace std;

int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        cout << "Letter "<<i+1<<": "<< word[i]<<endl;
    }
    
    return 0;
}