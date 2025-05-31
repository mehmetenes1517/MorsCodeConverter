#include<iostream>
#include"ADT/Mors.hpp"
#include"ADT/Message.hpp"


int main(){

    Message message;
    
    std::string mors=message.convert2mors("Hello World");
    std::string text=message.convert2text(mors);

    std::cout<<"\n"<<mors;
    std::cout<<"\n"<<text;

    return 0;
}

