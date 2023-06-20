#include <iostream>
#include "pessoa.h"
#include "funcionario.h"

using namespace std;

Funcionario::Funcionario(string login, string password, string nome, string funcao, double salario_horas, string tipo_funcionario) :
Pessoa(login, password), nome(nome), funcao(funcao), salario_horas(salario_horas), tipo_funcionario(tipo_funcionario){}
Funcionario::~Funcionario(){}

// //Funcionario::Funcionario(string login, string password, string nome, string funcao, double salario_horas, string tipo_funcionario): Pessoa(login, password), nome(nome), funcao(funcao), salario_horas(salario_horas), tipo_funcionario(tipo_funcionario) {}
// // Funcionario::~Funcionario(){}