#include<iostream>
using namespace std;

int main(){

    int user,pos,val;
    int size=0;
    int array[1000];

    do
    {
        cout<<"\nPress 1 for CREATE"<<endl;
        cout<<"Press 2 for READ"<<endl;
        cout<<"Press 3 for UPDATE"<<endl;
        cout<<"Press 4 for REMOVE"<<endl;
        cout<<"Press 0 for EXIT"<<endl;
        cout<<"\nEnter Any Operation::";
        cin>>user;
        switch(user)
        {
        case 1:
            cout<<"Enter Size of array :: ";
            cin >> size;
            for (int i = 0; i < size; i++)
            {
                cin >> array[i];
            }
            break;

        case 2:

            //read
            cout<<"\nEntered elements are :: \n";
            for (int i = 0; i < size; i++)
            {
                cout <<" "<<array[i];
            }
            
            break;

         case 3:

            //update
            cout<<"\n Enter Position you want to update :: ";
            cin>>pos;
            cout<<"\n Enter value :: ";
            cin>>val;
            array[pos-1]=val;
            break;

            

        case 4:

            //remove
            
            cout<<"\n Enter Position you want to Delete :: ";
            cin>>pos;
            for (int i = pos-1; i < size-1; i++)
            {
                array[i]=array[i+1];
            }
            size--;
            break;

         default:

            cout<<"Invalid Value!";

            break;
        }
    } while (user!=0);
    
}


