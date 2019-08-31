#include<iostream>

using namespace std;
#You get direct access to all elements of the std namespace. 

#But suppose you want to use only the std::cout or std::endl so it would be better to use the directive:

#using std::cout;
#using std::endl;
using namespace std;

class Test{

private:
int a,b;

public:

};


int main()

{


Test a;


return 0;

}


