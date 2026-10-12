#include "list.h"

void insertAfter(List &L, address Prec, address P) {
    if (Prec != NULL) {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteFirst(List &L, address &P) {
    if (first(L) != NULL) {
        P = first(L);
        first(L) = next(first(L));
        next(P) = NULL;
    } else {
        P = NULL;
    }
}

void deleteLast(List &L, address &P) {
    if (first(L) != NULL) {
        if (next(first(L)) == NULL) {
            P = first(L);
            first(L) = NULL;
        } else {
            address Q = first(L);
            while (next(next(Q)) != NULL) {
                Q = next(Q);
            }
            P = next(Q);
            next(Q) = NULL;
        }
    } else {
        P = NULL;
    }
}

