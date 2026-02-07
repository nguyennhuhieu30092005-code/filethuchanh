#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int diemso;
    char xeploai;
    cout << "nhap diem so" << endl;
    cin >> diemso;
    if(diemso >= 90){
        xeploai = 'A';
    }else if(diemso <= 80){
        xeploai = 'B';
    }else if((diemso <= 70)){
       xeploai = 'C';
    }else if(diemso <= 60) 
       xeploai = 'D';
    else{(diemso < 60); 
    xeploai = 'F';}
    
    cout << xeploai << endl;

    return 0;
}