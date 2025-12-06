#include <iostream>
#include <string>
#include <cstring>
#include <random>
#include <fstream>
using namespace std;

#define VAGAS 50

int contID = 0, contA = 0;

struct Tutor {
    int id;
    char nome[VAGAS], endereco[VAGAS];
};
struct Animal {
    int codigo, idade, idTutor;
    char nome[VAGAS], especie[VAGAS];
};

struct FichaMedica {
    int idFicha;
    char alergiaExistente[VAGAS], doenca[VAGAS];
};

string MsnError() {
    return "Nao ha dados cadastrados. Tente Novamente\n\n";
}

void Menu() {
    cout << "----MENU----\n";
    cout << "1. Para Cadastrar Tutor\n";
    cout << "2. Para Cadastrar Animal\n";
    cout << "3. Para Listar Tutores\n";
    cout << "4. Para Listar Animais\n";
    cout << "5. Para Buscar Animais por ID\n";
    cout << "6. Ver historico medico do animal por ID\n";
    cout << "7. Para Gerar Relatorio\n";
    cout << "8. Para Salvar Informacoes\n";
    cout << "9. Para Carregar Informacoes\n";
    cout << "0. Para sair\n";
    cout << endl;
}

void AdicionarTutor(Tutor vetTutor[]) {
    if (contID >= VAGAS) {
        cout << "Cadastro nao realizado\n";
        return;
    }
    contID++;
    vetTutor[contID].id = contID;
}

void CadastrarTutor(Tutor vetTutor[]) {
    cout << "-----Cadastro para Tutor-----\n";
    cout << "Nome: ";
    cin.ignore();
    cin.getline(vetTutor[contID].nome, VAGAS);
    cout << "Endereco: ";
    cin.getline(vetTutor[contID].endereco, VAGAS);

    cout << "Cadastro realizado com sucesso! Seu Id e: " << vetTutor[contID].id << endl << endl;
}

void CadastrarHistoricoMedico(FichaMedica vetFicha[], Animal vetAnimal[]) {
    cout << "-----Historico Medico-----\n";

    // Vincula a ficha ao animal
    vetFicha[contA].idFicha = vetAnimal[contA].codigo;

    string opcao; // String auxiliar para facilitar o IF

    cout << "Esse animal possui alguma alergia? (sim ou nao): ";
    cin >> opcao;

    if (opcao == "sim") {
        cout << "Digite a alergia: ";
        cin.ignore();
        cin.getline(vetFicha[contA].alergiaExistente, VAGAS);
    }
    else if(opcao == nao){
        strcpy(vetFicha[contA].alergiaExistente, "Nao possui alergias");
    }

    cout << "E doencas? (sim ou nao): ";
    cin >> opcao;

    if (opcao == "sim") {
        cout << "Digite a doenca: ";
        cin.ignore();
        cin.getline(vetFicha[contA].doenca, VAGAS);
    }
    else if(opcao == nao){
        strcpy(vetFicha[contA].doenca, "Nao possui");
    }
    cout << "Dados cadastrados com sucesso!\n";
}

void MostrarHistorico(FichaMedica vetFicha[], Animal vetAnimal[]) {
    cout << "----Historico Medico----\n";
    if (contA == 0) {
        cout << MsnError();
        return;
    }

    cout << "Digite o codigo do animal: ";
    int codigoA;
    cin >> codigoA;

    bool idEncontrado = false;

    for (int i = 1; i <= contA; i++) {
        if (vetAnimal[i].codigo == codigoA) {
            idEncontrado = true;
            cout << "\n--- FICHA MÉDICA ---\n";
            cout << "Animal: " << vetAnimal[i].nome;
            cout << "Alergias: " << vetFicha[i].alergiaExistente << endl;
            cout << "Doenca: " << vetFicha[i].doenca << endl;
            cout << endl;
        }
    }
    if (idEncontrado == false) {
        cout << "Animal nao encontrado.\n";
    }
}

void CadastrarAnimal(Animal vetAnimal[], Tutor vetTutor[]) {
    int idInfo;
    bool idteste;

    if (contID == 0) {
        cout << "Nenhum tutor cadastrado ainda. Volte uma etapa!\n";
        return;
    }
    if (contA >= VAGAS) {
        cout << "Cadastro nao realizado\n";
        return;
    }
    contA++;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1000, 9999);
    vetAnimal[contA].codigo = distrib(gen);

    cout << "-----Cadastro para Animal-----\n";
    cout << "Nome: ";
    cin.ignore();
    cin.getline(vetAnimal[contA].nome, VAGAS);

    cout << "Especie: ";
    cin.getline(vetAnimal[contA].especie, VAGAS);

    cout << "Idade: ";
    cin >> vetAnimal[contA].idade;

    do {
        cout << "\nDigite o ID do Tutor: ";
        cin >> idInfo;
        idteste = false;
        for (int i = 1; i <= contID; i++) {
            if (vetTutor[i].id == idInfo) {
                idteste = true;
                break;
            }
        }
        if (idteste == false) {
            cout << "ID invalido! Tente novamente.\n";
        }

    } while (idteste == false);

    vetAnimal[contA].idTutor = idInfo;

    cout << "Animal cadastrado! Codigo: " << vetAnimal[contA].codigo << endl << endl;
}

void ListarT(Tutor vetTutor[]) {
    cout << "----Tutores----\n";
    if (contID == 0) {
        cout << MsnError();
        return;
    }
    for (int i = 1; i <= contID; i++) {
        cout << "ID: " << vetTutor[i].id << " | Nome: " << vetTutor[i].nome << endl;
        cout << "Endereco: " << vetTutor[i].endereco << endl;
        cout << endl;
    }
}

