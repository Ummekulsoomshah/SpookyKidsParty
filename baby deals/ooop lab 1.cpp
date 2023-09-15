#include<iostream>
using namespace std;
int main()
{

int inches,inches_float,foot;
cout<<"enter the height in inches:"<<endl;
cin>>inches;
foot=inches/12;
inches_float=inches%12;

cout<<"this is equivqlent to"<<foot<<"'"<<inches_float<<"\"";
}