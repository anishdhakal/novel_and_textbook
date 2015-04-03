# include "book.h"
# ifndef NOVEL_H
# define NOVEL_H


using namespace std;
class Novel:public Book{
private:
    string genre;
    string isHardCover;
    string ageGroup;
    string publisher;
public:
    Novel(string  ,Author ,int , int ,string, string, string,bool);
    string getGenre();
    void setIsHardCover(bool);
    string getIsHardCover();

    void setAgeGroup(string);
    string getAgeGroup();

    void setPublisher(string );
    string getPublisher();
    string toString();
    };
# endif
