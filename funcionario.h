#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "pessoa.h"

using namespace std;

class Funcionario: public Pessoa{
    string nome;
    string funcao;
    double salario_horas;
    string tipo_funcionario;

public:
    Funcionario(string = "", string = "", double = 0.0, string = "", string = "");
    ~Funcionario();

//     string get_nomeFuncionario() const;
//     void set_nomeFuncionario(string);

//     string get_funcaoFuncionario() const;
//     void set_funcaoFuncionario(string);

//     double get_shFuncionario() const;
//     void set_shFuncionario(double);

//     string get_tipoFuncionario() const;
//     void set_tipoFuncionario(string);
};

#endif