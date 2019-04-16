#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

main() {
  int a,b,mod;
  float bagi;
  cout<<"\n\contoh penggunaan / dan %\n";
  cout<<"\tmasukkan angka pertama (a) = ";cin>>a;
  cout<<"\tmasukkan angka kedua   (b) = ";cin>>b;
  bagi=float(a)/b;
  mod=a%b;
  cout<<"\n\thasil pembagian          = "<<setiosflags(ios::fixed)
                                         <<setprecision(3)
                                         <<bagi;
  cout<<"\n\tsisa hasil bagi          = "<<mod;
  getch();}
