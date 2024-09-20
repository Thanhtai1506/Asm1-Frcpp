#include <iostream>
using namespace std;

int sum(int *a, int *b)
{
   return *a + *b; 
}
int diff(int *a, int *b)
{
    return *a - *b;
}
int main()
{
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"a + b = "<<sum(&a,&b)<<endl;
    cout<<"a - b + "<<diff(&a,&b);
}