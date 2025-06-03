// For example,

// Press 1 for English
// Press 2 for Hindi
// Press 3 for Gujarati

// Enter your choice: 1
// Press 1 for Internet Recharge
// Press 2 for Top-up Recharge
// Press 3 for Special Recharge
// Enter your choice: 2
// You have successfully done a Top-up Recharge.
// ---------------------------------------------

// Press 1 for English
// Press 2 for Hindi
// Press 3 for Gujarati
// Enter your choice: 2
// Internet Recharge ke liye 1 dabaiye
// Top-up Recharge ke liye 2 dabaiye
// Special Recharge ke liye 3 dabaiye


// Enter your choice: 1
// Aapne safaltapurvak Internet Recharge kar liya he.
// ---------------------------------------------

// Press 1 for English
// Press 2 for Hindi
// Press 3 for Gujarati
// Enter your choice: 3
// Internet Recharge mate 1 dabavo
// Top-up Recharge mate 2 dabavo
// Special Recharge mate 3 dabavo
// Enter your choice: 3
// Tame safaltapurvak Special Recharge karyu chhe.




#include<iostream>
using namespace std;

int main(){

    int main_choice,sub_choice;

    cout<<"menu-driven program for Telecom call"<<endl;
    cout<<"Press 1 for English"<<endl;
    cout<<"Press 2 for Hindi"<<endl;
    cout<<"Press 3 for Gujrati"<<endl;
    cout<<"4. Exit"<<endl;

    cout<<"Enter your choice:";
    cin>>main_choice;

    switch (main_choice)
    {
    case 1:
             cout<<"Press 1 for Internet Recharge"<<endl;
             cout<<"Press 2 for Top-up Recharge"<<endl;
             cout<<"Press 3 for Special Recharge"<<endl;
             cout<<"Enter your choice:";

            cin>>sub_choice;

            switch (sub_choice)
            {
            case 1: 
                cout<<"You have successfully done a Internet Recharge.";
                break;
            case 2:
                cout<<"You have successfully done a Top-up Recharge.";
                break;
            case 3:
                cout<<"You have successfully done a Special Recharge.";
            default:
                cout<<"Invalid choice in Internet Services."<<endl;
                break;
            } 

            break;

     case 2:  
                cout<<"Internet Recharge ke liye 1 dabaiye"<<endl;
                cout<<"Top-up Recharge ke liye 2 dabaiye"<<endl;
                cout<<"Special Recharge ke liye 3 dabaiye"<<endl;
                cout<<"Enter your choice:";

                cin>>sub_choice;  

                switch (sub_choice)
                {
                case 1: 
                    cout<<"Aapne safaltapurvak Internet Recharge kar liya he.";
                   break;
                case 2: 
                    cout<<"Aapne safaltapurvak Top-up Recharge kar liya he.";
                    break;
                case 3:
                    cout<<"Aapne safaltapurvak Special Recharge kar liya he.";
                    break;
                
                default:
                    cout<<"Invalid choice in Internet Services."<<endl;
                    break;
                }

        break;

        case 3:
                cout<<"Internet Recharge mate 1 dabavo"<<endl;
                cout<<"Top-up Recharge mate 2 dabavo"<<endl;
                cout<<"Special Recharge mate 3 dabavo"<<endl;
                cout<<"Enter your choice:"<<endl;

                cin>>sub_choice; 

                switch (sub_choice)
                {
                case 1: 
                    cout<<"Tame safaltapurvak Internet Recharge karyu chhe.";
                    break;
                case 2:
                    cout<<"Tame safaltapurvak Top-up Recharge karyu chhe.";
                    break;
                case 3:
                    cout<<"Tame safaltapurvak Special Recharge karyu chhe.";
                    break;
                default:
                    cout<<"Invalid choice in Internet Services."<<endl;
                    break;
                }

        break;

        case 4:
            cout<<"Exiting the program. Goodbye!"<<endl;
            break;

        default:
            cout<<"Invalid choice in Main Menu."<<endl;
            break;

    }


    
}