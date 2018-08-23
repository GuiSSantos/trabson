#include<iostream>
#include<fstream>
#include <string>
#include<sstream>


using namespace std;

struct Pessoa
{
    string nome;
    string rg;
};
int main()
{
    int i=0;
    Pessoa lista_se[10];
    string line, aux;
    ifstream myfile ("NomeRG10.txt");
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
