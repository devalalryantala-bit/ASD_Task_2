#include "list.h"

void insertAfter(List &L, address Prec, address P) {
    if (Prec != nullptr) {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteFirst(List &L, address &P) {
    if (first(L) != nullptr) {
        P = first(L);
        first(L) = next(first(L));
        next(P) = nullptr;
    } else {
        P = nullptr;
    }
}

void deleteLast(List &L, address &P) {
    if (first(L) != nullptr) {
        if (next(first(L)) == nullptr) {
            P = first(L);
            first(L) = nullptr;
        } else {
            address Q = first(L);
            while (next(next(Q)) != nullptr) {
                Q = next(Q);
            }
            P = next(Q);
            next(Q) = nullptr;
        }
    } else {
        P = nullptr;
    }
}