#include<iostream>
using namespace std;
int main(){


    int id;
    string name;
    char gender;
    int age;
    float score1,score2,score3,score4,score5;
    double total_score,average;


    cout<<"\tinput id : ";
    cin>>id;
    cout<<"\tinput name : ";
    cin>>name;
    cout<<"\tinput gender : ";
    cin>>gender;
    cout<<"\tinput age : ";
    cin>>age;
    cout<<"\tinput score1 : ";
    cin>>score1;
    cout<<"\tinput score2 : ";
    cin>>score2;
    cout<<"\tinput score3 : ";
    cin>>score3;
    cout<<"\tinput score4 : ";
    cin>>score4;
    cout<<"\tinput score5 : ";
    cin>>score5;
    total_score = score1+score2+score3+score4+score5;
    //cin>>total_score
    average= total_score/5;
    
    

    cout<<"===========>>input<<==========="<<endl;
     cout<<"\tinput student id  :"<<id<<endl;
     cout<<"\tinput student name : "<<name<<endl;
     cout<<"\tinput student gender : "<<gender<<endl;
     cout<<"\tinput student age : "<<age<<endl;
     cout<<"\tinput student score1 : "<<score1<<endl;
     cout<<"\tinput student score2 : "<<score2<<endl;
     cout<<"\tinput student score3 : "<<score3<<endl;
     cout<<"\tinput student score4 : "<<score4<<endl;
     cout<<"\tinput student score5 : "<<score5<<endl;
     cout<<"\tinput student totla_score :"<<total_score<<endl;
     cout<<"\tinput student average :"<<average<<endl;
    
     
     
    return 0;
}