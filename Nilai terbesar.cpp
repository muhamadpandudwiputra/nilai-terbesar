#include <iostream>
using namespace std;

void findMax() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        int data;
        cout << "Masukkan data ke-" << i+1 << ": ";
        cin >> data;
        if (data > maxVal) {
            maxVal = data;
        }
    }

    cout << "Nilai terbesar adalah: " << maxVal << endl;
}

int main() {
    findMax();
    return 0;
}

