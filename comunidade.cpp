#include <iostream>
#include "comunidade.h"
#include <string>


using namespace std;


comunidade :: comunidade(){
   desc="";   
   name="";
   userhead=nullptr;
   next = nullptr;
   size = 0;

}

int comunidade::retorna_tamanho(){
   return size;
}


bool comunidade :: vazio(){

   return userhead == nullptr;
}
void comunidade :: inserir_nome(const string& nome){
   name = nome;
}//insere o nome da comunidade;

void comunidade :: inserir_descricao(const string& descri){
   desc = descri;
}//insere a descrição na comunidade;

string comunidade :: retorna_nome(){
   return name;
}// retorna o nome da comunidade;


string comunidade :: retorna_desc(){
   return desc; 
} //retorna a descrição da comunidade;

void comunidade :: adicionar_usuario(const string& nome){
   user* novouser = new user(nome, nullptr);

  if (vazio())
  {
    userhead = novouser;
  }
  else{
   user *aux = userhead;
   while (aux->next !=nullptr)
   {
      aux=aux->next;
   }
   aux->next = novouser;
  }
   size++;
}//adiciona o usuário na comunidade.

void comunidade :: remover_usuario(const string& nome){
  
   user * atual = userhead;
   user * ant = nullptr;
   while (atual!=nullptr)
   {
      if (atual->nome == nome)
      {
         if (ant == nullptr)
         {
            userhead = atual->next;
         }
         else{
            ant->next=atual->next;
         }
         
         delete atual;
         size--;
         break;
      }
      ant = atual;
      atual=atual->next;
      
      
   }
   
}//remove o usuário da comunidade

string comunidade :: lista_usuarios(){
     string a ="";
     user *aux= userhead;
     
            while (aux!= nullptr)
            {
                a += aux->nome;
                aux=aux->next;
                a += "\n";
                
            }
            cout << "Os usuarios sao: " << endl;
            return a;
   
}//retorna os usuários de uma comunidade;


