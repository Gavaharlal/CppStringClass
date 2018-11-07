//
// Created by Computer on 07.11.2018.
//

#include "MyString.h"

MyString::MyString(const char *inStr) {
    size = 0;
    while (inStr[size] != '\0') size++;
    str = new char[size + 1];
    for (int i = 0; i < size + 1; ++i) {
        str[i] = inStr[i];
    }
}

MyString::MyString(char c, int length) {
    size = length;
    str = new char[size + 1];
    for (int i = 0; i < size; ++i) {
        str[i] = c;
    }
    str[size] = '\0';
}

std::ostream &operator<<(std::ostream &os, const MyString &string) {
    os << string.str;
    return os;
}

MyString::~MyString() {
    delete[] str;
}

MyString& MyString::append(const MyString &app) {

    char *buffer = new char[size + app.size + 1];

    for (int i = 0; i < size; ++i) {
        buffer[i] = str[i];
    }

    for (int j = 0; j < app.size + 1; ++j) {
        buffer[size + j] = app.str[j];
    }
    delete[] str;
    str = buffer;
    size += app.size;
    return *this;
}

MyString::MyString(const MyString &original) {
    size = original.size;
    str = new char[size + 1];
    for (int i = 0; i < size + 1; ++i) {
        str[i] = original.str[i];
    }
}

MyString &MyString::operator=(const MyString& original) {
    size = original.size;
    delete[] str;
    str = new char[size + 1];
    for (int i = 0; i < size + 1; ++i) {
        str[i] = original.str[i];
    }
    return *this;
}

MyString &MyString::append(const char *app) {
    MyString myString(app);
    return append(myString);
}
