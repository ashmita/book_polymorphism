
/*
Program : Implementation of Class, Object and Inheritence , TextBook.cpp
Author  : Ashmita Kunwar
Date    : 3/27/2015
*/

#include<iostream>
using namespace std;
#include "TextBook.h"
#include<cstdlib>


    TextBook:: TextBook(string subject, string level,string name, int price, Author author, int quantity)
        {
            this->name = name;
            this->author = author;
            this->subject=subject;
            setLevel(level);
            setQuantity(quantity);
            setPrice(price);
        }

    string TextBook:: getSubject()
        {
            return subject;
        }

    void TextBook:: setLevel(string level)
        {
            this->level=level;
        }

    string TextBook:: getLevel()
        {
            return level;
        }

    string TextBook:: toString()
        {
            char charvalue[10];
            itoa(Book::getQuantity(),charvalue,10);
             return " This is " + level  + " text book  written by " + Book::getauthor().getauthor() + " with price " + charvalue + " are available ";
        }
    float TextBook::getValue()
        {
        return getQuantity() * getPrice();
        }

