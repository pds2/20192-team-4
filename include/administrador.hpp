#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "usuario.hpp"

class Administrador : public Usuario{

    private:

    public:

    Administrador(std::string,std::string,std::string);
    
    void CadastrarCreche ();
    void VerCreche ();
    void EditarCreche();
    void DeletarCreche ();
    void CadastrarGerente();
    void GerarRelatorioAnual ();
    void GerarRelatorioTrimestral ();



};


#endif