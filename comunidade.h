#ifndef COMUNIDADE_H
#define COMUNIDADE_H
#include <string>
#include "user.h"

using namespace std;


class comunidade
{
    
    public:

        string name;
        string desc;
        user * userhead;
        comunidade *next;
        int size;

        comunidade();
        
        
        bool vazio(); //verifica se a lista está vazia;
        string retorna_nome();//retorna o nome da comunidade;
        string retorna_desc(); //retorna a descrição da comunidade;
        string lista_usuarios();//retorna a lista de usuários de uma comunidade;
        string lista_comunidades_usuarios(const string& nome);//lista as comunidades de um usuário;
        user *retorna_usuario(const string& nome); //retorna um usuário da comunidade;
        int retorna_tamanho(); //retorna o tamanho da comunidade;
        void inserir_nome(const string& nome); //insere o nome da comunidade;
        void inserir_descricao(const string& descri); //insere a descrição da comunidade;
        void adicionar_usuario(const string& nome);//adiciona um usuário a comunidade;
        void remover_usuario(const string& nome); //remove o usuário da comunidade;
        
};


#endif