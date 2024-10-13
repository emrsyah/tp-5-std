#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(p) p->next
#define info(P) P->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
  infotype info;
  address next;
};

struct List {
  address first;
};

void createList_103012300339(List &L);
address allocate_103012300339(infotype x);
void insertLast_103012300339(List &L, address P);
void show_103012300339(List L);
address findMin_103012300339(List L);
void insertMiddle_103012300339(List &L, int val);
int selectMenu_103012300339();
void tambahDataMenu_103012300339(List &L);


#endif // SLL_H_INCLUDED
