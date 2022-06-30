/*6. Elabore um algoritmo que declare duas strings e leia a primeira string. Em seguida, copie o
texto da primeira string para a segunda em letras maiúsculas. Imprima no final o conteúdo
das duas strings.*/
#include <iostream>
#include <string>
using namespace std;
int main() {

  string frase1, frase2, frase3, frase4;
  int i, i2=0, t1, t2, t3, cont;

  cout<<"\nDigite um frase: ";
  getline(cin,frase1);

  cout<<"\nDigite outra frase: ";
  getline(cin,frase2);
  
  frase3 = frase1 + frase2;

  for(i=0; i<frase3.size(); i++){
    frase4[i] = toupper(frase3[i]);
  }
  cout<<"\n";
   for(i=0; i<frase3.size(); i++){
    cout<< frase4[i];
  }
  
}
