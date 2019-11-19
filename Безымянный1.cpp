#include "stdafx.h"
#include <iosteam>
#incldue <cmath>
#include <locale>
using namespace std;

 void main()
{setlocale (LC_ALL, "Russian");
int ch,dd,del,k;
cout<<"??????? ????? ????? \n";
cin>>ch;
    for(del=1;del<=ch/2;del++)
        {if ((ch%del)==0)
        cout<<"???????? ?????: "<<del<<endl;
        }
k=del-1;
    for(dd=2;dd<=k;dd++)
        {if (del%dd != 0)
        cout<<"??????? ????? ????? "<<dd<<endl;
        }
    cout<<endl<<endl;
}


