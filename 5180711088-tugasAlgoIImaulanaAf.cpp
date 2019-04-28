#include<conio.h>

#include<iostream>

using namespace::std;

main()
{
    int A[20];
    int i, j, nilai,batas,baru,a,b,c,d,k;

   cout<<"\nMasukkan Jumlah data yang ingin di inputkan : ";cin>>batas;
   cout<<"\n==========================================================================";
   cout<<endl;


    for(i=0;i<batas;i++)
    {
        cout<<"\nData Indeks ["<<i<<"]= ";cin>>A[i];
    }
    cout<<endl;

    cout<<"\nMasukkan nilai yang ingin dicari= ";
    cin>>nilai;


    for(j=0;j<batas;j++)
    {
    if(A[j]==nilai)
    {
    cout<<"\nNilai yang dicari terdapat pada indeks ke : ["<<j<<"]";
    }
   }
   cout<<"\n\n============================================================================";

cout<<endl;
cout<<"\nMasukkan indeks yang ingin diganti : ";
cin>>c;
cout<<"\nMasukkan nilai yang ingin di ganti : ";
cin>>baru;
a = c;
A[a] = baru;
cout<<"\nData yang baru  : \n";

for(b=0;b<batas;b++)
{
 cout<<"\nData["<<b<<"]="<<A[b]<<"\n";
}

cout<<"\n============================================================================";
cout<<endl;
cout<<"\nMasukkan indeks yang ingin dihapus : ";
cin>>d;
i=d;
cout<<"\nNilai yang telah dihapus : ";
cout<<" "<<A[i]<<" pada INDEKS ["<<i<<"] \n";
cout<<"\nNilai akhir : \n";
for(j=d;j<batas;j++)
{
 A[j]=A[j+1];
}
for(k=0;k<batas-1;k++)
{
 cout<<"\nData["<<k<<"]="<<A[k];
}
getch();
}
