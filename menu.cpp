#include <iostream>
#include <string>
#include <vector>
#include "pessoa.h"
#include "chefe.h"
#include "funcionario.h"

using namespace std;

void menu_chefe(){
    cout << "********************************" << endl;
    cout << "*          MENU DO CHEFE       *" << endl;
    cout << "********************************" << endl;
    
    int choice;

    //1. Fazer login ou sair do sistema
    cout << "1. CADASTRAR FUNCIONARIO" << endl;
    cout << "2. LISTAR FUNCIONARIOS CADASTRADOS" << endl;
    cout << "3. CHECAR PONTO" << endl;
    cout << "4. CALCULO DO SALARIO" << endl;
    cout << "5. RETORNE AO MENU INICIAL" << endl;
    cout << "********************************\n" << endl;
    cout << "INFORME A OPÇÃO:";
    cin >> choice;

    while (choice != 1 && choice !=2 && choice !=3 &&choice != 4 && choice !=5){
            cout << "OPCAO INVALIDA. INFORME SUA ESCOLHA: ";
            cin >> choice;
            cout << "********************************\n" << endl;
    }
        
    switch (choice){
        case 1: 
            //CADASTRAR FUNCIONARIO
        break;
        case 2: 
            //LISTAR FUNCIONARIO
        break;
        case 3: 
            //CHECAR PONTO
        break;
        case 4: 
            //CALCULAR SALARIO
        break;
        case 5: 
           
        break;
    }
}

void menu_inicial(){
    cout << "********************************" << endl;
    cout << "*         MENU INICIAL         *" << endl;
    cout << "********************************" << endl;
    
    int choice;

    //1. Fazer login ou sair do sistema
    cout << "1. FAZER LOGIN" << endl;
    cout << "2. SAIR DO SISTEMA" << endl;
    cout << "********************************\n" << endl;
    cout << "INFORME A OPÇÃO:";
    cin >> choice;

    while (choice != 1 && choice != 2){
        cout << "OPÇÃO INVALIDA. INFORME NOVAMENTE A OPÇÃO:";
        cin >> choice;
        cout << "********************************" << endl;
    }

    switch (choice){
    case 1: //fazer login
        // cout << "LOGIN:";
        // //cin >> ;
        // cout << "SENHA:";
        // //cin >> ;
        //fazer verificação de caracteres e outras coisas
        menu_chefe();
        
        break;
    
    case 2: //sair do sistema
        cout << "\n********************************" << endl;
        cout << "*      SISTEMA ENCERRADO!      *" << endl;
        cout << "********************************\n" << endl;
        break;
    }
}

void menu_funcionario(){
    cout << "********************************" << endl;
    cout << "*      MENU DO FUNCIONARIO     *" << endl;
    cout << "********************************" << endl;
    
    int choice;

    cout << "1. CADASTRAR PONTO" << endl;
    cout << "2. EXIBIR SALARIO" << endl;
    cout << "3. CADASTRAR VENDA" << endl;
    cout << "4. LISTAR VENDAS" << endl;
    cout << "5. RETORNE AO MENU INICIAL" << endl;
    cout << "********************************\n" << endl;
    cout << "INFORME A OPÇÃO:";
    cin >> choice;

    while (choice != 1 && choice !=2 && choice !=3 &&choice != 4 && choice !=5){
            cout << "OPCAO INVALIDA. INFORME SUA ESCOLHA: ";
            cin >> choice;
            cout << "********************************\n" << endl;
    }
        
    switch (choice){
        case 1: 
            //CADASTRAR PONTO
        break;
        case 2: 
            //EXIBIR SALARIO
        break;
        case 3: 
            //CADASTRAR VENDA
        break;
        case 4: 
            //LISTAR VENDAS
        break;
        case 5: 
           
        break;
    }
}
