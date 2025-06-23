# C++ Basics Projects

This repository contains a few beginner-friendly C++ programs that demonstrate basic input/output operations, loops, and formatting.

## 📘 Programs Included

### 1. Word Letter Printer

**Description:**  
Reads a word from the user and prints each letter along with its position.

**Code:**
```cpp
#include <iostream>
#include <string>
using namespace std;

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
