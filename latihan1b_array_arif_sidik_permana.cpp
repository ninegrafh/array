#include<iostream>
#include <cstdlib>

using namespace std;
int main()
{
        int j;
        string hari[6] = {"31Hari","29Hari","31Hari","30Hari","31Hari","30Hari"};
        cout<<"Menampilkan secara manual"<<endl;
        cout<<"Jumlah Hari Ke 1 : "<<hari[0]<<endl;
        cout<<"Jumlah Hari Ke 2 : "<<hari[1]<<endl;
        cout<<"Jumlah Hari Ke 3 : "<<hari[2]<<endl;
        cout<<"Jumlah Hari Ke 4 : "<<hari[3]<<endl;
        cout<<"Jumlah Hari Ke 5 : "<<hari[4]<<endl;
        cout<<"Jumlah Hari Ke 6 : "<<hari[5]<<endl;
        cout<<endl;
        cout<<"Menampilkan dengan menggunakan for "<<endl;
        for(int i = 0; i<6; i++)
        {
        j=i+1;
        cout<<"Jumlah Hari Bulan "<<j<<": "<<hari[i]<<endl;
        }
        system("pause");
        return 0;

}
