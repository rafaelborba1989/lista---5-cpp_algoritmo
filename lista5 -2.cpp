/*2. Elabore um algoritmo que leia uma frase e escreva uma tabela que mostre, para cada letra,
o número de vezes que a mesma aparece na frase.
Entrada: “uma frase qualquer”
Saída: “u” aparece 3 vezes
“m” aparece 1 vez
“a” aparece 3 vezes
“f” aparece 1 vez
“r” aparece 2 vezes
“s” aparece 1 vez
“e” aparece 2 vezes
“q” aparece 2 vezes
“l” aparece 1 vez
*/
#include <iostream>
#include <string>
using namespace std;
int main() {

  string frase;
  int i,  j, t1, cont;

  
  cout<<"\n\nDigite uma frase: \n";
  getline(cin,frase);

  t1 = frase.size();

  char v[t1];

  for(i=0; i<t1; i++){
    cont=0;
    for(j=0; j<t1; j++){
      if(v[j]!=frase[i]){
        if(frase[i]!= ' '){
          if(frase[i]==frase[j]){
            v[j] = frase[j];
            cont++;
          }
        }
      }
    }
    if(cont>1){
      cout<<"\n" << v[i] << " aparece " << cont <<" vezes!";
    }else{
      if(cont==1){
        cout<<"\n" << v[i] << " aparece " << cont <<" vez!";
      }
    }
  }
  
}
  
