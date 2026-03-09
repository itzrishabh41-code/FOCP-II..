#include<iostream>
using namespace std;
class addition
{
    private:
    int num1,num2;
    int sum;
    public:
    void getdata(){
        cout<<"enter a no :";
        cin>>num1;
        cout<<"enter another no:";
        cin>>num2;
    }
    void displaysum(){
        sum=num1+num2;
        cout<<"The sum of two number is "<<sum;
    }
};
    int main(){
        addition a1;
        a1.getdata();
        a1.displaysum();
        return 0;

    }



