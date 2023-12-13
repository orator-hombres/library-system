// transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "book.h"
#include "patron.h"

struct Transaction {
    int transactionId;
    struct Book book;
    struct Patron patron;
};

void initializeTransaction(struct Transaction* transaction, int transactionId, const struct Book* book, const struct Patron* patron);
void displayTransactionInfo(const struct Transaction* transaction);

#endif
