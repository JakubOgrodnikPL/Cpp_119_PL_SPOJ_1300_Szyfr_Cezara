#include <iostream>
using namespace std;

int main()
{
    string tekst;
    while(getline(cin,tekst))
    {
        for(int i=0; i<tekst.length(); i++)
        {
            if(tekst[i]==' ') cout<<tekst[i];
            else if(tekst[i]=='X') cout<<"A";
            else if(tekst[i]=='Y') cout<<"B";
            else if(tekst[i]=='Z') cout<<"C";
            else cout<<char(tekst[i]+3);
        }
        cout<<endl;
    }
    return 0;
}
