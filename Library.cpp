
#include "Library.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Library::addBook(int id, string title) {
    books[id] = Book(id, title);
    cout << "Book added successfully :   " << title << "\n";
}

void Library::borrowBook(int id, string Name) {
    if (books.count(id) == 0) {
        cout << "Error!! . Book is not existed \n";
        return;
    }

    if (!books[id].isBorrowed) {
        books[id].isBorrowed = true;
        cout << "Book is borrowed by  " << Name << "\n";
    }
    else {
        books[id].waitingList.push(Name);
        cout << "Currently , Book is borrowed . [ " << Name << " ] is added to waiting queue.\n";
    }
}

void Library::returnBook(int id) {
    if (books.count(id) == 0) {
        cout << "Error!! . Book is not existed\n";
        return;
    }

    if (!books[id].waitingList.empty()) {
        string nextUser = books[id].waitingList.front(); // find first persn
        books[id].waitingList.pop();
        cout << "The book has been returned, and automatically borrowed by: [" << nextUser << "] from waiting queue.\n";
    } else {
        books[id].isBorrowed = false;
        cout << "Book returned successfully .\n";
    }
}


bool compare (const Book& a, const Book& b) {
 return a.title < b.title;
}

void Library::printAllBooksSorted() {
    vector<Book> tempBooks;

    for (auto const& [i, j] : books) {
        tempBooks.push_back(j);
    }

    sort(tempBooks.begin(), tempBooks.end(), compare );

    cout << "\n---List of books ---" << "\n";
    for (const auto& book : tempBooks) {
        cout << "ID: " << book.id << " | Title: " << book.title
             << " | Status: " << (book.isBorrowed ? "Borrowed" : "Available") << "\n";
    }
    cout << "-------------------\n\n";
}