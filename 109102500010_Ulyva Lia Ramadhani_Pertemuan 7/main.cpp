#include "stack.h"

void menuSoal1() {
    Stack S;
    createStack(S);
    int pilihan, x;

    do {
        cout << "\n=== MENU STACK ARRAY ===" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Tampilkan" << endl;
        cout << "4. Balik Stack" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan nilai: ";
            cin >> x;
            if (push(S, x)) {
                cout << "Berhasil di-Push." << endl;
            } else {
                cout << "GAGAL! Stack Penuh (Maksimal 20 elemen)." << endl;
            }
        } else if (pilihan == 2) {
            if (pop(S, x)) {
                cout << "Nilai yang di-Pop: " << x << endl;
            } else {
                cout << "GAGAL! Stack Kosong." << endl;
            }
        } else if (pilihan == 3) {
            printInfo(S);
        } else if (pilihan == 4) {
            balikStack(S);
            cout << "Stack berhasil dibalik." << endl;
            printInfo(S);
        } else if (pilihan == 5) {
            cout << "Keluar dari program." << endl;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 5);
}

int main() {
    // Uji coba otomatis sesuai contoh di PDF (Opsional, bisa dihapus jika hanya ingin menu)
    /*
    Stack S; createStack(S);
    push(S, 7); push(S, 12); push(S, 5); 
    int x; pop(S, x); // pop 5
    push(S, 9); push(S, 3); 
    pop(S, x); // pop 3
    push(S, 15);
    cout << "Hasil uji PDF: "; printInfo(S); // Harusnya: 15 9 12 7
    balikStack(S);
    cout << "Setelah balik: "; printInfo(S); // Harusnya: 7 12 9 15
    */

    menuSoal1();
    return 0;
}