#include<iostream>
using namespace std;
class average
{
    private:
int num1,num2,num3;
float avg;
public:
void getdata(){
cout <<"enter first no : ";
cin>>num1;
cout <<"enter second no : ";
cin>>num2;
cout <<"enter third no : ";
cin>>num3;
}
 void displayaverage(){
        avg = (num1+num2+num3)/3;
        cout<<"The avg is "<<avg;

}
};
    int main(){
        average a1;
        a1.getdata();
        a1.displayaverage();
        return 0;

    }