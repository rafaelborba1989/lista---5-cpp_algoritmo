/*1. Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra string,
verifique e escreva se a palavra está contida na frase.
Entradas: “esta é a frase” e “frase”
Saída: a palavra “frase” está contida na frase “esta é a frase”.*/
#include <iostream>
#include <string>
using namespace std;
int main() {

  string palavra, frase;
  int posicao, i, j, t1, t2, cont;
  char texto;
  bool flag = false;
  
cont=0;
  cout<<"\nDigite uma frase: ";
  getline(cin, frase);
  cout<<"\nDigite uma palavra: ";
  getline(cin, palavra);

  cout<<"\nTamanho da palavra: " << palavra.size();
  t1 = palavra.size();

  cout<<"\nTamanho da frase: " << frase.size();
  t2 = frase.size();

  for(i=0; i<t1; i++){
    for(j=0; j<t2; j++){    
      if(palavra[i]==frase[j]){
        cont++;
      }
    }
  }
  if(cont>=t1){
    cout<<"\nPalavra: " << palavra <<  "  está contida na frase: " << frase;
    }else{
    cout<<"\nPalavra não está contida na frase!";
    }
}
