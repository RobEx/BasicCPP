/****
Izveidot programmu valodā C++,
kas apstrādā teksta failu secīgā režīmā.
Dati no faila jānolasa pa vienam simbolam
(nedrīkst nolasīt uzreiz visu failu vai veselu rindiņu).
Nedrīkst dublēt visa faila saturu operatīvajā atmiņā.
Sīkākas prasības sk. Laboratorijas darbu noteikumos.
F2. Dots teksta fails, kurā atrodas sintaktiski pareizs C++ programmas teksts.
Saskaitīt, cik salīdzināšanas operatoru (==, !=, <=, >=) satur dotā programma.
Drīkst uzskatīt, ka programmas tekstā nav komentāru un
ka attiecīgie simboli neparādīsies teksta literāļos
******/
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    fstream fin ("prog.txt", ios::in);
    bool karodzins=false;
    char a;
    int count=0;
    fin.get(a);
    while(fin)
    {
        if(!karodzins)
        {
            if(a=='=' || a=='!' || a=='<' || a=='>')
            {
                karodzins=true;
            }
        }
        else
        {

            if(a=='=')
            {
                count++;
                karodzins=false;
            }
            else karodzins=false;
        }
        fin.get(a);
    }
    fin.close();
    cout<<"Salidzinasanas simbolu skaits programma ir: "<<count<<endl;

    return 0;
}
