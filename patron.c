// patron.c

#include <stdio.h>
#include <string.h>
#include "patron.h"

void initializePatron(struct Patron* patron, int patronId, const char* name) {
    patron->patronId = patronId;
    strncpy(patron->name, name, sizeof(patron->name));
}

void displayPatronInfo(const struct Patron* patron) {
    printf("Patron ID: %d\n", patron->patronId);
    printf("Name: %s\n", patron->name);
}
