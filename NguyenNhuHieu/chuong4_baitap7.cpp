#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    
    for (int i = 1; i <= 10; i++) {
        
        
        if (i % 2 != 0) {
            for (int j = 1; j <= 10; j++) {
                cout << j << "   "; 
            }
        } 
        // Nếu hàng là số chẵn (2, 4, 6, 8, 10)
        else {
            for (int j = 10; j >= 1; j--) {
                cout << j << "   "; 
            }
        }

     
        cout << endl;
    }

    return 0;
}
