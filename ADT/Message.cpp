#include"Message.hpp"
std::string Message::convert2mors(std::string message){
    std::string mors_message=std::string("");
    for(int i=0;i<message.size();i++){
        
        if(message.at(i)==' '){
            mors_message.push_back('/');
        }else{   
            std::string char_mors=this->item(message.at(i));
            for(int i=0;i<char_mors.size();i++){
                mors_message.push_back(char_mors.at(i));
            }
        }
        mors_message.push_back(' ');
    }
    return mors_message;
}
std::string Message::convert2text(std::string message){
    std::string full_text("");
    std::string letter_mors("");
    for (int i = 0; i < message.size(); i++)
    {
        
        if(message.at(i)==' '){
            char letter_text=this->key(letter_mors);
            full_text.push_back(letter_text);
            letter_mors.clear();
        }else if(message.at(i)=='/'){
            full_text.push_back(' ');
        }else{
            letter_mors.push_back(message.at(i));
        }
    }
    return full_text;
}
