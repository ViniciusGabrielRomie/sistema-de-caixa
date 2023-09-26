#include <iostream>
#include <fstream>

using namespace std;

class Empresa{
private:
    int cnpj;
public:
    int senha;
    string nome;
    int getCNPJ(),getSenha();
    string getNome(string name);
    void setCNPJ(),setSenha(),setNome();
};

int Empresa :: getCNPJ(){
    int i=0;
    fstream arquivo("empresa.txt");
    arquivo.open();


    for(;)
}


int main()
{

echo "# sistema-de-caixa" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/ViniciusGabrielRomie/sistema-de-caixa.git
git push -u origin main
    cout << "Hello world!" << endl;
    return 0;
}
