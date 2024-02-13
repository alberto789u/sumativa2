#include <bits/stdc++.h>
using namespace std;
class Carro{
  int v;
  public:
  string ma;
  string mo;
  int a;
  string c;
  Carro(string man, string mon, int an, string cn, int vn);
  Carro();
  void setV(int vj);
  int getV();
  void acc(int ac);
};
int main(){
  Carro c1;
  Carro c2("Toyota", "Corolla", 2020, "Azul", 20);
  c1.setV(67);
  while (c1.getV()<100)c1.acc(5);
  while (c2.getV()<100)c2.acc(5);
  cout<< "La velocidad del carro 1 es: "<<c1.getV()<<endl;
  cout<< "La velocidad del carro 2 es: "<<c2.getV()<<endl;
}
Carro::Carro(string man, string mon, int an, string cn, int vn){
  ma=man;
  mo=mon;
  a=an;
  c=cn;
  v=vn;
}
Carro::Carro(){
  ma="N/A";
  mo="N/A";
  a=0;
  c="N/A";
}
void Carro::setV(int vj){
  v=vj;
}
int Carro::getV(){
  return v;
}
void Carro::acc(int ac){
  v+=ac;
}
