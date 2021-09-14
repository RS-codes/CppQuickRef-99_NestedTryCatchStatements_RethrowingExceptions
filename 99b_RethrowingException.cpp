//99 _ C++ Nested Try Catch statements _ Re throwing Exceptions
//99.b Rethrowing exceptions

#include <iostream>
#include <stdexcept>
using namespace std;

int main(){

    //..
    try{
        try{
            throw "a character exception";
        }catch(const char *e){
            cout<<"character type in inner block => "<<e<<endl;
            cout<<"rethrowing the exception.."<<endl;
            //throw; //this will be handled by char type catch block
            throw runtime_error("asdf"); //handled by (...), since no matching block
        }
    }catch(const char *e){
        cout<<"character type in outer block => "<<e<<endl;
    }
    catch(...){
        cout<<"unexpected exception in outer block"<<endl;
    }

    return 0;
}

