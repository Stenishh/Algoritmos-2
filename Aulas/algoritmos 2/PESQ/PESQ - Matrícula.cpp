#include <iostream>
#include <cstring>
using namespace std;
struct dados
{
    char nome[50];
    char curso[50];
    int matricula;
};

int main()
{
    dados alunos[100];
    
    int N;
    char aluno_consultado[50];
    int i;
    int achou;
    
    cin >> N;
    
    for(i=0;i < N;i++)
    {
        cin.ignore();
        cin.getline(alunos[i].nome,50);
        cin.getline(alunos[i].curso,50);
        cin >> alunos[i].matricula;
    
    }
    
    cin.ignore();
    cin.getline(aluno_consultado,50);
    
      for(i=0;i < N;i++)
    {
       if(strcmp(aluno_consultado, alunos[i].nome) == 0)
       {
           cout << alunos[i].nome << endl;
           cout << alunos[i].curso << endl;
           cout << alunos[i].matricula << endl;
           achou = 1;
       }
        
    }
    
    if(achou != 1)
    cout << "Aluno nao localizado" << endl;
    
}