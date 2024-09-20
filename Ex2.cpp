#include <iostream>

using namespace std;

void exchange(int *a,int *b)
{
    int tmp = *a;
    *a = * b;
    *b = tmp;
}
int main()
{
int a,b;
cout<<"Enter a and b :";cin>>a>>b;
cout<<"a and b before exchange :"<<a<<" and "<<b<<endl;
exchange(&a,&b);
cout<<"a and b after exchange :"<<a<<" and "<<b;
}
