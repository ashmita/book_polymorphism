/*
    Program : Implementation of Class, Object and Inheritence, Book.h
    Author  : Ashmita Kunwar
    Date    : 3/27/2015
*/

#include<iostream>
#include "Author.h"
using namespace std;
#ifndef BOOK_H
#define BOOK_H


class Book
{
    protected:
        string name ;
         Author author;

    private:

         int quantity;
         int price;

    public:

          string getName();
          Author getauthor();
          void setPrice (int price );
          int getPrice();
          void setQuantity (int quantity );
          int getQuantity();
           virtual string toString() = 0;

};
#endif









