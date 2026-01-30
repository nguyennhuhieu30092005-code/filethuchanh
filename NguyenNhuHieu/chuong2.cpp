#include <iostream>

#include <iomanip>

 using namespace std;

 int main()
 {
    cout << "bài tập 1" << endl;
    cout << "\nDataType Bytes";
    cout << "\n-------- ------";
    cout << "\nint     " << sizeof(int);
    cout << "\nchar     " << sizeof(char);
    cout << "\nbool    " << sizeof(bool);
    cout <<"\n"; 

    // bài tập 2
    cout << "bài tập 2" << endl;

    cout << "15.0 + 2.0 =" << (15.0+2.0) << endl
         << "15.0 - 2.0 ="<<(15.0-2.0) << endl
         << "15.0 * 2.0 =" <<(15.0*2.0) << endl
         << "15.0 / 2.0 =" <<(15.0/2.0) << endl;

    // bài tập 3
    cout << "bài tập 3 " << endl;
    double grade1;
    double grade2;
    double total;
    double average;
    grade1= 85.5;
    grade2 = 97.0;
    total = grade1 + grade2;
    average = total/2.0;
    cout << " giá trị trung bình là: " << average << endl;

    grade1= 85.5;
    grade2 = 97.0;
    total = grade1 + grade2;
    average = total/2.0;
    cout << " giá trị trung bình là: " << average << endl;

    // bài tập 4
    cout << "bài tập 4" << endl;

    double chieuDai = 27.5;
    double chieuRong = 13.6;
    cout << "Chiều dài " << chieuDai << endl
         << "Chiều rộng " << chieuDai << endl;
    cout << "tổng diện tích hình chũ nhật là:" << chieuDai*chieuRong << endl;

    //bài tập 5
    cout << "bài tập 5" << endl;
    double banKinh = 8.5;
    float Pi = 3.14;
    cout << "tổng diện tích hình tròn:" << banKinh*2*Pi << endl;

    // bài tập 6
    cout << "bài tập 6" << endl;
    int n = 100;
    cout << "(n/2)*(n+1)=" << (n/2)*(n+1) << endl;

    // bài tập 7
    cout << "bài tập 7" << endl;
    cout << "|" << setw(10) << fixed << setprecision(3) << 25.67 << "|";

    // bài tập 8
    cout << "bài tập 8" << endl;
    

    return 0;
 }