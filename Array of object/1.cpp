#include<iostream>
using namespace std;

class Student {
    private:

        string name;
        int age;
        
    
    public:
        void set(string name, int age) {
            this->name = name;
            this->age = age;
            // this->gender = gender;
        }
        void get() {
            cout<<this->name<<endl;
            cout<<this->age<<endl;
            // cout << "Gender: " << (this->gender ? "Male" : "Female") << endl;
            cout << "----------------------------------------------------" << endl;
        }
    };

    int main(){

        int a;
        string n;

        int size;

        cout<<"Enter size=";
        cin>>size;

        Student s[size];

        for (int i = 0; i < size; i++)
        {
            cout<<"Enter Your Name::";
            cin>>n;

            cout<<"Enter Your Age::";
            cin>>a;

            s[i].set(n,a);

            
        }

        for (int i = 0; i < size; i++)
        {
            s[i].get();
        }
        
        
}


