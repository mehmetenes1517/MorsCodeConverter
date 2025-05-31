#ifndef MESSAGE_H
#define MESSAGE_H

#include"Mors.hpp"
#include<iostream>

class Message: public Mors{
    public:
        std::string convert2text(std::string message);
        std::string convert2mors(std::string message);
};

#endif