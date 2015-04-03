# include <iostream>
# include "novel.h"

using namespace std;
Novel::Novel(string bookName,Author bookAuthor,int bookPrice,int bookQuantity,
             string novelGenre,string novelAgeGroup,string novelPublisher, bool novelIsHardCover):
    Book(bookName,bookAuthor, bookPrice,bookQuantity) {
    genre=novelGenre;
    setIsHardCover(novelIsHardCover);
    setAgeGroup(novelAgeGroup);
    setPublisher(novelPublisher);
}

    string Novel:: getGenre(){
    return genre;
    }
    void Novel::setIsHardCover(bool novelIsHardCover){
    if(novelIsHardCover==1)
    isHardCover= "Yes";
    else
        isHardCover="No";
    }

    string Novel::getIsHardCover(){
    return isHardCover;
    }

    void Novel::setAgeGroup(string group){
    ageGroup=group;
    }
    string Novel::getAgeGroup(){
    return ageGroup;
    }
    void Novel::setPublisher(string pub){
    publisher=pub;
    }
    string Novel::getPublisher(){
    return publisher;
    }
    string Novel::toString(){
    return Book::toString() +  "for Age grk4oup : " + getAgeGroup() + " published by " + getPublisher() + " and genre is : " + getGenre()
    + " Hard cover : "  + getIsHardCover() ;
    }