string BuscaTNome(Tutor vetTutor[], int idTutor) {
    for (int i = 1; i <= contID; i++) {
        if (vetTutor[i].id == idTutor) {
            return vetTutor[i].nome;
        }
    }
    return "Tutor nao encontrado\n";
}

void ListarA(Animal vetAnimal[], Tutor vetTutor[]) {
    cout << "----Animais----\n";
    if (contA == 0) {
        cout << MsnError();
        return;
    }

    for (int i = 1; i <= contA; i++) {
        int idT = vetAnimal[i].idTutor;
        string nomeT = BuscaTNome(vetTutor, idT);
        cout << "Animal: " << vetAnimal[i].nome << " | Codigo: " << vetAnimal[i].codigo << endl;
        cout << "Especie: " << vetAnimal[i].especie << " | Idade: " << vetAnimal[i].idade << endl;
        cout << "Tutor: " << nomeT << endl;
        cout << endl;
    }
}

void BuscarAnimais(Animal vetAnimal[], Tutor vetTutor[]) {
    cout << "Busca de Animais por Tutor\n";
    if (contA == 0) {
        cout << MsnError();
        return;
    }

    cout << "Digite o ID do tutor: ";
    int idTutor;
    cin >> idTutor;

    bool idEncontrado = false;

    for (int i = 1; i <= contA; i++) {
        if (vetAnimal[i].idTutor == idTutor) {
            idEncontrado = true;
            cout << "Animal: " << vetAnimal[i].nome << " (Codigo: " << vetAnimal[i].codigo << ")" << endl;
            cout << "Especie: " << vetAnimal[i].especie << endl;
            cout << endl;
        }
    }
    if (idEncontrado == false) {
        cout << "Nenhum animal encontrado.\n";
    }
}

void Relatorio(Tutor vetTutor[], Animal vetAnimal[]) {
    if (contID == 0) {
        cout << MsnError();
        return;
    }
    if (contA == 0) {
        cout << MsnError();
        return;
    }
    cout << "----Relatorio----\n";

    for (int i = 1; i <= contID; i++) {
        int totalA = 0;
        int idT = vetTutor[i].id;
        for (int a = 1; a <= contA; a++) {
            if (vetAnimal[a].idTutor == idT) {
                totalA++;
            }
        }
        cout << "Tutor: " << vetTutor[i].nome << endl;
        cout << "Possui " << totalA << " animal/animais\n";
        cout << endl;
    }
}

void SalvarInformacoes(Tutor vetTutor[], Animal vetAnimal[], FichaMedica vetFicha[]) {
    fstream clinica;
    clinica.open("clinica.bin", ios::out | ios::binary);

    if (clinica.is_open()) {

        //Eu pesquisei o caso e variáveis se passam por referência
        clinica.write((char*)&contA, sizeof(int));
        clinica.write((char*)&contID, sizeof(int));
        //Vetores se passam normalmente
        clinica.write((char*)vetTutor, sizeof(Tutor) * VAGAS);
        clinica.write((char*)vetAnimal, sizeof(Animal) * VAGAS);
        clinica.write((char*)vetFicha, sizeof(FichaMedica) * VAGAS);

        clinica.close();
        cout << "Informacoes salvas com sucesso!!\n";
    }
    else {
        cout << "Falha ao gravar informacoes.\n";
    }
}

void Carregar(Tutor vetTutor[], Animal vetAnimal[], FichaMedica vetFicha[]) {
    fstream clinica;
    clinica.open("clinica.bin", ios::in | ios::binary);

    if (clinica.is_open()) {
        clinica.read((char*)&contA, sizeof(int));
        clinica.read((char*)&contID, sizeof(int));

        clinica.read((char*)vetTutor, sizeof(Tutor) * VAGAS);
        clinica.read((char*)vetAnimal, sizeof(Animal) * VAGAS);
        clinica.read((char*)vetFicha, sizeof(FichaMedica) * VAGAS);

        clinica.close();
        cout << "Informacoes carregadas com sucesso!\n";
    }
    else {
        cout << "Falha ao carregar informacoes.\n";
    }
}

int main() {
    Tutor vetTutor[VAGAS];
    Animal vetAnimal[VAGAS];
    FichaMedica vetFicha[VAGAS];

    int opcao;

    do {
        Menu();
        cin >> opcao;

        switch (opcao) {
        case 1:
            AdicionarTutor(vetTutor);
            CadastrarTutor(vetTutor);
            break;
        case 2:
            CadastrarAnimal(vetAnimal, vetTutor);
            CadastrarHistoricoMedico(vetFicha, vetAnimal);
            break;
        case 3:
            ListarT(vetTutor);
            break;
        case 4:
            ListarA(vetAnimal, vetTutor);
            break;
        case 5:
            BuscarAnimais(vetAnimal, vetTutor);
            break;
        case 6:
            MostrarHistorico(vetFicha, vetAnimal);
            break;
        case 7:
            Relatorio(vetTutor, vetAnimal);
            break;
        case 8:
            SalvarInformacoes(vetTutor, vetAnimal, vetFicha);
            break;
        case 9:
            Carregar(vetTutor, vetAnimal, vetFicha);
            break;
        case 0:
            cout << "Saindo do sistema....\n";
            break;
        default:
            cout << "Opcao invalida. Tente novamente.\n";
            break;
        }
    } while (opcao != 0);

    return 0;
}
