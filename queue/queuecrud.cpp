
#include<iostream>
using namespace std;

void Enqueue(int data,int first,int queue[]){
    
    queue[first]=data;

    for (int i = 0; i <= first; i++)
    {
        cout<<queue[i] << " ";
    }
    
}
void Dequeue(int queue[],int &first){
   
    for (int i = 0; i < first; i++) { // Shift elements to the left
        queue[i] = queue[i + 1];
    }
    first--; // Decrement 'first'
    for (int i = 0; i <= first; i++) {
        cout <<queue[i] << " ";
    }


}
void Front(int queue[]){

    cout<< queue[0];
    
}
void Rear(int first,int queue[]){

    cout<< queue[first];
  
}
void isEmpty(int queue[],int first){

    if (queue[first] == 0)
    {
        cout<<"The stack is empty";
    }
    else
    {
        cout<<"The stack is not empty";
    }
    
}
void isFull(int queue[],int first,int size){

    if (queue[first] == size)
    {
        cout<< "The stack is full";
    }
    else
    {
        cout<< "The stack is not full";
    }
    
}
void Size(int first){

    cout<<first;
    
}

int main()
{
    int user,size;

    cout<< "enter the size of array = ";
    cin >>size;

    int *queue = new int[size];

    int first=-1;

    do
    {

        cout<<"-----------------OPTIONS::-----------------"<<endl;

        cout<< "1.Enqueue" << endl;
        cout<< "2.Dequeue" << endl;
        cout<< "3.Front "  << endl;
        cout<< "4.Rear"  << endl;
        cout<< "5.isEmpty"  << endl;
        cout<< "6.isFull"  << endl;
        cout<< "7.size"  << endl;
        cout<<"0.exit"<<endl;

        cout<<"------------------------------------------"<<endl;

        cout<< "Enter the above option = ";
        cin>> user;

        cout<<"------------------------------------------"<<endl;

        switch (user)
        {
        case 1:

        first++;
        int data;

        cout<<"enter the data = ";
        cin>>data;
          
        Enqueue(data,first,queue);

        cout<< "---------------------------------" << endl;

        break;

        case 2:
         
            Dequeue(queue,first);
               cout<< "---------------------------------" << endl;
            break;
        case 3:
            Front(queue);
               cout<< "---------------------------------" << endl;
            break;
        case 4:
            Rear(first,queue);
               cout<< "---------------------------------" << endl;
            break;
        case 5:
            isEmpty(queue,first);
               cout<< "---------------------------------" << endl;
            break;
        case 6:
           isFull(queue,first,size);
               cout<< "---------------------------------" << endl;
            break;
        case 7:
           Size(first);
               cout<< "---------------------------------" << endl;
            break;
        case 0:
            cout<<"Exiting the program. Goodbye!"<<endl;
            cout<< "---------------------------------" << endl;
            break;
        default:
            cout<< "invalid input..please try again:)";
            break;
        }
    } while (user != 0);
    
}