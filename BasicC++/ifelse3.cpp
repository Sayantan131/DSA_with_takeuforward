#include<bits/stdc++.h>
using namespace std;
/*
Take the age from the user ans then decide accordingly 
1.if age<25,
print -> not eligible for job
2.if age>=18,
print->"Eligible for job"
3.if age >=55 and age<=57,
print->"eligible for job, but retirement soon"
4.if age>57
print->"retirement time"
*/

int main(){

int age;
cin>>age;
if(age<25){
    cout<<"You are not eliogible for the job";
}
else if(age<=57){
    cout<<"You are eligible for the job";
    if(age>=55){
        cout<<",but retirement soon";
    }
    else{
        cout<<"retirement soon";
    }
}



    return 0;
}