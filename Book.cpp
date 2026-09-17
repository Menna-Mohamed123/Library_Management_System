

#include "Book.h"
using namespace std;

Book::Book(int bookId, string bookTitle) {
    id = bookId;
    title = bookTitle;
    isBorrowed = false;
}

Book::Book() {
    id = 0;
    title = "";
    isBorrowed = false;
}