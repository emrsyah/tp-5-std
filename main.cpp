#include <iostream>
#include "sll.h"

using namespace std;

int main()
{
    int PILIHAN, num;
    PILIHAN = selectMenu_103012300339();
    List L;
    createList_103012300339(L);
    while (PILIHAN != 0){
        switch(PILIHAN){
        case 1:
            tambahDataMenu_103012300339(L);
            break;

        case 2:
            show_103012300339(L);
            break;

        case 3: {
            address tmpP = findMin_103012300339(L);
            cout << "Address bilangan terkecil (" << info(tmpP) << ") adalah: " << tmpP << endl;
        }
            break;

        case  4:
            cout << "Masukkan angka untuk dimasukkan ditengah: ";
            cin >> num;
            insertMiddle_103012300339(L, num);
            show_103012300339(L);
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
        }
        PILIHAN = selectMenu_103012300339();
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
