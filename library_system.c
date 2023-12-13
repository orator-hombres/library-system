// library_system.c

#include <stdio.h>
#include "book.h"
#include "patron.h"
#include "transaction.h"

int main() {
    // Create books
    struct Book book1, book2;
    initializeBook(&book1, 101, "Introduction to C", "John Doe");
    initializeBook(&book2, 102, "Data Structures in C", "Jane Smith");

    // Create patrons
    struct Patron patron1, patron2;
    initializePatron(&patron1, 201, "Alice");
    initializePatron(&patron2, 202, "Bob");

    // Create transactions
    struct Transaction transaction1, transaction2;
    initializeTransaction(&transaction1, 1001, &book1, &patron1);
    initializeTransaction(&transaction2, 1002, &book2, &patron2);

    // Display information
    printf("Transaction Information:\n");
    displayTransactionInfo(&transaction1);
    printf("\n");
    displayTransactionInfo(&transaction2);

    return 0;
}
