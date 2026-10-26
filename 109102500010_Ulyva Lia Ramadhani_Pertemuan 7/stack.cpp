#include "stack.h"

void createStack(Stack &S) {
    S.Top = 0; // Top = 0 berarti kosong
}

bool isEmpty(Stack S) {
    return (S.Top == 0);
}

bool isFull(Stack S) {
    return (S.Top == 20);
}

bool push(Stack &S, int x) {
    if (isFull(S)) {
        return false; // Gagal, tidak mengubah isi/Top
    }
    S.Top++;
    S.info[S.Top] = x;
    return true;
}

bool pop(Stack &S, int &x) {
    if (isEmpty(S)) {
        return false; // Gagal, tidak mengubah isi/Top
    }
    x = S.info[S.Top];
    S.Top--;
    return true;
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong!" << endl;
        return;
    }
    cout << "TOP: ";
    for (int i = S.Top; i >= 1; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    if (isEmpty(S)) return;
    
    Stack temp;
    createStack(temp);
    int x;
    
    // Pindahkan semua elemen ke stack bantu (ini membalik urutannya)
    while (!isEmpty(S)) {
        pop(S, x);
        push(temp, x);
    }
    
    // Karena hanya boleh 1 stack bantu, kita assign langsung struct-nya
    // agar urutan terbalik di temp menjadi urutan baru di S
    S = temp; 
}