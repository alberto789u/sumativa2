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
    return e;
}
