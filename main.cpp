#include <iostream>
#include "MyString.h"


using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    const int NUMBER = 1000;
    MyString str("app");
    MyString str1("lol");
    MyString str2("lol");
    MyString str3("lol");
    for (int i = 0; i < NUMBER; ++i) {
        str1.append(str);
        str.append("al");
        str2 = str;
        str3 = MyString(str2);
    }
    cout << "heh";
    system("pause");
    return 0;
}