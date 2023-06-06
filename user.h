#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

struct user {
    string nome;  // nome do usuário
    user *next;  // ponteiro para o proximo usuario

    // Constructor;
    user(const string& nome, user *nextuser) {
        this-> nome = nome;
        next = nextuser;
    }
};

#endif