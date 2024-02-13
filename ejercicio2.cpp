#include <bits/stdc++.h>
using namespace std;
class Persona
{
    int e;
    float est;
    float p;

public:
    string n;
    string t;
    Persona();
    Persona(int er, float estr, float pr, string nr, string tr);
    int getEdad();
    void setEdad(int hr);
    float getEstatura();
    void setEstatura(float hr);
    float getPeso();
    void setPeso(float hr);
    void cumplirAnios();
    void presentarse();
};
int main (){
  Persona p1;
  p1.setEdad(18);
  p1.setEstatura(1.75);
  p1.setPeso(70);
  p1.n= "Juan";
  p1.t= "33456789";
  Persona p2(20,1.65,65,"Maria","98765432");  
  vector <Persona> p;
  p.push_back(p1);
  p.push_back(p2);
  for (int i=0; i<p.size(); i++){
    p[i].presentarse();
    p[i].cumplirAnios();
    
  }
  for (int i=0; i<p.size(); i++){
    p[i].presentarse();

  }
}
int Persona::getEdad()
{
    return e;
}
void Persona::setEdad(int hr)
{
    e = hr;
}
float Persona::getEstatura()
{
    return est;
}
void Persona::setEstatura(float hr)
{
    est = hr;
}
float Persona::getPeso()
{
    return p;
}
void Persona::setPeso(float hr)
{
    p = hr;
}
void Persona::cumplirAnios()
{
    e++;
    if (e < 21)est*=1.03;
    if (e>30)p*=1.03;
}
void Persona:: presentarse(){

   cout << "Hola, me llamo " << n << " tengo " << e << " anios "<< "mido " << est << " y peso " << p << " kg" << "mi # de telefono es "<< t << endl;
}
