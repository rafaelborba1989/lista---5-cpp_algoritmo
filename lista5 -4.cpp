/*4. Elabore um algoritmo que leia uma string qualquer e escreva-a em letras maiúsculas e espelhada.
Entrada: “uma frase qualquer”
Saída: “reuqlauq esarf amu”
*/
#include <iostream>
#include <string>
using namespace std;
int main() {

  string frase, fraseespelhada;
  int i, i2, t1;

  cout<<"\nDigite uma frase: ";
  getline(cin,frase);

  t1 = frase.size();

  for(i=0; i<t1; i++){
    fraseespelhada[i] = toupper(frase[(t1-1)-i]);
    cout<< fraseespelhada[i];
  }
}
