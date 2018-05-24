using namespace std;

int main()
{
int N,i,j;
cin>>N;
if(N<=1000)
{
    for(i=N;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<"1"<<" ";
        }
        cout<<endl;
    }
}
else
{
    cout<<"Enter valid input";
}

    return 0;
}
