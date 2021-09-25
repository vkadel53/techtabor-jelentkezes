#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    return true;
}

bool max4msh(string s)
{
    return true;
}

bool betue(char c)
{
    if((c>='a'&& c<='z')|| (c>='A'&& c<='Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool csakszamvagycsakbetu(string s)
{
    bool azosszesszam=true;
    bool azosszesbetu=true;
    for(int i=0;i<s.length();i++)
    {
        if(betue(s[i]))
        {
            azosszesszam=false;
        }
        else
        {
            azosszesbetu=false;
        }
    }
    if(azosszesszam || azosszesbetu)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool szoellenorzo(string s)
{
    if (max4msh(s)==true)
    {
        if (csakszamvagycsakbetu(s)==true)
        {
           return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cout<< "Irj be egy mondatot! Eldontjuk, hogy helyes-e."<<endl;
    string mondat;
    bool helyesmondat=true;
    getline(cin,mondat);
    if(mondat[0]-'A'>=0 && mondat[0]-'A'<26)
    {
        if(mondat[mondat.length()-1]=='.' || mondat[mondat.length()-1]=='!' || mondat[mondat.length()-1]== '?')
        {
            string szo="";
            for (int j=0; j<mondat.length(); j++)
            {
                char betu=mondat[j];
                if ((betu>='a'&& betu<='z')|| (betu>='A'&& betu<='Z') || (betu>='0' && betu<='9'))
                {
                     szo=szo+betu;
                }
                else
                {
                    bool eredmeny=szoellenorzo(szo);
                    if(eredmeny==false)
                    {
                        cout<<"Ez a szavad hibas: "<<szo;
                        helyesmondat=false;
                    }
                    szo="";
                }
            }
            if (helyesmondat==true)
            {
                cout<<"Helyes mondat.";
            }
        }
        else
        {
            cout<<"Nem tettel irasjelet a mondat vegere!";
        }
    }
    else
    {
        cout<<"Nem nagybetuvel kezdted a mondatot!";
    }
    return 0;
}
