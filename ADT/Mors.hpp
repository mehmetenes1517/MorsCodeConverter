#ifndef MORS_H
#define MORS_H

#include<iostream>
#include<map>

class Mors{
    public:
        Mors();
        std::string item(char key);
        char key(std::string item);
    protected:
        std::map<char,std::string> map;
};

#endif