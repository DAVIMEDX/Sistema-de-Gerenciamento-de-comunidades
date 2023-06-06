# Sistema-de-Gerenciamento-de-comunidades
Sistema para gerenciar grupos de comunidades 


Funcionamento do Sistema: 

O sistema é definido em 2 classes, classe Avcom, classe Comunidade e uma struct definida com user. 


///A classe Avcom é definida com: 


comunidade *comhead: Um ponteiro da classe comunidade chamado “comhead”, que representa a primeira classe da lista. 

int comsize: Um inteiro com o tamanho da lista de comunidades.
 
Na classe Avcom, é possível utilizar as seguintes funções: 

comunidade *retorna_com(const string& nome); Retorna uma comunidade passada por parâmetro em forma de string, assim dando acesso as funções da classe comunidade; 

void add_comunidade(const string& nome, const string& usuario); Adiciona uma comunidade na lista, se ela já existir, adiciona apenas o usuário; 

void remover_comunidade(const string& nome); Remove a comunidade da lista e todos os usuários vinculados a ela; 

void remover_usuario(const string& nome); Remove um usuário da lista da comunidade em que ele participa; 

bool vazia (); Função que verifica se a lista está vazia; 

bool usuarios_vazio(); Função que verifica se a lista de usuários está vazia; 

void remover_usuario_decoms(const string& nome); Remove o usuário de todas as comunidades que ele participa. 
Compilação e execução 

///Para compilar e executar o programa: 

Abrir o terminal do sistema ou o terminal integrado do editor e navegar sobre o diretório da pasta onde o arquivo está localizado. 

No terminal, executar o comando “g++ *.cpp –o main” assim compilando o programa. Esse comando compila todos os arquivos com extensão “.cpp” na pasta do programa e gera o arquivo exe com o nome “main”.  Depois do processo de compilação, executar o programa usando o comando “main” ou “./main”. Após isso, o programa inicia.



O sistema ainda está sujeito a aperfeiçoamento, mas representa bem a ideia de gerenciamento de grupos de diversas características.
