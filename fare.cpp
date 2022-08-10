#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include <time.h>
#include<string.h>
#include <cstdlib>
using namespace std;
void login();
void registr();
void forgot();
void News();
void fare();
void Exit();
void main2();


main()
{        int a;
        int choice;
        system("cls");
        cout<<"***********************************************************************\n\n";
        cout<<"                      Welcome to fare Gh                              \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"[1]Login"<<endl;
        cout<<"[2]Register"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl; 
                        main();
        }
        
}

void login()
{ 
        // system("cls");
        int count;
        int a=0;
        int attempts = 0;
        string user,pass,u,p;
        cout<<"********            System login           ******\n";
        cout<<"***********************************************************************\n";
        cout<<"Username:";
        cin>>user;
        cout<<"Password:";
        cin>>pass;
        cout<<"***********************************************************************\n";
        
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
                {
                        count=1;
                        system("cls");
                }

                      if(attempts>4){
                main();
        }  
        }
        input.close();
        if(attempts>=4){
                main();
        }

        if(count==1 && attempts <4 )
        {
          main2();
        }

        if(p!=pass){
               cout << "\n";
        cout <<"Password Attempt No. : " <<attempts+1;
        cout << "\n";
        cout << "Enter Password Again : ";
        getline(cin, pass, '\n');
        attempts++;
        }else{
                main();
        }

        
}       


void registr()
{
        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;
        
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        main();
        
}

void fare(){
        string cloc,des;
        system("cls");
        cout<<"                      Myfare GH                              \n\n";
        cout<<"***********************************************************************";
        cout<<"current location"<<endl;
        cin>>cloc;
        cout<<"Destination"<<endl;
        cin>>des;
        srand(time(0));
        
        int random=rand()%10;
        system("cls");
        switch(random)
        {
                case 1:
                        cout<<" from "<<cloc<<" to "<<des<<endl;
                        cout<<"type of charge is short distance"<<endl;
                        cout<<"charge is 1.00"<<endl;
                        break;
                case 2:
                        cout<<" from "<<cloc<<" to "<<des<<endl;
                        cout<<"type of charge: Intra-city"<<endl;
                        cout<<"charge is 1.80"<<endl;
                        break;
                case 3:
                        cout<<" from "<<cloc<<" to "<<des<<endl;
                        cout<<"type of charge:Intra-city"<<endl;
                        cout<<"charge is 1.80"<<endl;
                        break;
                case 4:
                        cout<<" from "<<cloc<<" to "<<des<<endl;
                        cout<<"type of charge :Intra-city"<<endl;
                        cout<<"charge : 1.80"<<endl;
                        break;
                case 5:
                        cout<<" from "<<cloc<<" to "<<des<<endl;
                        cout<<"type of charge :Town running"<<endl;
                        cout<<"charge is 2.30"<<endl;
                        break;
                case 6:
                        cout<<" from "<<cloc<<" to "<<des<<endl;
                        cout<<"type of charge :Town running"<<endl;
                        cout<<"charge is 2.30"<<endl;
                        break;
                case 7:
                        cout<<" from "<<cloc<<" to "<<des<<endl;
                        cout<<"type of charge :Town running"<<endl;
                        cout<<"charge is 2.30"<<endl;
                        break;
                case 8:
                        cout<<" from "<<cloc<<" to "<<des<<endl;
                        cout<<"type of charge :Inter-City"<<endl;
                        cout<<"charge is 5.50"<<endl;
                        break;
                case 9:
                        cout<<" from "<<cloc<<" to "<<des<<endl;
                        cout<<"type of charge :Inter-City"<<endl;
                        cout<<"charge is 5.50"<<endl;
                        break;
                case 10:
                        cout<<" from "<<cloc<<" to "<<des<<endl;
                        cout<<"type of charge :Inter-City"<<endl;
                        cout<<"charge is 5.50"<<endl;
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl; 
                        main2();
        }
}

void News(){
        system("cls");
        cout<<"**************News****************\n\n\n\n\n";
        string a[1]={"Transport Fares Increased By 15 Percent in February 2022"};
        for(int i=0;i<1;i++){
           cout<<a[i]<<endl;
        }
                cin.get();
                cin.get();
                cout<<"press enter to continue";
                main2();
}

void Exit(){
        string choice;
        cout<<"Are you sure you really want to quit(Y/N)?:";
        cin>>choice;
        if(choice =="y" || choice == "Y"){
                cout<<"Good Bye.Have a nice day...........";
                main();
        }
        if(choice == "n"){
                cout<<"hello";
        }
}
void main2(){
        int choice;
        cout<<"***********************************************************************\n\n";
        cout<<"                      Myfare GH                              \n\n";
        cout<<"***********************************************************************\n";
        cout<<"[1]News"<<endl;
        cout<<"[2]Calculate fare"<<endl;
        cout<<"[3]Exit"<<endl;
        cout<<"***********************************************************************\n\n";
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
                case 1:
                        News();
                        break;
                case 2:
                        fare();
                        break;
                case 3:
                        Exit();
                        break;
       
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl; 
                        main();
        }
                cin.get();
                cin.get();
}

