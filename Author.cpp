/*
Program : Author.cpp, From class AuthorBook Class
*/

#include<iostream>
#include "Author.h"
using namespace std;


    Author::Author(string author,char gender, string email  )
    {
        this->author= author;
        this->gender= gender;
        setEmail(email);


    }

    Author::Author(){
    }

    string  Author::getauthor()
    {
        return author;

    }
    char Author :: getGender()
    {
        return gender;

    }
    void Author :: setEmail(string e)
    {
        this->email= email;
    }
    string Author :: tostring()
    {
        return author + " at " + email;
    }



