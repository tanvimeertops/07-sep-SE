// #include<iostream>
// using namespace std;
// int main(){
    
//     return 0;
// }

/*
class :class is a blue print/ class contain 
data member and member function
object: gives permission to access functionality of class
private:can be accessed within class
public :can be accessed anywhere
*/
#include<iostream>
using namespace std;
class student{
    public: 
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