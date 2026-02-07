#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int DEGREESCELSIUS;
    double DEGREESFAHRENHEIT;
    cout << left << setw(10) << "DEGREESCELSIUS"<< "     " << setw(10) << "DEGREESFAHRENHEIT" << endl;
    for(DEGREESCELSIUS = 5; DEGREESCELSIUS <= 50; DEGREESCELSIUS+=5){

        double DEGREESFAHRENHEIT = (DEGREESCELSIUS *  9 / 5  + 32);

        cout << left << setw(20) << DEGREESCELSIUS << setw(20) << DEGREESFAHRENHEIT << endl;
    }
   

    return 0;
}