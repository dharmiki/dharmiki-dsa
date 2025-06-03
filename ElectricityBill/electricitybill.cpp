#include<iostream>
using namespace std;

int main(){

    int units,bill,surcharge;

    cout<<"Enter The Number Of Electricity Units:";
    cin>>units;

    if (units>=50)
    {

        bill=units*0.50;

    }else if(units>=50&&units<=150)
    {
        bill=(50*0.50)+((units-50)*0.75);
    }else if(units>=150&&units<=250){
        bill=(50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }else{
        bill=(50 * 0.50) + (100 * 0.75) + (150 * 1.20) + ((units - 250) * 1.50);
    }

    cout<<"Total Electricity Bill Rs:"<<(float)(bill*1.20)<<endl;

}