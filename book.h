// book.h

#ifndef BOOK_H
#define BOOK_H

struct Book {
    int bookId;
    char title[100];
    char author[100];
};

void initializeBook(struct Book* book, int bookId, const char* title, const char* author);
void displayBookInfo(const struct Book* book);

#endif
