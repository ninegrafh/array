#include<iostream>
#include <cstdlib>

using namespace std;
int main()
{
        int j;
        string bulan[6] = {"Januari","Pebruari","Maret","April","Mei","Juni"};
        cout<<"Menampilkan secara manual"<<endl;
        cout<<"BULAN 1 : "<<bulan[0]<<endl;
        cout<<"BULAN 2 : "<<bulan[1]<<endl;
        cout<<"BULAN 3 : "<<bulan[2]<<endl;
        cout<<"BULAN 4 : "<<bulan[3]<<endl;
        cout<<"BULAN 5 : "<<bulan[4]<<endl;
        cout<<"BULAN 6 : "<<bulan[5]<<endl;
        cout<<endl;
        cout<<"Menampilkan dengan menggunakan for "<<endl;
        for(int i = 0; i<6; i++)
        {
        j=i+1;
        cout<<"BULAN Ke "<<j<<": "<<bulan[i]<<endl;
        }
        system("pause");
        return 0;

}
