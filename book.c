// book.c

#include <stdio.h>
#include <string.h>
#include "book.h"

void initializeBook(struct Book* book, int bookId, const char* title, const char* author) {
    book->bookId = bookId;
    strncpy(book->title, title, sizeof(book->title));
    strncpy(book->author, author, sizeof(book->author));
}

void displayBookInfo(const struct Book* book) {
    printf("Book ID: %d\n", book->bookId);
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
}
