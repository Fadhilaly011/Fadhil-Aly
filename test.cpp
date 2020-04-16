#include <iostream>
using namespace std;

int main(){
    int i,n,array[100];
    int jumlah = 1;
    cout<<"MASUKKAN BATAS BILANGAN : ";
    cin>>n;
    cout<<" MASUKKAN BILANGAN : \n";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<"JUMLAH BILANGAN : "<<n<<endl;
    for(int i=0; i<n;i++){
        cout<<" "<<array[i];
        jumlah *= array[i];
    }
    cout<<"\nHASIL PERKALIAN : "<<jumlah;
}

//SOAL 3 DENGAN MENGGUNAKAN ARRAY
