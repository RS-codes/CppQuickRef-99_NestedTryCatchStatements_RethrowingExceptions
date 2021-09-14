//99 _ C++ Nested Try Catch statements _ Re throwing Exceptions
//99.a Nested try catch statements

#include <iostream>
#include <stdexcept>
using namespace std;
int main(){
    //..
    try{
        try{
            throw runtime_error("sdf");
            //throw "a character exception";
        }catch(const char *e){
            cout<<"character type in inner block => "<<e<<endl;
        }
    }catch(const char *e){
        cout<<"character type in outer block => "<<e<<endl;
    }
    catch(...){
        cout<<"unexpected exception in outer block"<<endl;
    }
    return 0;
}
