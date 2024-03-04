#include <iostream>
using namespace std;

//Contoh simple if

int main(){
    int nBilangan;
    srand(time(0));
    nBilangan = rand() % 10;
    cout << "Nilai awal = " << nBilangan << endl;
}