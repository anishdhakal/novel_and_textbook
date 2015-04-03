# include <iostream>
# include "textBook.h"

using namespace std;

textBook::textBook(string bookName,Author bookAuthor,int bookPrice,int bookQuantity,
                string bookSubject,string bookLevel,int bookEdition,string bookPublisher):
                Book(bookName,bookAuthor, bookPrice,bookQuantity){
    subject= bookSubject;
    level= bookLevel;
    edition = bookEdition;
    publisher=bookPublisher;
}

string textBook::getSubject(){
return subject;
}
string textBook::getLevel(){
return level;
}

int textBook::getEdition(){
return edition;
}
string textBook::getPublisher(){
return publisher;
}
string textBook::toString(){
    return toString() + " \nThis is textBook for class: " + getLevel()+ " published by : " + getPublisher() + " subject is: " + getSubject();
    }
