#include <iostream>
#include "avcom.h"
#include "comunidade.h"
#include "user.h"



using namespace std;

int main()
{ 
    avcom list;
    

    
    list.add_comunidade("Clube","Mario");
    list.add_comunidade("Clube","Ariel");
    list.add_comunidade("Clube","Kaio");
    list.add_comunidade("Clube", "Marcos");
    list.add_comunidade("Clube2","Fabio");
    list.add_comunidade("Clube2","Alex");
    list.add_comunidade("Clube3","Mauro");
    list.add_comunidade("Clube3","Yuri");
    list.add_comunidade("Clube3", "Fabio");
    //adicionando comunidades;

    cout << list.lista_comunidades();
    //impirmindo a lista de comunidades;

    cout << list.com_size() << endl;
    //retorna o tamanho da lista de comunidades;

    cout << list.retorna_com("Clube")->lista_usuarios();
    cout << list.retorna_com("Clube2")->lista_usuarios();
    cout << list.retorna_com("Clube3")->lista_usuarios();
    //retorna a lista de usuários de cada comunidade;

    cout << list.retorna_com("Clube")->retorna_tamanho() << endl;
    cout << list.retorna_com("Clube2")->retorna_tamanho() << endl;
    cout << list.retorna_com("Clube3")->retorna_tamanho()  << endl;
    //retorna o tamanho da lista de usuarios de cada comunidade;

    list.retorna_com("Clube")->remover_usuario("Kaio");
    cout << list.retorna_com("Clube")->lista_usuarios();
    //removendo usuário e retornando a lista sem o usuário;
    
    list.remover_usuario_decoms("Fabio");
    //removendo o usuario de todas as comunidades que ele participa;
    
    cout << list.retorna_com("Clube2")->lista_usuarios();
    cout << list.retorna_com("Clube3")->lista_usuarios();
    

    
    
    
    return 0;

}
