#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter odd number of rows: ";
    cin>>n;  //this n is bigger one earlier n=3 is now n=5
    int hn = (n+1)/2;

    int i = 1,eqi;

    while (i<=n)
    {
        ///print n-i spaces
        if (i<=hn)
            eqi=i;
        else
            eqi = n-i+1;

        int j = 1;

        while (j<=hn-eqi)
        {
            cout<<" ";
            j = j+1;
        }
        ///print 2i-1 stars
        j = 1;

        while (j<=2*eqi-1)
        {
            cout<<"*";
            j = j+1;
        }

        cout<<endl;
        i = i+1;
    }
}
