#include<iostream>
#include<string>

using namespace std;
int main(){

    int age ;
    int height;
    int pp;
    string stt ;

    cout << "Enter your age: ";
    cin >> age ;
    if(age <= 20){
        cout << "Enter your height: ";
        cin >> height ;
        if(height < 160){
            stt = "UNFRIEND";
            
        }else{
            if(height < 175 and height >= 160){
                stt = "FRIEND";
            }else{
                cout <<"Enter your property: ";
                cin >> pp;   
                if(pp > 69000000){
                    stt = "MARRIED";
                }else{
                    stt = "ONE-NIGHT-STAND";
                }
            }


        }
    }else{
        if(age < 30){
            cout <<"Enter your property: ";
            cin >> pp;
            if(pp > 10000000){
                stt = "BEST FRIEND";
            }else{
                stt ="UNFRIEND";
             }
        }else{
            stt="UNFRIEND";
        }

    }

    cout << "Your status = " << stt <<"\n";

        return 0 ;






    }

















































