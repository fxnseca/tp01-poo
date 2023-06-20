#include <iostream>
#include "pessoa.h"

using namespace std;

//construtor
Pessoa::Pessoa(string login, string password) : 
login(login), password(password){};

Pessoa:: ~Pessoa(){};

string Pessoa::get_login() const { return login; }
void Pessoa::set_login(string login) { 
    this->login = login;
}

string Pessoa::get_password() const { return password; }
void Pessoa::set_password(string password) { 
    this->password = password;
}