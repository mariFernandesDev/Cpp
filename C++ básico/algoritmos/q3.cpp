#include<iostream>
#include <random>
using namespace std;
int main() {
	//menu de opções do usuário
	cout << "--Menu de Opcoes--\n" << "Digite 1 para gerar um vetor[20]\n"
	<< "Digite 2 para exibir o vetor\n" << "Digite 3 para mostrar o maior numero do vetor\n" << "Digite 4 para adivinhar um número do vetor e sua posicao\n" << "Digite -1 para sair\n";
	int opcao;

	int numeros[20] = { 0 };
	do {
		cin >> opcao;
		switch (opcao) {
		case 1: {
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<> dist(1, 100);

			for (int i = 0; i < 20; i++) {
				numeros[i] = dist(gen);
			}
			break;
			cout << "Vetor gerado\n";
		}

		case 2: {
			cout << "Exibindo o vetor\n";
			for (int i = 0; i < 20; i++) {
				cout << numeros[i] << " ";
			}
			cout << endl;
			break;
		}
		case 3: {
			int maior = numeros[0];
			for (int i = 1; i < 20; i++) {
				if (maior < numeros[i]) {
					maior = numeros[i];
				}
			}
			cout << "O maior valor é: " << maior << endl;
			break;
		}
		case 4: {
			cout << "Advinhe um valor do vetor: \n";
			int valor;
			bool valorExiste = false;
			cin >> valor;
			for (int i = 0; i < 20; i++) {
				if (valor == numeros[i]) {
					valorExiste = true;
					cout << "O valor existe e está na posição: " << i << endl;
					break;
				}
			}
			if (!valorExiste) {
				cout << "O valor não existe no array";
			}
			break;
		}
		case -1: {
			cout << "Saindo....\n";
			break;
		}
		default: {
			cout << "opcao invalida\n";

		}
		}
	} while (opcao != -1);

	return 0;
}
