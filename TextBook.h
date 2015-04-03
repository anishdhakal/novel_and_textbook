# include "book.h"

# ifndef TEXTBOOK_H
# define TEXTBOOK_H

using namespace std;
class textBook : public Book{
   private:

    string subject;
    string level;
    int edition;
    string publisher;
   public:
    textBook(string, Author,int,int,string,string,int,string);
    string getSubject();
    string getLevel();
    int getEdition();
    string getPublisher();
    string toString();


};
# endif
