//Utilizando a biblioteca vector

#include <iostream>
#include <vector>
#include <string>
#include <random>
using namespace std;

struct Autor {
	int id;
	string nome, nacionalidade;
};

struct Livro {
	int idLivro, idAutor, ano;
	string titulo;
};
string MsnError() {
	return "Dados não encontrados. Tente Novamente.\n\n";
}
void CadastrarAutor(vector<Autor>& vetAutor) {
	Autor a;
	a.id = vetAutor.size() + 1011;

	cout << "----Cadastrar Autor----\n";
	cout << "Nome do Autor: ";
	cin.ignore();
	getline(cin, a.nome);
	cout << "Nacionalidade do Autor: ";
	getline(cin, a.nacionalidade);

	cout << "Autor cadastrado com sucesso! Seu id é " << a.id << endl;


	vetAutor.push_back(a);
}
void CadastrarLivro(vector<Livro>& vetLivro, vector<Autor>& vetAutor) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>distrib(1000, 10000);

	if (vetAutor.size() == 0) {
		cout << MsnError();
		return;
	}
	Livro l;
	l.idLivro = distrib(gen);

	cout << "----Cadastrar Livro----\n";
	cout << "Titulo: ";
	cin.ignore();
	getline(cin, l.titulo);
	cout << "Ano de Publicacao: ";
	cin >> l.ano;

	int idinfo;
	bool idteste = false;

	//Associando o livro com o autor
	do {
		cout << "Código do Autor: ";
		cin >> idinfo;
		for (int i = 0; i < vetAutor.size(); i++){
			if (idinfo == vetAutor[i].id) {
				idteste = true;
				l.idAutor = idinfo;
			}
		}
		if (idteste == false) {
			cout << MsnError();
		}

	} while (idteste == false);

	cout << "Livro cadastrado com sucesso! Seu id e: " << l.idLivro << endl;


	vetLivro.push_back(l);
}
void Cadastrar(vector<Livro>& vetLivro, vector<Autor>& vetAutor) {

	int opcao;

	do {
		cout << "----Sistema de Cadastro----\n";
		cout << "1. Para Cadastrar Autor.\n";
		cout << "2. Para Cadastrar Livro.\n";
		cout << "0. Para Voltar.\n";
		cin >> opcao;
		switch (opcao) {
		case 1:
			CadastrarAutor(vetAutor);
			break;
		case 2:
			CadastrarLivro(vetLivro, vetAutor);
			break;
		case 0:
			return;

		default:
			cout << "Opcao inválida\n";
			break;
		}
	} while (opcao != 0);
}
void ListarAutor(vector<Autor>&vetAutor) {

	if (vetAutor.size() == 0) {
		cout << MsnError();
		return;
	}
	cout << "----Autores----\n";
	for (int i = 0; i < vetAutor.size(); i++) {
		cout << "ID : " << vetAutor[i].id << endl;
		cout << "Autor : " << vetAutor[i].nome << endl;
		cout << "Nacionalidade : " << vetAutor[i].nacionalidade << endl;
	}
	cout << endl;

}
string BuscarAutorNome(vector<Autor>&vetAutor, int idAutor) {

		for (int j = 0; j < vetAutor.size(); j++) {
			if (vetAutor[j].id == idAutor) {
				return vetAutor[j].nome;
			}

		}
		return "Tutor não encontrado";
}
void ListarLivros(vector<Livro>&vetLivro, vector<Autor>&vetAutor) {
	if (vetAutor.size() == 0) {
		cout << MsnError();
		return;
	}

	if (vetLivro.size() == 0) {
		cout << MsnError();
		return;
	}
	cout << "----Livros----\n";
	for (int i = 0; i < vetLivro.size(); i++) {
		string autor = BuscarAutorNome(vetAutor, vetLivro[i].idAutor);

		cout << "Titulo: " << vetLivro[i].titulo << endl;
		cout << "Autor: " << autor << endl;
		cout << endl;
	}
	cout << endl;

}
void Listar(vector<Autor>&vetAutor, vector<Livro>&vetLivro) {
	cout << "----Listar/Exibir Dados----\n";
	cout << "1. Para Listar Autores.\n";
	cout << "2. Para Listar Livros.\n";
	cout << "0. Para Voltar.\n";
	int opcao;

	do {
		cin >> opcao;
		switch (opcao) {
		case 1:
			ListarAutor(vetAutor);
			break;
		case 2:
			ListarLivros(vetLivro, vetAutor);
			break;
		case 0:
			return;

		default:
			cout << "Opcao inválida\n";
			break;
		}
	} while (opcao != 0);
}

void Buscar(vector<Autor>&vetAutor, vector<Livro>&vetLivro) {
	if (vetAutor.size() == 0) {
		cout << MsnError();
		return;
	}

	if (vetLivro.size() == 0) {
		cout << MsnError();
		return;
	}
	cout << "----Buscar Livros----\n";
	cout << "Digite o id do autor: \n";
	int id;
	cin >> id;
	bool idEncontrado = false;
	for (int i = 0; i < vetLivro.size(); i++) {
		string autor = BuscarAutorNome(vetAutor, vetLivro[i].idAutor);
		if (vetLivro[i].idAutor == id) {
			idEncontrado = true;
			cout << "Titulo do Livro: " << vetLivro[i].titulo << endl;
			cout << "Ano de Lancamento: " << vetLivro[i].ano << endl;
			cout << "Autor: " << autor << endl;
		}
	}
}
void Menu() {
	cout << "----MENU----\n";
	cout << "1. Para Cadastrar\n";
	cout << "2. Para Listar\n";
	cout << "3. Para Buscar\n";
	cout << "0. Para Sair\n";


}
int main() {
	vector<Autor> vetAutor;
	vector<Livro> vetLivro;
	int opcao;
	do {
		Menu();
		cin >> opcao;
		switch (opcao) {
		case 1:
			Cadastrar(vetLivro, vetAutor);
			break;
		case 2:
			Listar(vetAutor, vetLivro);
			break;
		case 3:
			Buscar(vetAutor, vetLivro);
			break;
		case 0:
			break;
		default:
			cout << "Opcao Invalida\n";
		}

	}while(opcao != 0);

	return 0;
}
