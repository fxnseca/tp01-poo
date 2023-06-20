#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa {
    string login;
    string password;
public:
    Pessoa(string = " ", string = 0);
    ~Pessoa(); //destrutor

    string get_login() const;
    void set_login(string);
    
    string get_password() const;
    void set_password(string);
}; 

#endif
