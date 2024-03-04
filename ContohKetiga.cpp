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
}