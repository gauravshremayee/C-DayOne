#include<iostream>
using namespace std;
struct test{
//by default c++ struct provides public access to data and functions

private:
int a ;
int b;

void fun(){

	cout<<"Hello";
}


};

int main(){

struct test t;

printf("value of a is %d ",t.a);
t.fun();
return 0;

}
