#include <iostream>
#include <string>
#include <support.h>

using std::string;
using std::cout;
using std::endl;


string fbrm(int){
    return "lol";
};

int main(){

    support_test::check_string("1",fbrm(1), "1.Packung");


    return 0;
}
