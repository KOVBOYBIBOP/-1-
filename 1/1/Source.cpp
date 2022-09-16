#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    cout << "1." << endl;

    cout << "Svirnov Daniil Vladislavovich , 221-332" << "\n";

    cout << "2." << endl;
    unsigned int maxint = 0b00000000000000000000000000000000;
    unsigned int minint = 0b11111111111111111111111111111111;
    unsigned short maxuns = 0b0000000000000000;
    unsigned short minuns = 0b1111111111111111;
    long long maxlonglong = 0b1000000000000000000000000000000000000000000000000000000000000000;
    long long minlonglong = 0b0111111111111111111111111111111111111111111111111111111111111111;
    cout << "min int=" << int(0b10000000000000000000000000000000) << ", max int= " << int(0b01111111111111111111111111111111) << " ,size of int = " << sizeof(int) << "\n";
    cout << "min unsigned int = " << maxint << ", max unsigned int= " << minint << " ,size of unsigned int= " << sizeof(unsigned int) << "\n";
    cout << "min short = " << short(0b1000000000000000) << ", max short= " << short(0b0111111111111111) << " ,size of short= " << sizeof(short) << "\n";
    cout << "min unsigned short = " << maxuns << ", max unsigned short= " << minuns << " ,size of unsigned short= " << sizeof(unsigned short) << "\n";
    cout << "min long = " << long(0b10000000000000000000000000000000) << ", max long= " << long(0b01111111111111111111111111111111) << " ,size of long= " << sizeof(long) << "\n";
    cout << "min  long long = " << maxlonglong << ", max  long long= " << minlonglong << " ,size of  long long= " << sizeof(long long) << "\n";
    cout << "min  double = " << (-1) * double(0b1000000000000000000000000000000000000000000000000000000000000000) << ", max double= " << double(0b0111111111111111111111111111111111111111111111111111111111111111) << " ,size of  double= " << sizeof(double) << "\n";
    cout << "min char = " << (-1) * int(0b10000000) << ", max char= " << int(0b1111111) << " ,size of char= " << sizeof(char) << "\n";
    cout << "min bool = " << bool(0b00000000) << ", max bool= " << bool(0b1111111) << " ,size of bool= " << sizeof(bool) << "\n";

    cout << "3." << endl;

    int f;
    cout << "Vvedite celoe chislo:";
    cin >> f;
    cout << " V binarnom vide " << bitset<16>(int(f)) << "\n";
    cout << " V shesnadcatirichnom vide " << hex << f << endl;
    cout << "bool " << bool(f) << endl;
    cout << "double " << double(f) << endl;
    cout << "char " << char(f) << endl;

    cout << "4." << endl;
    int a;
    int b;
    cout << "Vvedite koefficients a*x = b: a= ";
    cin >> a;
    cout << " b=";
    cin >> b;
    cout << a << " * x = " << b << endl;
    cout << "x  = " << b << "/" << a << endl;
    cout << "x = " << b / a << endl;
    cout << "Otvet: " << b / a << endl;

    cout << "5." << endl;
    int x1;
    int x2;
    cout << "Vvedite coordinats otrezka na priamoy: x1= ";
    cin >> x1;
    cout << " x2=";
    cin >> x2;
    cout << "Seredina otrezka nahoditsy v tochke s koordinatoy =" << (x1 + x2) / 2;

    return 0;

}