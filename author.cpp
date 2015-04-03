#include<iostream>
#include "author.h"

using namespace std;

Author::Author(string authorName, char sex, string mailAddress)
{
    name=authorName;
    gender=sex;
    email=mailAddress;
}
Author::Author()
{
    //adgasdf
}
void Author::setEmail(string mailAddress)
{
    email=mailAddress;
}
string Author::getEmail()
{
    return email;
}
string Author::getName()
{
    return name;
}
char Author::getGender()
{
    return gender;
}
string Author::toString()
{
    return getName() + " at " + getEmail();
}
