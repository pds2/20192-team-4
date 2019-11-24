#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "usuario.hpp"

class Administrador : public Usuario{

    public:
        Administrador();
        Administrador(std::string,std::string,std::string);

        std::string get_cpf();
		void set_cpf(std::string);
		std::string get_nome();
		void set_nome(std::string);
		std::string get_senha();
		void set_senha(std::string);
        void Login(std::string) override;
        void Deslogar() override;
        void ListarAdmins();
        

    private:

        
        void CadastrarCreche();
        void VerCreche (int);
        void EditarCreche();
        void DeletarCreche ();
        void CadastrarGerente();
        void GerarRelatorioAnual ();
        void GerarRelatorioTrimestral ();
        int Menu();
        int ListarGerentes();
        int ListarCreches(bool);
        void EditarDados() override;
        void CadastrarAdmin();
        void VerDados() override;

};

#endif