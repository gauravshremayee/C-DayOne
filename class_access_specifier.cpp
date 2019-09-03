#include<iostream>
using namespace std;
class test{
//by default data and functions are private in a class,if we dont provide private ,public or protected access specifiers
public:
int a =10;
int b;

private:
void fun(){

	cout<<"Hello";
}


protected:
int g=10;

};

int main(){

test t;

printf("value of a is %d ",t.a);
//t.fun();
printf("value of g is %d ",t.g);
return 0;

}
