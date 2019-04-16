#include <iostream.h>
#include <conio.h>

main() {
  int a,b,mod;
  float bagi;
  cout<<"\n\tcontoh penggunaan / dan %\n\n";
  cout<<"\tmasukkan angka pertama (a) = ";cin>>a;
  cout<<"\tmasukan angka kedua    (b) = ";cin>>b;
  bagi=float(a)/b;
  mod=a%b;
  cout<<"\n\thasil pembagian          = "<<bagi;
  cout<<"\n\tsisa hasil bagi          = "<<mod;
  getch();}