/*
    Author: Anish Dhakal
    Program: Interactive OOP of Class Author and Book and linking both.
    Date: 03/20/2015
*/

#include <iostream>
#include "novel.h"
#include "textBook.h"

using namespace std;

int main()
{
    string authorName, emailAddress, bookName, genre, ageGroup, publisher, subject, level;
    int bookPrice, bookQuantity,edition;
    char gender;
    bool isHardCover;
    int choice;

    cout<<"Enter the name of author"<<endl;
    getline(cin,authorName);

    cout<<"Enter the email of author"<<endl;
    cin >> emailAddress;

    cout<<"Enter the gender of author (M/F)"<<endl;
    cin >>gender;

    cout<<"Press 0 for Novel"<<"\n"<<"Press 1 for Text Book"<<endl;
    cin>> choice;
    Author author(authorName,gender,emailAddress);
    if (choice==0)
    {
       cout << "Enter novels name"<<endl;
        cin >> bookName;

        cout << "Enter novel's genre: "<<endl;
        cin >> genre;

        cout << "Enter novel's age group: "<<endl;
        cin>>ageGroup;

        cout << "Enter book price: "<<endl;
        cin >> bookPrice;

        cout << "Enter book's quantity: "<<endl;
        cin >> bookQuantity;
        cin.get();
        cout << "Enter novel's publisher: "<<endl;
        getline(cin,publisher);
        cout << "Enter true if it is hard cover"<<endl;
        cin >> isHardCover;

        Novel newNovel(bookName,author,bookPrice,bookQuantity,genre,ageGroup,publisher,isHardCover);
        cout << newNovel.toString();
        cout << endl;
    }
    else
    {
        cout << "Enter subject of the book: "<<endl;
        getline(cin,subject);
        cout << "Enter class level: "<<endl;
        getline(cin,level);
        cout << "Enter book price: "<<endl;
        cin >> bookPrice;
        cout << "Enter book's quantity: "<<endl;
        cin >> bookQuantity;
        cout << "Enter edition of the book: "<<endl;
        cin>> edition;
        cout << "Enter publisher of the text book: "<<endl;
        getline(cin,publisher);


        cout <<"This is for textbook" <<endl;
        textBook newText(bookName,author,bookPrice,bookQuantity,subject,level,edition,publisher);
        cout << newText.toString()<<endl;
    }

    /*Author newAuthor(authorName, gender, emailAddress);
    Book newBook(bookName,newAuthor,bookPrice,bookQuantity);
    cout << newBook.toString();*/
}
