#include <iostream>
#include <conio.h>
using namespace::std;

string nama[5] = {"dinda","irfan","duwi","putri","rio"};
string nomer[5]={"A001","A002","A003","A007","A008"};
    string nam,cari,member;
    int jumlah,total,indeks,jum=5,jml,nb,jb,hb,totl1,totl2,du,mem,dis;
    double discon;

    int main()
    {
    cout<<"apakah anda member :"; cin>>member;
    if (member == "bukan")
    {
    cout<<"masukan no identitas: ";cin>>cari;
    for(int i=0 ;i<jum;i++){
        if(cari==nomer[i]){
            nam=nama[i];
        }
           }
    cout<<"anda member"<<endl;
    cout<<"id : "<<cari<<endl;
    cout<<"nama : "<<nam<<endl;
    }
    cout<<"Berapa Jumlah Barang : ";cin>>jml;
    cout<<endl;
    for(int i=0;i<jml;i++){
    cout<<"Barang ke - "<<i+1<<endl;
    cout<<"Masukkan Nama Barang   : ";cin>>nb;
    cout<<"Masukkan Jumlah barang : ";cin>>jb;
    cout<<"masukkan Harga Barang  : ";cin>>hb;
    cout<<endl;

    totl1=jb*hb;
    totl2=totl2+totl1;
}
    cout<<"Total Harga             : "<<totl2<<endl;
if(mem=='y'||mem=='Y'){
    dis=5/(float)100;

    cout<<"Diskon Anda Adalah      : "<<discon<<endl;
    cout<<"Total Yang Harus Dibayar:"<<totl2-discon<<endl;
    cout<<"Masukkan Uang           : ";cin>>du;
    cout<<"kembalian               : "<<du-(totl2-discon);

}

else if(mem=='t'||mem=='T'){
        cout<<"Anda tidak Dapat Discon "<<endl;
  cout<<" Masukkan Uang            : ";cin>>du;
  cout<<" kembalian                : "<<du-totl2;
}
return 0;
}




