#include <iostream>
#include "chefe.h"

using namespace std;

//construtor
Chefe::Chefe(string login, string password) : 
login(login), password(password){};

Chefe:: ~Chefe(){};

string Chefe::get_login() const { return login; }
void Chefe::set_login(string login) { 
    this->login = login;
}

string Chefe::get_password() const { return password; }
void Chefe::set_password(string password) { 
    this->password = password;
}