#include <iostream>
using namespace std;

int main(){
    int nBilangan;
    string cStatus;
    srand(time(0));
    nBilangan = rand() % 10;
    cout << "Bilangannya adalah = " << nBilangan << endl;
}