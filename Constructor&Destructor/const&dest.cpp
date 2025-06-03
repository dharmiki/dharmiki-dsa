#include<iostream>
using namespace std;

class person{

    public:
    //perameter constructor
    int age;
    string name;
    
    person(int a,string n){

        age=a;
        name=n;
        
        cout<<"Age::"<<a<<endl;
        cout<<"Name::"<<n<<endl;
    }

    //destructor

    ~person(){
        cout<<"hii......."<<endl;
    }

};

int main(){

    person p1(20,"ABC");
    

}

