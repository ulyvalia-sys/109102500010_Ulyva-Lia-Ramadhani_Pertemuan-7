// // #include <iostream>
// // using namespace std;

// // // 1. Pendeklarasian Tipe Data Stack Array (Bagian 7.6 Latihan 1)
// // typedef int infotype;

// // struct Stack {
// //     infotype info[20];
// //     int top;
// // };

// // // 2. Primitif & Operasi Stack (Bagian 7.5 & 7.6)
// // void createStack(Stack &S) {
// //     S.top = 0; // Stack kosong ditandai dengan top = 0 (indeks 1 s/d 20)
// // }

// // bool isEmpty(Stack S) {
// //     return (S.top == 0);
// // }

// // bool isFull(Stack S) {
// //     return (S.top == 20);
// // }

// // // Operasi Push
// // void push(Stack &S, infotype x) {
// //     if (!isFull(S)) {
// //         S.top = S.top + 1;
// //         S.info[S.top] = x;
// //     } else {
// //         cout << "Stack Penuh!" << endl;
// //     }
// // }

// // // Operasi Pop
// // infotype pop(Stack &S) {
// //     infotype temp = -1;
// //     if (!isEmpty(S)) {
// //         temp = S.info[S.top];
// //         S.top = S.top - 1;
// //     }
// //     return temp;
// // }

// // // Menampilkan isi Stack dari posisi TOP ke bawah
// // void printInfo(Stack S) {
// //     cout << "[TOP] ";
// //     for (int i = S.top; i >= 1; i--) {
// //         cout << S.info[i] << " ";
// //     }
// //     cout << endl;
// // }

// // // Membalik urutan elemen di dalam Stack
// // void balikStack(Stack &S) {
// //     Stack temp;
// //     createStack(temp);

// //     while (!isEmpty(S)) {
// //         push(temp, pop(S));
// //     }
// //     S = temp;
// // }

// // // 3. Program Utama (Sesuai Gambar 7-12 pada Modul)
// // int main() {
// //     cout << "Hello world!" << endl;
// //     Stack S;
// //     createStack(S);

// //     push(S, 3);
// //     push(S, 4);
// //     push(S, 8);
// //     pop(S);
// //     push(S, 2);
// //     push(S, 3);
// //     pop(S);
// //     push(S, 9);

// //     printInfo(S);

// //     cout << "balik stack" << endl;
// //     balikStack(S);
// //     printInfo(S);

// //     return 0;
// // }

// #include <iostream>
// #define Nil NULL

// using namespace std;

// // 1. Pendeklarasian Tipe Data Stack (Bagian 7.2)
// typedef int infotype;
// typedef struct elmStack *address;

// struct elmStack {
//     infotype info;
//     address next;
// };

// struct stack {
//     address Top;
// };

// // 2. Fungsi Primitif & Operasi Stack (Bagian 7.3 & 7.4)
// void createStack(stack &S) {
//     S.Top = Nil;
// }

// bool isEmpty(stack S) {
//     return (S.Top == Nil);
// }

// // Alokasi pembuatan elemen baru
// address createElm(infotype X) {
//     address P = new elmStack;
//     P->info = X;
//     P->next = Nil;
//     return P;
// }

// // Operasi Push (Menyisipkan elemen di posisi Top)
// void push(stack &S, address P) {
//     P->next = S.Top;
//     S.Top = P;
// }

// // Operasi Pop (Mengambil elemen dari posisi Top)
// address pop(stack &S) {
//     address P = Nil;
//     if (!isEmpty(S)) {
//         P = S.Top;
//         S.Top = (S.Top)->next;
//         P->next = Nil;
//     }
//     return P;
// }

// // Menampilkan isi Stack
// void printInfo(stack S) {
//     cout << "[TOP] ";
//     address P = S.Top;
//     while (P != Nil) {
//         cout << P->info << " ";
//         P = P->next;
//     }
//     cout << endl;
// }

// // 3. Program Utama
// int main() {
//     stack S;
//     createStack(S);

//     // Menyisipkan elemen ke dalam stack
//     push(S, createElm(10));
//     push(S, createElm(20));
//     push(S, createElm(30));

//     cout << "Isi Stack setelah Push 10, 20, 30:" << endl;
//     printInfo(S);

//     // Mengambil elemen paling atas (Pop)
//     address P = pop(S);
//     if (P != Nil) {
//         cout << "\nElemen yang di-pop: " << P->info << endl;
//         delete P; // Dealokasi memori
//     }

//     cout << "\nIsi Stack setelah Pop:" << endl;
//     printInfo(S);

//     return 0;
// }