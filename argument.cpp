#include<iostream>
#include<stdlib.h>
using namespace std;

class Sum{

private:

public:

int sum(int m,int n,int o){

  return m+n+o;

}

};

int main(int argc,char *argv[]){
//add first and second argument
int k=atoi(argv[1]);

int l=atoi(argv[2]);

int h=atoi(argv[3]);
Sum s;
int res=s.sum(k,l,h);
cout<<"Argument count is "<<argc<<endl;
cout<<"Result is :"<<res<<endl;

return 0;

}
