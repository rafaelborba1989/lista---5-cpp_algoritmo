/*5. Elabore um algoritmo que receba um nome completo em uma string e apresente apenas o
último nome e o 1º nome na seguinte forma: último, 1º nome.
Entrada: Ana Fernandes Oliveira
Saída: Oliveira, Ana*/
#include <iostream>
#include <string>
using namespace std;
int main() {
  int i,posicao, i2=0, i3, j, t1, t2, cont=0, cont2=0, cont3 =0, acumulador=1;
  string nome, nomei, nomef, nomefc;
  char espaco;
  bool flag = false;
  cout<<"\nDigite um nome completo: ";
  getline(cin,nome);

  espaco = ' ';

  t1 = nome.size();
  j = nome.find(' ') - 1;
  t2 = nome.size() - nome.find(' ');

 
  for(i=0; i<(nome.find(' ')); i++){ 
   nomei[i] = nome[i]; 
    cont++;
  }
  while(nome[nome.size()-cont2] != ' '){
    nomef[i2] = nome[nome.size()-cont2];
    cont2++;
    i2++;
  }
  for(i=0; i<cont2; i++){
    nomefc[i] = nomef[cont2-cont3];
      cont3++;
  }
  for(i=0; i<cont2; i++){
    cout<<nomefc[i];
  }
  cout<<", ";
  for(i=0; i<cont2; i++){
    cout<<nomei[i];
  }
    
      
}
      
  

  

    
  
