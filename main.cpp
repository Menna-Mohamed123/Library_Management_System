#include<bits/stdc++.h>
#include "Library.h"
using namespace std;
#define S string
#define nl "\n"
# define ll long long
#define speed ios_base::sync_with_stdio(false) , cin.tie(NULL) , cout.tie(NULL);

int main() {
  speed

      Library myLibrary;

      myLibrary.addBook(103, "Data Structures in C++");
      myLibrary.addBook(101, "Algorithms and Complexity");
      myLibrary.addBook(102, "Clean Code");

      myLibrary.printAllBooksSorted();

      myLibrary.borrowBook(101, "Ahmed");
      myLibrary.borrowBook(101, "Mohamed");
      myLibrary.borrowBook(101, "Sara");

      myLibrary.returnBook(101);
      myLibrary.returnBook(101);


    return 0;
}