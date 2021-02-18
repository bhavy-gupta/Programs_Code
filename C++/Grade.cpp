#include<iostream>
using namespace std;
int main()
{
    float s1,s2,s3,per;
    cout<<"\nEnter The Marks of three Subjects : ";
    cout<<"\n Physics : ";
    cin>>s1;
    cout<<" Chemistry : ";
    cin>>s2;
    cout<<" Maths : ";
    cin>>s3;
    per=(s1+s2+s3)/300*100;
    cout<<"\nPercentage = "<<per<<"%\n\n";
    if(per>90&&per<=100)
    {
        cout<<"Grade : 'O' ";
    }
    else if(per>80&&per<=90)
    {
        cout<<"Grade : 'A+' ";
    }
    else if(per>70&&per<=80)
    {
        cout<<"Grade : 'A' ";
    }
    else if(per>60&&per<=70)
    {
        cout<<"Grade : 'B+' ";
    }
    else if(per>50&&per<=60)
    {
        cout<<"Grade : 'B' ";
    }
    else
    {
        cout<<"Grade : 'P' ";
    }
    cout<<"\n";
    return 0;
}
