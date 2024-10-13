#include "sll.h"

void createList_103012300339(List &L){
    first(L) = NULL;
};
address allocate_103012300339(infotype x){
  address p = new elmlist;
  info(p) = x;
  next(p) = NULL;
  return p;
  };


void insertLast_103012300339(List &L, address P){
  if (first(L) == NULL){
    first(L) = P;
    return;
  }
  address q = first(L);
  while (next(q) != NULL){
    q = next(q);
  };
  next(q) = P;
};

void show_103012300339(List L){
  address q = first(L);
  while (q != NULL){
    cout << info(q) << endl;
    q = next(q);
  };
};

address findMin_103012300339(List L){
  //Dengan asumsi list tidak kosong, fungsi mengembalikan data terkecil dari list.
  address sm = first(L);
  address p = next(first(L));
  while (p != NULL){
    if (info(p) < info(sm)){
        sm = p;
    }
    p = next(p);
  }
  return sm;
}

void insertMiddle_103012300339(List &L, int val){
  //I.S. Panjang list adalah ganjil.
//F.S. Menambahkan data bilangan ke tengah list.

  // cari panjang list
  int n = 0;
  address q = first(L);
  while (q != NULL){
    n += 1;
    q = next(q);
  };

  // insert ke tengah
  int cur = 1;
  address t = first(L);
  while (cur != (n/2)){
      cur += 1;
      t = next(t);
  }
  address tmp = allocate(val);
  next(tmp) = next(t);
  next(t) = tmp;
}

int selectMenu_103012300339(){
  cout << "======MENU======" << endl;
  cout << "1. Menambahkan N data baru" << endl;
  cout << "2. Menampilkan semua data" << endl;
  cout << "3. Mencari alamat bilangan terkecil" << endl;
  cout << "4. Menambahkan bilangan ke tengah list" << endl;
  cout << "0. Exit" << endl;
  cout << "Masukkan menu: ";
  int menu;
  cin >> menu;
  cout << endl;
  return menu;
}

void tambahDataMenu_103012300339(List &L){
  cout << "Jumlah data yang akan ditambahkan: ";
  int n;
  cin >> n;
  cout<<endl;
  int ipt;
  for(int i=1; i<=n; i++){
    cout << "Masukkan data baru: ";
    cin >> ipt;
    cout <<endl;
    address ptr = allocate(ipt);
    insertLast(L, ptr);
  }
  cout<<endl;
  return;
}
