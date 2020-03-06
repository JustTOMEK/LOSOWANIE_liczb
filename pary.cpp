#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector <int> alamo;
    srand( time( NULL ) );

    cout<<"Zapraszam do pliku tekstowego pt. pary.txt";

    int licznik=2,ilosc,przedzial;

    ifstream in;
    in.open ("dane.txt");

    ofstream out;
    out.open("pary.txt");
    in>>przedzial;
    in>>ilosc;
    for (int i=1;i<ilosc+1;i++)
    {   int n;
        in>>n;
        alamo.push_back(n);
    }
    while(alamo.size()>=0)
    {
        int los = ( std::rand() %przedzial+1  );
        for (int i=0;i<alamo.size();i++)
        {
            if(alamo[i]==los)
            {
               if(licznik%2==0)
               {
                   out<<los<<"-";
               }
               if(licznik%2==1)
               {
                   out<<los<<endl;
               }
               alamo.erase (alamo.begin()+i);
               licznik+=1;
            }

        }
    }

    system("pause");

    return 0;
}
