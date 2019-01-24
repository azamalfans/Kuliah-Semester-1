#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int bilangan;  
  
    cout << "Bilangan : ";  
    cin >> bilangan;  
  
    cout << "Faktor Perkalian : ";  
  
    for(int faktor=1; faktor < bilangan; faktor++)  
    {  
        if(bilangan%faktor == 0)  
        {  
            cout << faktor <<",";  
        }  
    }  
      
    cout<<"\b \b";  
    cout<<endl;  
    system("pause");  
}  

