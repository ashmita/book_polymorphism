/*
    Program : Implementation of Class, Object and Inheritence, Novel.h
    Author  : Ashmita Kunwar
    Date    : 3/27/2015
*/
#include<iostream>
using namespace std;
#include "Book.h"

class Novel:public Book
{
    private :
            string genre;
            string agegroup;
            int bookRating;
            bool isHardCover;


    public :
            Novel(string, string, int, bool, string , int , Author , int );
            string getGenre();
            string getAgeGroup();
            string getIsHardCover();
            void setBookRating(int rating_Book);
            int getBookRating();
            string toString();
            float getValue();
};

