#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    float number1, number2, number3, result;
    string shape;

    //input nilai
    cout << "Luas bangun datar apa yang kamu cari: ";
    cin >> shape;
    
    //persegi panjang
    if (shape == "persegi panjang"){
        cout << "masukkan panjangnya: ";
        cin >> number1;
        cout << "masuukkan lebarnya: ";
        cin >> number2;
        //output
        cout << shape << " dengan panjangnya " << number1 << " dan lebarnya " << number2 << endl;
        //operasi luas
        result = number1 * number2;
        cout << "luasnya = " << setprecision(4) << result;
    }

    //persegi
    if (shape == "persegi"){
        cout << "masukkan panjang sisinya: ";
        cin >> number1;
        //output
        cout << shape << " dengan panjang sisinya " << number1 << endl;
        //operasi luas
        result = pow(number1, 2);
        cout << "luasnya = " << setprecision(4) << result;

    }

    //segitiga
    else if(shape == "segitiga"){
        cout << "masukkan tingginya: ";
        cin >> number1;
        cout << "masuukkan alasnya: ";
        cin >> number2;
        //output
        cout << shape << " dengan tingginya " << number1 << " dan alasnya " << number2 << endl;
        //operasi luas
        result = (number1 * number2)/2;
        cout << "luasnya = " << setprecision(4) << result;
    }
    

    //layang-layang & ketupat
    else if (shape == "ketupat" || shape == "layang-layang"){
        cout << "masukkan angka d1: ";
        cin >> number1;
        cout << "masuukkan angka d2: ";
        cin >> number2;
        //output
        cout << shape << " dengan panjang d1 " << number1 << " dan panjang d2 " << number2 << endl;
        //operasi luas
        result = (number1 * number2)/2;
        cout << "luasnya = " << setprecision(4) << result;
    }

    //trapesium
    else if (shape == "trapesium" || shape == "trapesium sama kaki"){
        cout << "masukkan panjang atas: ";
        cin >> number1;
        cout << "masuukkan panjang bawah: ";
        cin >> number2;
        cout << "masukkan tingginya: ";
        cin >> number3;
        //output
        cout << shape << " dengan panjang atas " << number1 << " lalu panjang bawah " << number2 << " dan tingginya " << number3 << endl;
        //operasi luas
        result = (number1 + number2) * number3/2;
        cout << "luasnya = " << setprecision(4) << result;
    }
    
    //selain itu
    else {
        cout << "error" << endl;
    }

    
    cin.get ();
    return 0;
}
