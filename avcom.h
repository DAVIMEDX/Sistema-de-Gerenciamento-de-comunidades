#ifndef AVCOM_H
#define AVCOM_H
#include <string>
#include "comunidade.h"

using namespace std;


class avcom
{
private:
    comunidade *comhead;
    int comsize;
public:
    
    
    avcom();


    int com_size();//retorna o número de comunidades;
    comunidade *retorna_com(const string& nome);//retorna uma comunidade;
    void add_comunidade(const string& nome, const string& usuario);//adiciona uma comunidade;
    void remover_comunidade(const string& nome);//remove a comunidade da lista;
    void remover_usuario(const string& nome);//remove um usuário das comunidades que ele participa;
    bool vazia(); //se a lista de comunidades estiver vazia;
    bool usuarios_vazio();//se a lista de usuarios está vazia;
    string lista_comunidades();//retorna a lista de comunidades
    void remover_usuario_decoms(const string& nome);

};


    



#endif