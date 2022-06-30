/*3. Elabore um algoritmo que leia duas strings A e B e junte-as em uma única string C.
Entradas: “frase 1” e “outra frase qualquer”
Saída: “frase 1 e outra frase qualquer”
*/
#include <iostream>
#include <string>
using namespace std;
int main() {

  string fraseA, fraseB, fraseC;

  int i, i2=0, tA, tB, tC ;

  cout<<"\nDigite frase A: ";
  getline(cin,fraseA);
  cout<<"\nDigite frase B: \n";
  getline(cin,fraseB);

  tA = fraseA.size();    // tA índice
  
  tB = fraseB.size();    // tB índice
 
  tC = tA + tB;
  
  for(i=0; i<tC; i++){
    if(i<=(tA-1)){
      fraseC[i] = fraseA[i];
    }
    if(i>(tA-1)){
      fraseC[i] = fraseB[i2];
      i2++;
    }
  }
  for(i=0; i<tC; i++){
    cout << fraseC[i];
  }
}
