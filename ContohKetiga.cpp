#include <iostream>
using namespace std;

int main(){
    int nBilanganA, nBilanganB;
    string cStatus;
    srand(time(0));
    nBilanganA = rand() % 10;
    nBilanganB = rand() % 10;
    cout << "Bilangan A adalah = " << nBilanganA << endl;
    cout << "Bilangan B adalah = " << nBilanganB << endl;
    if (nBilanganA == nBilanganB){
        cStatus = "Kedua bilangan nilainya sama";
    }
    else if (nBilanganA > nBilanganB){
        cStatus = "Bilangan A lebih besar";
    }
    else {
        cStatus = "Bilangan B lebih besar";
    }
}