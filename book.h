#include "author.h"
# ifndef BOOK_H
# define BOOK_H

using namespace std;

class Book{
private:
    string name;
protected:
    int price;
    int quantity;
    Author author;
public:
    Book(string, Author, int );
    Book(string, Author,int, int);
    void setPrice(int);
    int getPrice();
    void setQuantity(int);
    int getQuantity();
    string getName();
    Author getAuthor();
    string toString();
};
# endif
