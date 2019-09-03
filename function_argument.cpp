using namespace std;
//classname
class Quest {

//access specifier private,accessible inside class
private:
int a=3;
int b=5;
//access specifier public ,accessible outside class
public:

//member function 
void access_q(int t){

  cout<<"Access given to Quest Global for "<<t<<" hours "<<endl;
}

//end of class Quest 
};

class Cisco {

//access specifier private,accessible inside class
private:
int m=3;
int n=5;
//access specifier public ,accessible outside class
public:

int l=5;
//member function 
void access_c(){

  cout<<"Access given to Cisco"<<endl;
  cout<<"value of n is :"<<n;
}

//end of class Quest 
};


//main function i.e entry point
int main(){
int time;
//Object Ravi is created for class Quest
Quest ravi;

Cisco ram;
//Ravi is accessing member function of  his own class

cout<<"Enter the time input";
cin>>time;
ravi.access_q(time);

//Ram is accessing member function of  his own class
ram.access_c();
//Calculate the size of class
cout<<"Size of this class is"<<sizeof(Quest)<<endl;
cout<<"value of l in Cisco class is"<<ram.l<<endl;
//return 0 from this program
return 0;
}
