#include<iostream>
using namespace std;
int main(){
    // id , name , age , gander ,money1,money2,money3,money4,money5,iphone,
    int id;
    string name;
    int age;
    char gander;
    float money1,money2,money3,money4,money5;
    double total_money,iphone;


    cout<<"\tipunt id =";
    cin>>id;
    cout<<"\tipunt name =";
    cin>>name;
    cout<<"\tipunt age =";
    cin>>age;
    cout<<"\tipunt gander =";
    cin>>gander;
    cout<<"\tipunt money1 =";
    cin>>money1;
    cout<<"\tipunt money2 =";
    cin>>money2;
    cout<<"\tipunt money3 =";
    cin>>money3;
    cout<<"\tipunt money4 =";
    cin>>money4;
    cout<<"\tipunt money5 =";
    cin>>money5;
    total_money = money1+money2+money3+money4+money5;
    iphone = total_money/2;
    
    

    cout<<"=====================>>student<<====================="<<endl;
    cout<<"\tipunt id ="<<id<<endl;
    cout<<"\tipunt name ="<<name<<endl;
    cout<<"\tipunt age ="<<age<<endl;
    cout<<"\tipunt gander ="<<gander<<endl;
    cout<<"\tipunt money1 ="<<money1<<endl;
    cout<<"\tipunt money2 ="<<money2<<endl;
    cout<<"\tipunt money3 ="<<money3<<endl;
    cout<<"\tipunt money4 ="<<money4<<endl;
    cout<<"\tipunt money5 ="<<money5<<endl;
    cout<<"\tipunt total_money ="<<total_money<<endl;
    cout<<"\tipunt iphong ="<<iphone<<endl;
    cout<<"=====================>>student<<====================="<<endl;
    


    



    return 0;
}