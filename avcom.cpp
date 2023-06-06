#include <iostream>
#include "avcom.h"
#include <string>


using namespace std;

avcom :: avcom(){
    comhead = nullptr;
    comsize = 0;
}

void avcom:: add_comunidade(const string& nome, const string& usuario){//adiciona uma comunidade;


    comunidade *aux = comhead;
    comunidade *novacom = new comunidade;
    
    if (comhead == nullptr)
    {
        novacom->next =nullptr;
        novacom->inserir_nome(nome);
        novacom->adicionar_usuario(usuario);
        comhead=novacom;
        comsize++;
        return;
    }
     else{
        while (aux!= nullptr)
        {
            if (aux->name == nome)
            {
            aux->adicionar_usuario(usuario);
            return;
            }
            else if(aux->next == nullptr)
            {
            aux->next = novacom;
            novacom->next = nullptr;
            novacom->inserir_nome(nome);
            novacom->adicionar_usuario(usuario);
            comsize++;
            return;
            }
            aux=aux->next;
        }
       }
}



int avcom :: com_size(){
    cout << "A quantidade de comunidades e: ";
    return  comsize;
}//retorna o número de comunidades;



comunidade *avcom :: retorna_com(const string& nome){
    
    comunidade *aux = comhead;
    while (aux!= nullptr)
    {
        if (nome == aux->name)
        {
            break;
        }
        else aux= aux->next;
        
    }
    return aux;
}//retorna uma comunidade;

bool avcom :: vazia(){
    return comsize == 0;
}

bool avcom :: usuarios_vazio(){
    
    comunidade *aux = comhead;
    if (aux->userhead == nullptr)
    {
        return true;
    }
    else
    {
        return false;  
    }
    

    
}//se a lista de usuarios está vazia;



string avcom :: lista_comunidades(){
     string a ="";
     comunidade *aux=comhead;
     while (aux!=nullptr)
     {
        a += aux->name;
        aux=aux->next;
        a += "\n";
        
     }
   cout << "Lista de comunidades:  " << endl;
   return a;
}//retorna a lista de comunidades;


void avcom :: remover_comunidade(const string& nome){
    comunidade *aux = comhead;
    comunidade *ant = nullptr;
    
    while (aux!=nullptr)
    {
        ant = comhead;
        if (ant->name == nome)
        {
            if (ant == nullptr)
            {
                comhead = aux->next;
            }
            else
            {
                ant->next=aux->next;
            }
            
            delete aux;
            comsize--;
            break;

        }
        ant=aux;
        aux=aux->next;
        
        
    }
    



}//remove a comunidade da lista;


void avcom :: remover_usuario_decoms(const string& nome){
   comunidade *aux=comhead;

   while (aux!=nullptr)
   {
     aux->remover_usuario(nome);
     aux=aux->next;
   }
   
}//remove o usuário de todas as comunidades que ele participa.