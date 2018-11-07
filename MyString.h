//
// Created by Computer on 07.11.2018.
//

#ifndef MYSTRING_MYSTRING_H
#define MYSTRING_MYSTRING_H


#include <ostream>

class MyString {
public:
    char* str;
    int size;

    explicit MyString(const char *);

    MyString(char, int);

    MyString(const MyString&);

    virtual ~MyString();

    MyString& append(const MyString&);

    MyString& append(const char*);

    MyString& operator=(const MyString&);

    friend std::ostream &operator<<(std::ostream &os, const MyString &string);
};


#endif //MYSTRING_MYSTRING_H
