#include <iostream>
using namespace std;

int main(){
    //siswa mempunyai 2 nilai yaitu matematika dan fisika
    //kemudian dihitung reratanya, jika rerata lebih dari 60
    //maka dinyatakan lulus, atau setidaknya nilai matematika
    //lebih dari 70 dan jika tidak keduanya maka
    //dinyatakan tidak lulus

    int nNilaiMatematika, nNilaiFisika, nRerata;
    string cStatus;

    cout << "Masukkan nilai matematika = " << endl;
    cin >> nNilaiMatematika;
    cout << "Masukkan nilai fisika = " << endl;
    cin >> nNilaiFisika;

    nRerata = (nNilaiMatematika + nNilaiFisika) / 2;

    if (nRerata > 60 || nNilaiMatematika > 70){
        cStatus = "Lulus";
    }
    else {
        cStatus = "Tidak Lulus";
    }

    cout << "Anda dinyatakan : " << cStatus;
    return 0;
}