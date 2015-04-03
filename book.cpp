#include<iostream>

#include "book.h"

using namespace std;

Book::Book(string bookName, Author authorName, int bookPrice)
{
    name=bookName;
    author=authorName;
    price=bookPrice;
}

Book::Book(string bookName, Author authorName, int bookPrice, int bookQuantity)
{
    name=bookName;
    author = authorName;
    price=bookPrice;
    quantity=bookQuantity;
}
string Book::getName()
{
    return name;
}

Author Book::getAuthor()
{
    return author;
}

void Book::setPrice(int bookPrice)
{
    price=bookPrice;
}

int Book::getPrice()
{
    return price;
}

void Book::setQuantity(int bookQuantity)
{
    quantity=bookQuantity;
}

int Book::getQuantity()
{
    return quantity;
}

string Book::toString()
{
    return getName() + " by " + author.toString();
}
