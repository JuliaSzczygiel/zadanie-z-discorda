#include <iostream>

using namespace std;

int main()
{
    int t[10]; 
    int i=0;

    for(int i=0; i<10; i++)
    {
        cout << "Podaj "<<i+1<<" liczbe:";
        cin>>t[i];
    }

    int max = t[0];
    
    for(int i=0; i<10; i++)
    {
        if (t[i]>max) 
        {
            max=t[i];
        }   
    }
    
    cout<<"największa z podanych liczb to "<<max;
        
return 0;
}


   