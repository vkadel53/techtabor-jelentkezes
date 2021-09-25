#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;

string sport_kerdesek[5];
string foldrajz_kerdesek[5];
int sport_valaszok[5];
int foldrajz_valaszok[5];
string sport_valaszlehetosegek[5][4];
string foldrajz_valaszlehetosegek[5][4];

void kerdes_csinalo()
{
    sport_kerdesek[0]="Melyik sporthoz nem kell labda?";
    sport_kerdesek[1]="Milyen sportagban szerezte Liechtenstein elso olimpiai ermet?";
    sport_kerdesek[2]="Mikor vezettek be a Labdarugo Bajnokok Ligajaban a videobirot?";
    sport_kerdesek[3]="Hanyan vannak egy csapatban az ultimate frisbee-ben?";
    sport_kerdesek[4]="Hany perc egy jegkorong merkozes hosszabbitas nelkuli tiszta jatekideje?";

    foldrajz_kerdesek[0]="Mennyi volt 2019-ben Magyarorszagon az atlaghomerseklet?";
    foldrajz_kerdesek[1]="Milyen eghajlatu Luxemburg?";
    foldrajz_kerdesek[2]="Melyik orszagnak van a legtobb szigete a vilagon?";
    foldrajz_kerdesek[3]="Az alabbiak kozul melyik orszag nem rendelkezik tengerparttal?";
    foldrajz_kerdesek[4]="Hany allama van az USAnak?";

    sport_valaszok[0]=3;
    sport_valaszok[1]=2;
    sport_valaszok[2]=1;
    sport_valaszok[3]=1;
    sport_valaszok[4]=4;

    foldrajz_valaszok[0]=4;
    foldrajz_valaszok[1]=1;
    foldrajz_valaszok[2]=4;
    foldrajz_valaszok[3]=1;
    foldrajz_valaszok[4]=2;

    sport_valaszlehetosegek[0][0]="Quidditch";
    sport_valaszlehetosegek[0][1]="Lacrosse";
    sport_valaszlehetosegek[0][2]="Buzkashi";
    sport_valaszlehetosegek[0][3]="Lovaspolo";

    sport_valaszlehetosegek[1][0]="Bob";
    sport_valaszlehetosegek[1][1]="Alpesi sieles";
    sport_valaszlehetosegek[1][2]="Uszas";
    sport_valaszlehetosegek[1][3]="Atletika";

    sport_valaszlehetosegek[2][0]="2018";
    sport_valaszlehetosegek[2][1]="2017";
    sport_valaszlehetosegek[2][2]="2019";
    sport_valaszlehetosegek[2][3]="Meg nem vezettek be";

    sport_valaszlehetosegek[3][0]="7";
    sport_valaszlehetosegek[3][1]="5";
    sport_valaszlehetosegek[3][2]="8";
    sport_valaszlehetosegek[3][3]="11";

    sport_valaszlehetosegek[4][0]="45";
    sport_valaszlehetosegek[4][1]="90";
    sport_valaszlehetosegek[4][2]="40";
    sport_valaszlehetosegek[4][3]="60";

    foldrajz_valaszlehetosegek[0][0]="23.93";
    foldrajz_valaszlehetosegek[0][1]="19.8";
    foldrajz_valaszlehetosegek[0][2]="15.61";
    foldrajz_valaszlehetosegek[0][3]="12.19";

    foldrajz_valaszlehetosegek[1][0]="Oceani";
    foldrajz_valaszlehetosegek[1][1]="Kontinentalis";
    foldrajz_valaszlehetosegek[1][2]="Mediterran";
    foldrajz_valaszlehetosegek[1][3]="Tajga";

    foldrajz_valaszlehetosegek[2][0]="Norvegia";
    foldrajz_valaszlehetosegek[2][1]="Kanada";
    foldrajz_valaszlehetosegek[2][2]="Indonezia";
    foldrajz_valaszlehetosegek[2][3]="Svedorszag";

    foldrajz_valaszlehetosegek[3][0]="Paraguay";
    foldrajz_valaszlehetosegek[3][1]="Bosznia es Herczegovina";
    foldrajz_valaszlehetosegek[3][2]="Kenya";
    foldrajz_valaszlehetosegek[3][3]="Vanuatu";

    foldrajz_valaszlehetosegek[4][0]="52";
    foldrajz_valaszlehetosegek[4][1]="50";
    foldrajz_valaszlehetosegek[4][2]="48";
    foldrajz_valaszlehetosegek[4][3]="49";
}

int main()
{
    kerdes_csinalo();
    int kerdesek_szama;
    cout<<"Hany kerdest szeretnel? Maximum 5-ot kaphatsz!"<<endl;
    cin>>kerdesek_szama;
    cout<<"Valassz, sport vagy foldrajz legyen?! Ha sport, irjal 1-est, ha foldrajz, irjal 2-est!"<<endl;
    int tema_tipusa;
    cin>>tema_tipusa;
    int helyes_valaszok=0;
    if(tema_tipusa==1)
    {
        for (int j=0;j<kerdesek_szama; j++)
        {
            cout<<sport_kerdesek[j]<<endl;
            for(int i=0;i<=3;i++)
            {
                cout<<sport_valaszlehetosegek[j][i]<<endl;
            }
            cout<< "Ird be azt a szamot egytol negyig amelyik szerinted a megoldas sorszama!"<<endl;
            int sport_valasz;
            cin>> sport_valasz;
            if (sport_valasz==sport_valaszok[j])
            {
                helyes_valaszok++;
                cout<<"jo"<<endl;
            }
            else
            {
                cout<<"nem jo"<<endl;
            }
        }
    }
    else if(tema_tipusa==2)
    {
        for (int j=0;j<kerdesek_szama; j++)
        {
            cout<<foldrajz_kerdesek[j]<<endl;
            for(int i=0;i<=3;i++)
            {
                cout<<foldrajz_valaszlehetosegek[j][i]<<endl;
            }
            cout<< "Ird be azt a szamot egytol negyig amelyik szerinted a megoldas sorszama!"<<endl;
            int foldrajz_valasz;
            cin>> foldrajz_valasz;
            if (foldrajz_valasz==foldrajz_valaszok[j])
            {
                helyes_valaszok++;
                cout<<"jo"<<endl;
            }
            else
            {
                cout<<"nem jo"<<endl;
            }
        }
    }
    else
    {
        cout<<"A választás nem értelmezhetõ"<<endl;
    }
    cout<<"Az eredemenyed: "<<(double)helyes_valaszok/kerdesek_szama*100<<"%"<<endl;
    Sleep(5000);
    return 0;
}
