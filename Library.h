

#ifndef UNTITLED34_LIBRARY_H
#define UNTITLED34_LIBRARY_H

#include <string>
#include <unordered_map>
#include "Book.h"
using namespace std;

class Library {

        unordered_map<int, Book> books;

    public:
        void addBook(int id, string title);
        void borrowBook(int id, string Name);
        void returnBook(int id);
        void printAllBooksSorted();
    };



#endif //UNTITLED34_LIBRARY_H