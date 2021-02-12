#include <iostream>
#include <fstream>

using namespace std;

// data of this program
int main ()
{
    std :: fstream snt("C:/Users/HP/Desktop/cpp/songuyento/snt.txt"); // make sure you have change the right link to file snt.txt !!
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

// analyze number into some prime numbers
int i,t,a=0;
    cout << "Enter your number: ";
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
    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
    system("pause");
}