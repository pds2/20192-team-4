#include <iostream>
#include <string>
#include "../include/gerente.hpp"
#include "../include/administrador.hpp"
#include "../include/creche.hpp"
#include "../include/usuario.hpp"
#include "../include/lista.hpp"
#include "../include/globais.hpp"

ListaGerentes listaG;
ListaAdmins listaA;
ListaCreches listaC;
Administrador *SessaoAdmin;
Gerente *SessaoGerente;
Creche *SessaoCreche;


int main(){
    /*---------------------Criando Administrador super--------------*/
    Administrador *Super = new Administrador();
    Super->set_nome("super");
    Super->set_cpf("01234567890");
    Super->set_senha("super");
    listaA.insere_admin(Super);
    

    
    gmu::MenuFunc::MenuPrincipal();
}