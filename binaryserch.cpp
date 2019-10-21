 

#include <iostream>
using namespace std;

    int data[8] = {30,35,40,45,50,60,65,70};
    int key[8] = {1,2,3,4,5,6,7,8};
    int  awal = 0;
	int ahir = 8;
	int tengah = (awal+ahir)/2;
    int i,k;
    int cari;
    bool ketemu = false;

int nilai(){
//		 system("color A");
	
		        // tampilkan baris data
    	cout << "Data Awal = [";
        for (i = 0; i < 8; i++)
        {
           
            cout << data[i] <<",";
        }
        cout << "]";
}


int kunci(){
//	system("color B");
	cout <<endl;
	cout << "key       = [";
	for (k = 0; k < 8; k++){
		cout << key[k]<<" ,";
	}
	cout << "]";
	cout << endl<<"---------------------------------------";
};


int pencarian(){
	system("COLOR 24");
	cout <<endl;
	cout << "Masukkan Data Angka yang di cari="<<endl;
	cin >> cari;
	
	while(ketemu == false && awal <= ahir){
		tengah = (awal+ahir)/2;
		
		if(data[tengah] == cari){
			ketemu = true;
			break;
			
			
		}
		else if(data[tengah] < cari){
			awal = tengah + 1;
		}
		else{
			ahir = tengah - 1;
		}
	}
	
	if (ketemu == true){
		cout << "Angka DI Temukan di key ke = "<<tengah+1<<endl;
	}else{
		cout << "Angka Tidak Ada !!!";
	}
	
}


    

int main() {
    	
    	cout << "----------------------------"<<endl;
    	cout << "|Nama  : Muhamad Abdul Aziz|"<<endl;
    	cout << "|NIM   :    181011400044   |"<<endl;
    	cout << "|Kelas :     03TPLE001     |"<<endl;
    	cout << "|Tugas : Binary Searching  |"<<endl;
    	cout << "----------------------------"<<endl;
    	 
    	 nilai();
    	 
    	
    	 kunci();
    	 
    	 pencarian();
 


//    return 0;
}


