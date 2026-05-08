#include<iostream>
using namespace std;
class candy{
    string color;
    int points;

public:
void setcandy(string c,int p){
    color= c;
    points=p;
}
void displaycandy(){
    cout<<"candy color"<< color;
    cout<<"points"<< points;
}
}