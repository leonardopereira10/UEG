#include "alunos.h"
//Construtor Default
Alunos::Alunos(){
    this->matricula = nullptr;
    this->CPF = nullptr;
    this->nome = nullptr;
    this->endereco = nullptr;
    this->setor = nullptr;
    this->cidade = nullptr;
    this->estado = nullptr;
    this->celular = nullptr;
    this->email = nullptr;
    this->ano = 0;
}

//Construtor com parâmetros
Alunos::Alunos (QString a_matricula, QString a_CPF, QString a_nome, QString a_endereco,
                QString a_setor, QString a_cidade, QString a_estado, QString a_celular,
                QString a_email, int a_ano){

    this->matricula = a_matricula;
    this->CPF = a_CPF;
    this->nome = a_nome;
    this->endereco = a_endereco;
    this->setor = a_setor;
    this->cidade = a_cidade;
    this->estado = a_estado;
    this->celular = a_celular;
    this->email = a_email;
    this->ano = a_ano;
}
