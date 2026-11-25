#include<iostream>
using namespace std;
/*
Constructor : it is special member function which automatically when object
is created
1.default (no parameter)
2.parameter constructor
3. copy constrauctor(clone object)
*/
class Volume_of_Box{
    public:
        double height,width,depth;
        Volume_of_Box(){
             cout<<"In default constructor"<<endl;
        }
           

};  
int main(){
    Volume_of_Box v1;

    return 0;
}

