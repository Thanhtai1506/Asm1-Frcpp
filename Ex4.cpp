#include <iostream>
#include <string>
using namespace std;

int main()
{
    string lastname,firstname,gender;
    int age,personalid,uenumber;

    cout<<"Last Name : ";cin>>lastname;
    cout<<"First Name : ";cin>>firstname;
    
    for(;;)
    {
        cout<<"\nGender (Male/Female/Other) :";
        cin>>gender;
        if(gender == "Male" || gender == "Female" || gender == "Other")
        {
            break;
        }
        cout<<"Invalid value!!! Please try again";
    }
    do{
        cout<<"Age (1 ~ 100) : ";cin>>age;
        if(age < 1 || age > 100)
        {
            cout<<"Invalid value!!! Please try again\n";
        }
    }while(age < 1 || age > 100);
    return 0;

    cout<<endl;
    cout<<"Last Name :"<<lastname<<endl;
    cout<<"First Name :"<<firstname<<endl;
    cout<<"Gender :"<<gender<<endl;
    cout<<"Age :"<<age<<endl;
}