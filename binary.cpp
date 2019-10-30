/*
      Binary search() C++
      Compiler : Microsoft Visual Studio 2012
      By N.N. Blog
*/
#include <iostream>
using namespace std;
#include <iomanip>

int data[8] = {13, 14, 15, 16, 17, 18, 19, 20};
int cari;


void binarysearch()
{
      //searching
      int awal, akhir, tengah, simpan = 0;
      awal = 0;
      akhir = 8;
      while (simpan == 0 && awal<=akhir)
      {
            tengah = (awal + akhir)/2;
            if(data[tengah] == cari)
            {
                  simpan = 1;
                  break;
            }
            else if(data[tengah]<cari)
                  awal = tengah + 1;
            else
                  akhir = tengah -1;
      }

        if(simpan == 1)
            cout<<"\nData ditemukan pada index ke-"<<tengah+1<<endl;
      else
            cout<<"\nData tidak ditemukan\n";
}

int main()
{
      cout<<"\t   'BINARY SEARCH'"<<endl;
      cout<<"\t====================="<<endl;
      cout<<"\nData           : ";
      //tampilkan data awal
      for(int x = 0; x<8; x++)
            cout<<setw(3)<<data[x];
      cout<<endl;

      cout<<"\nMasukkan data yang ingin Anda cari : ";
      cin>>cari;
      cout<<endl;
       
        binarysearch();


 }
