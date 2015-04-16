/*
    Program : Implementation of Class, Object and Inheritence, Novel.cpp
    Author  : Ashmita Kunwar
    Date    : 3/27/2015
*/
#include <iostream>
using namespace std;
#include "Novel.h"

  Novel::Novel(string genre, string agegroup, int rating, bool isHardCover, string name, int price, Author author, int quantity)
        {
            this->name = name;
            this->author = author;
            this->genre=genre;
            this->agegroup=agegroup;
            setBookRating(rating);
            this->isHardCover = isHardCover;
            setPrice(price);
            setQuantity(quantity);
        }


string Novel::getGenre()
        {
             return genre;
        }


string Novel::getAgeGroup()
        {
            return agegroup;
        }


void Novel::setBookRating(int bookRating)
        {
            this->bookRating=bookRating;
        }


  int Novel::getBookRating()
        {
            return bookRating;
        }

  string Novel::getIsHardCover()
        {
            string hardCover;

            if (isHardCover == 0) {
                hardCover = "Paperback";
            }else hardCover = "Hardcover";
            return hardCover;
        }


string Novel::toString()
        {
            return " The name of this novel is " + Book::getName() + " by " + Book::getauthor().getauthor() + " and Cover type: " + getIsHardCover();
        }


float Novel::getValue()
        {
            return getQuantity() * getPrice();
        }


