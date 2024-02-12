#include <bits/stdc++.h>
using namespace std;
class Animal
{
    string esp;

public:
    int e;
    string n;
    string s;
    Animal();
    Animal(string a, int b, string c, string d);
    string getEspecie();
    void setEspecie(string h);
    void presentarse();
};
int main()
{
    Animal a1;
    a1.setEspecie("perro");
    a1.e = 11;
    a1.n = "Pete";
    a1.s = "guau";
    Animal a2("pez", 1, "Roberto", "glu glu ");
    vector<Animal> j;
    j.push_back(a1);
    j.push_back(a2);
    for (int i = 0; i < j.size(); i++)
    {
        j[i].presentarse();
    }
}

Animal::Animal()
{
    esp = "desconocido";
    e = 0;
    n = "desconocido";
    s = "desconocido";
}
Animal::Animal(string a, int b, string c, string d)
{

    esp = a;
    e = b;
    n = c;
    s = d;
}
string Animal::getEspecie()
{
    return esp;
}
void Animal::setEspecie(string h)
{
    esp = h;
    return;
}
void Animal::presentarse()
{

    cout << "Hola, soy un " << esp << " de " << e << " anios y me llamo " << n << ". Hago " << s << endl;
    return;
}
