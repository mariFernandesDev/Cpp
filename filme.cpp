#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Filme {
	string titulo, genero;
	int duracao;
};

void cadastrarFilme(vector<Filme>&Filmes) {
	Filme f;
	cout << "----Cadastrar Filme----\n";
	cout << "Titulo: ";
	cin.ignore();
	getline(cin, f.titulo);
	cout << "Genero: ";
	getline(cin, f.genero);
	cout << "Duracao do Filme (em minutos): ";
	cin >> f.duracao;

}

void mostrarFilme(vector<Filme>& Filmes) {
	cout << "Exibir Informacoes do filme\\n";
	for (int i = 0; i < Filmes.size(); i++) {
		cout << "Titulo do Filme: " << Filmes[i].titulo << endl;
		cout << "Genero do Filme: " << Filmes[i].genero << endl;
		cout << "Duracao (em minutos): " << Filmes[i].duracao << endl;

	}
	cout << endl;
}

void Salvar(vector<Filme>& Filmes) {
    Filme f;
	fstream arquivoFilme;
	arquivoFilme.open("arquivo_filme.txt", ios::out | ios::app);

	arquivoFilme << f.titulo << endl;
	arquivoFilme << f.genero << endl;
	arquivoFilme << f.duracao << endl;

	arquivoFilme.close();

}

void CarregarInformacoes(vector<Filme>& Filmes) {
    Filme f;
	ifstream arquivoFilme;
	arquivoFilme.open("arquivo_filme.txt", ios::in);

	string informacoes;
	while (getline(arquivoFilme, informacoes)) {
		cout << informacoes << endl;
	}

	arquivoFilme.close();
}

void Menu() {
	cout << "----MENU----\n";
	cout << "1. Para Cadastrar\n";
	cout << "2. Para Mostrar\n";
	cout << "3. Para salvar em um arquivo de texto\n";
	cout << "4. Para Carregar as informacoes do arquivo de texto\n";
	cout << "0. Para Sair\n";
}
int main() {
	vector<Filme>Filmes;
	int opcao;
	do {
		Menu();
		cin >> opcao;
		switch(opcao) {
			case 1:
				cadastrarFilme(Filmes);
				break;
			case 2:
				mostrarFilme(Filmes);
				break;
			case 3:
				Salvar(Filmes);
				break;
			case 4:
				CarregarInformacoes(Filmes);
				break;
			case 0:
				break;
			default:
				cout << "Opcao Invalido. Tente novamente\n";
		}
	} while (opcao != 0);
	return 0;
}
