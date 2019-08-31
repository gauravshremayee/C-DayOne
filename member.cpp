#include <iostream>
using namespace std;

class Test{

private:

int a,b;

public:

// functions

void display(){
   //Private ,so class can access
   //Outside class its not accessible directly
   a=2;   
   cout<<"Hello World"<<a;  
}
   
};


int main()

{


Test a;

a.display();

return 0;

}

