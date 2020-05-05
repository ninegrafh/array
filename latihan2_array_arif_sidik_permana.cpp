#include<iostream>
#include <cstdlib>

using namespace std;

int main(){
        //Mendeklarasikan array
        string t[2][6]={
            {"Januari", "Pebruari", "Maret", "April", "Mei", "Juni"},
            {"31Hari","29Hari","31Hari","30Hari","31Hari","30Hari"}};

        cout<<"Menampilkan secara manual"<<endl;
        cout<<t[0][0]<<" "<<t[0][1]<<" "<<t[0][2]<<" "<<t[0][3]<<" "<<t[0][4]<<" "<<t[0][5]<<" "<<endl;
        cout<<t[1][0]<<" "<<t[1][1]<<" "<<t[1][2]<<" "<<t[1][3]<<" "<<t[1][4]<<" "<<t[1][5]<<" "<<endl<<endl;

        cout<<"Menampilkan dengan menggunakan for "<<endl;
         for(int i = 0; i<2; i++){
          cout<<"\nNilai pada baris ke-"<<i<<endl;
          for(int j = 0; j<6; j++){
           cout<<"Array ["<<i<<"]["<<j<<"] : "<<t[i][j];
           cout<<endl;
          }
          cout<<endl;
         }

         cout<<"**Hasil Tahun 2020 Jumlah Hari di Bulan**"<<endl;
         cout<<"=========================================="<<endl;
         for(int i = 0; i<2; i++){
          {
          for(int j = 0; j<6; j++)
           cout<<t[i][j]<<" ";
           cout<<endl;
          }
          cout<<endl;
         }


        system("pause");
        return 0;

}
