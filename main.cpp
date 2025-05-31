#include<iostream>
#include"ADT/Message.hpp"


int main(){

    Message message_converter;

    std::string input;
    while(input!=std::string("---")){
        std::cout<<"\nMessage : ";
        std::cin>>input;

        std::cout<<"\nMors Message : "<<message_converter.convert2mors(input);
    }
    

    return 0;
}

