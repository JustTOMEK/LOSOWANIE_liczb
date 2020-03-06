#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ofstream out;
    out.open("dane.txt");


    vector <int> alamo;

    srand( time( NULL ) );

    int przedzial,przedzial1,ilosc;
    cout<<"PODAJ PRZEDZIAL: ";
    cin>>przedzial1;
    cout<<"PODAJ ILOSC: ";
    cin>>ilosc;
    przedzial=przedzial1+1;
    out<<przedzial1<<" ";
    out<<ilosc<<endl;

    for (int i=1;i<przedzial;i++)
    {
        alamo.push_back(i);
    }

    for (int i=0;i<ilosc;i)
    {
        int los = ( std::rand() % przedzial );

        for (int j=0;j<alamo.size();j++)
        {
            if(alamo[j]==los)
            {
               out<<los<<" ";
               alamo.erase (alamo.begin()+j);
               i+=1;
               break;
            }

        }
    }


    system("pause");



    return 0;
}
