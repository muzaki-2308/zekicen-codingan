#include <iostream>
using namespace std;

struct Node {
    int NilaiUTS;
    int NilaiUAS;
    int N1, N2;
};

Node *P, *Q;

int main() {
    // Alokasi memori
    P = new Node;
    Q = new Node;

    // Pengisian nilai
    P->N1 = 99;
    Q->N2 = 78;

    // Menampilkan hasil
    cout << "Isi Variabel P = " << P->N1 << endl;
    cout << "Isi Variabel Q = " << Q->N2 << endl;

    cin.get();
}