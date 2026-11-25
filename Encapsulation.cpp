#include<iostream>
using namespace std;
/*
Encapsulation :
                    same class      diff class      child class 
private                 yes             no              no
protected               yes             no              yes      
public                  yes             yes             yes
*/
class student{
    private: 
        int roll_no;
        string name;
};
int main(){
    student s1;
    s1.roll_no=34;
    s1.name="Roshni";
    cout<<"Roll no is "<<s1.roll_no<<endl;
    cout<<"Name is "<<s1.name<<endl;
    return 0;
}

