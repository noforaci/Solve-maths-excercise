#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    std :: fstream snt("C:/Users/HP/Desktop/cpp/snt.txt");
    if (snt.fail())
    {
        std :: cout << "Fail!!!!" << std :: endl;  
    }
    
    int k[1000];
    while (!snt.eof())
    {
        for (int b = 0; b<1000; b++)
        {
            snt >> k[b];
        }  
    }
    snt.close();

int i,t,a=0;
    cout << "Nhap so can phan tich: ";
    cin >> i;


   for (t=0; t<1000; t++)
   {
       if (i%k[a] == 0)
       {
           i = i/k[a];
           cout << "(" << k[a] << ")";
       } else
       {
           a=a+1;
       }
   }
   if (i!=1)
   {
       cout << "(" << i << ")";
   }
    cout << endl;
    system("pause");
}