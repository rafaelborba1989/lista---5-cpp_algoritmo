/*7. Elabore um algoritmo que leia uma frase e escreva-a de duas formas: a frase completa e auma segunda frase contendo só as palavras em “posições ímpares” na primeira frase (1ª palavra, 3ª palavra, 5ª palavra, ...).*/
#include <iostream>
#include <string>
using namespace std;
int main() {

  string frase, frase2;
  int i, cont, cont2=0;
  bool flag = true;

  cont=1;
    
  cout<<"\nDigite uma frase: ";
  getline(cin, frase);
  
  for(i=0; i<frase.size(); i++){
    if(frase[i]==' '){
      cont++;
    }
    if(cont % 2 != 0){
      frase2[i] = frase[i];
      cont2++;
    }
  }
  cout<<"\n\nFrase com palavras impares: ";
  for(i=0; i<frase.size(); i++){
   cout<<frase2[i]; 
  }
  
   cout<<"\n\nFrase inicial: ";
  for(i=0; i<frase.size(); i++){
   cout<<frase[i]; 
  }
  
}
