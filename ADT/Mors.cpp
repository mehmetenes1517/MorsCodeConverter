#include"Mors.hpp"
Mors::Mors(){

    this->map['a']=std::string(".-");
    this->map['b']=std::string("-...");
    this->map['c']=std::string("-.-.");
    this->map['d']=std::string("-..");
    this->map['e']=std::string(".");
    this->map['f']=std::string("..-.");
    this->map['g']=std::string("--.");
    this->map['h']=std::string("....");
    this->map['i']=std::string("..");
    this->map['j']=std::string(".---");
    this->map['k']=std::string("-.-");
    this->map['l']=std::string(".-..");
    this->map['m']=std::string("--");
    this->map['n']=std::string("-.");
    this->map['o']=std::string("---");
    this->map['p']=std::string(".--.");
    this->map['q']=std::string("--.-");
    this->map['r']=std::string(".-.");
    this->map['s']=std::string("...");
    this->map['t']=std::string("-");
    this->map['u']=std::string("..-");
    this->map['v']=std::string("..-");
    this->map['w']=std::string(".--");
    this->map['x']=std::string("-..-");
    this->map['y']=std::string("-.--");
    this->map['z']=std::string("--..");

    char i='A';
    while(i!=('Z'+1)){
        this->map[i]=std::string((this->map[i+(97-65)]));
        i++;
    }
}
std::string Mors::item(char key){
    return this->map[key];
}
char Mors::key(std::string item){
    char key=0;
    for(auto i: this->map){
        if(i.second==item){
            key=i.first;
            break;
        }
    }
    return key;
}