// patron.h

#ifndef PATRON_H
#define PATRON_H

struct Patron {
    int patronId;
    char name[100];
};

void initializePatron(struct Patron* patron, int patronId, const char* name);
void displayPatronInfo(const struct Patron* patron);

#endif
