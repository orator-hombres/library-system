// transaction.c

#include <stdio.h>
#include "transaction.h"

void initializeTransaction(struct Transaction* transaction, int transactionId, const struct Book* book, const struct Patron* patron) {
    transaction->transactionId = transactionId;
    transaction->book = *book;
    transaction->patron = *patron;
}

void displayTransactionInfo(const struct Transaction* transaction) {
    printf("Transaction ID: %d\n", transaction->transactionId);
    displayBookInfo(&transaction->book);
    displayPatronInfo(&transaction->patron);
}
