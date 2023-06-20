#ifndef CHEFE_H
#define CHEFE_H
#include <string>

using namespace std;

class Chefe {  //podem ser atributos estaticos
    string login;
    string password;
public:
    Chefe(string = " ", string = 0);
    ~Chefe(); //destrutor

    string get_login() const;
    void set_login(string);
    
    string get_password() const;
    void set_password(string);
}; 

#endif
