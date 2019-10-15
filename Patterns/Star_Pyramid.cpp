#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        ///print n-i spaces
        int j = 1;

        while (j<=n-i)
        {
            cout<<" ";
            j = j+1;
        }
        ///print 2i-1 stars
        j = 1;

        while (j<=2*i-1)
        {
            cout<<"*";
            j = j+1;
        }

        cout<<endl;
        i = i+1;
    }
}
