#include<iostream>
using namespace std;
int main(int N,char *r[]){
    double a=0;
    for (int i = 0; i < N; i++)
    {
        a += atof(r[i]);
    }
    if (N<=1)
    {
        cout << "Please input numbers to find average.";
    }
    
    else {
        cout << "---------------------------------\n";
        cout << "Average of "<< N-1 << " numbers = " << a/(N-1)<< endl;
        cout << "---------------------------------\n";
    }
        
     return 0;
}
