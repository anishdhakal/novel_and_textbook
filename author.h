using namespace std;
# ifndef AUTHOR_H
# define AUTHOR_H

class Author{
private:
    string name;
    string email;
    char gender;
public:
    Author();
    Author(string, char, string);
    string getEmail();
    void setEmail(string);
    string getName();
    char getGender();
    string toString();

};
# endif
