///Input n numbers and find their sum using for loop
#include<iostream>
using namespace std;

int main()
{
    int n;
    int i,sum=0,num;

    cout<<"How many numbers do you want to add?-  ";
    cin>>n;
    cout<<"Enter number "<<n<<": ";

    for(i=0;i<n;i++)
    {
        cin>>num;
        sum=sum+num;
    }

    cout<<"Sum of all the "<<n<<" numbers is: "<<sum<<endl;
}


