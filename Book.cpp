/*
Program : Implementation of Class, Object and Inheritence, Book.h
Author  : Ashmita Kunwar
Date    : 3/27/2015
*/

#include<iostream>
using namespace std;
#include "Book.h"


    string Book:: getName()
             {
                 return name;
             }

     Author Book:: getauthor()
             {
                 return author;

             }

    void Book:: setPrice (int p )
          {
              price = p;
          }
    int Book:: getPrice()
           {
               return price;
           }

    void Book:: setQuantity (int q )
          {
              quantity = q;
          }

    int  Book:: getQuantity()
           {
               return quantity;
           }






