#include<iostream>
#include<fstream>
#include <string>
#include<sstream>

int Menu1(int escolha);
using namespace std;

struct Pessoa
{
    string nome;
    string rg;
};
int main()
{
    int i=0, escolha=0;
    string line, aux;

    escolha=Menu1(escolha);

    ifstream myfile ("NomeRG10.txt");
    Pessoa lista_se[10];



    cout<<"Abrindo arquivo..."<<endl;
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            stringstream aux(line);
            getline(aux, lista_se[i].nome, ',');
            getline(aux, lista_se[i].rg, ',');

            cout << lista_se[i].nome<< ", "<< lista_se[i].rg << '\n';
            i++;
        }
        myfile.close();
    }

    else
    {
        cout<<"Não foi possível abrir arquivo";
    }
    cout<<"--------OK-------"<<endl;

    getchar();
    return 0;
}

int Menu1(int escolha)
{
    int a =0;
    cout<<"Qual arquivo ler?"<<endl;
    cout<<"1 - 10\n2 - 50\n3 - 100\n4 - 1K\n5 - 10K\n6 - 1M\n7 - 10M\n";
    cin>>a;
    return a;
}
