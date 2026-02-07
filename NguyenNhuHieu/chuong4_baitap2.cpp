#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    
    cout << left << setw(10) << "NUMBER" 
         << setw(10) << "SQUARE" 
         << setw(10) << "CUBE" << endl;
    cout << "------------------------------" << endl;

   
    for (int i = 1; i <= 10; i++) { 
        int square = i * i;     
        int cube = i * i * i;    

        
        cout << left << setw(10) << i 
             << setw(10) << square 
             << setw(10) << cube << endl;
    }


    return 0;
}