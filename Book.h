

#ifndef UNTITLED34_BOOK_H
#define UNTITLED34_BOOK_H

#include <string>
#include <queue>
using namespace std;

class Book {

    public:
        int id;
        string title;
        bool isBorrowed;
        queue<string> waitingList;

        Book(int bookId, string bookTitle);
        Book();

};


#endif //UNTITLED34_BOOK_H