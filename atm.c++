#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class deposit
{int b,o,amt,p,bal;

    public:
    void depo(){ifstream read("atmpin.txt");
    cout<<"\t\t\t\tENTER YOUR PIN"<<endl;
    cin>>p;
    while(read>>o)
    {
        if(p==o)
        {   read.close();
        ifstream read("Balance.txt");
        read>>bal;
        read.close();
            cout<<"\t\t\t\tPlease Enter AMOUNT to be Deposited"<<endl;
            cin>>amt;
            cout<<"\t\t\t\tPlease Insert the Cash into the Tray"<<endl;
            cout<<"\t\t\t\tPress 0 to process Your Transcition"<<endl;
            cin>>b;
            ofstream write("Balance.txt");
            write<<bal+amt;
            write.close();
            cout<<"Do You Want View Your Balance\nPress Y To Cancel Press N"<<endl;
                    char ch;
                    cin>>ch;
                    if(ch=='Y'){ifstream read("Balance.txt");
                    int bal2;
                    read>>bal2;
                        cout<<"\t\t\t\tYour Balance is:"<<endl<<endl<<"\t\t\t\t"<<bal2<<endl<<endl<<endl;
                    }
                    else{
                        continue;
                    }
            cout<<"\t\t\t\tYOUR TRANSCITION IS COMPLETED"<<endl;
            cout<<"\t\t\t\t____________THANK_YOU____________"<<endl;
        }
        else
        {
                cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
                cout<<"\t\t\t\t_________THANK-YOU___________";
            }
    }
    }
};
class transfer
{int o,p,c,amt,accno,caccno,bal;
    public:
    void trans(){ifstream read("atmpin.txt");
    cout<<"\t\t\t\tENTER YOUR PIN"<<endl;
    cin>>p;
    while(read>>o)
    {
        if(p==o)
        {
            read.close();
            cout<<"\t\t\t\tPlease Enter AMOUNT to be Transferred"<<endl;
            cin>>amt;
            cout<<"\t\t\t\tPlease Enter the Account Number of the Account to be Transferred"<<endl;
            cin>>accno;
            cout<<"\t\t\t\tPlease Re-Enter the Account Number of the Account to be Transferred"<<endl;
            cin>>caccno;
            ifstream read("Balance.txt");
            read>>bal;
            if(accno==caccno)
            {read.close();
                cout<<"\t\t\t\tPress 0 to Process Your Transcition"<<endl;
                cin>>c;
                ofstream write("Balance.txt");
                write<<bal-amt;
                cout<<"Do You Want View Your Balance\nPress Y To Cancel Press N"<<endl;
                    char ch;
                    cin>>ch;
                    if(ch=='Y'){ifstream read("Balance.txt");
                    int bal2;
                    read>>bal2;
                        cout<<"\t\t\t\tYour Balance is:"<<endl<<endl<<"\t\t\t\t"<<bal2<<endl<<endl<<endl;
                    }
                    else{
                        continue;
                    }
                cout<<"\t\t\t\tYOUR TRANSCITION IS COMPLETED"<<endl<<endl;
                cout<<"\t\t\t\t____________THANK_YOU____________"<<endl;
            }
        }
        else
        {
                cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
                cout<<"\t\t\t\t_________THANK-YOU___________";
            }
    }
    }
};
class pinchange
{int o,p,p1,p2,otp,ot,mobileno;
    public:
    void pinchang()
    {
        ifstream read("atmpin.txt");
    cout<<"\t\t\t\tENTER YOUR OLD PIN"<<endl;
    cin>>p;
    while(read>>o)
    {
        if(p==o)
        {
            read.close();
            ifstream read("otp.txt");
            cout<<"\t\t\t\tENTER OTP YOU RECIEVED"<<endl;
            cin>>otp;
            while(read>>ot)
            {
                if(otp==ot)
                {
                    cout<<"\t\t\t\tPlease Enter NEW PIN"<<endl;
                    cin>>p1;
                    cout<<"\t\t\t\tPlease Re-Enter NEW PIN"<<endl;
                    cin>>p2;
                    ofstream write("atmpin.txt");
                    if(p1==p2)
                    {write<<p1;
                        cout<<"\t\t\t\tYOUR HAVE SUCCESSFULLY CHANGED YOUR PIN"<<endl<<endl;
                        cout<<"\t\t\t\t____________THANK-YOU_______________"<<endl;
                    }else
                    {
                        cout<<"\t\t\t\tYOUR PIN CHANGE IS UNSUCCESSFULL"<<endl<<endl;
                        cout<<"\t\t\t\tPlease Try Again"<<endl;
                        cout<<"\t\t\t\t____________THANK-YOU_______________"<<endl;
                    }
                }else
                {
                cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
                cout<<"\t\t\t\t_________THANK-YOU___________";
            }
            }
            }else
            {
                cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
                cout<<"\t\t\t\t_________THANK-YOU___________";
            }
        }
    }
};
class ministatement
{int o,p,d;
    public:
    void ministate()
    {
        ifstream read("atmpin.txt");
        cout<<"\t\t\t\tENTER YOUR PIN"<<endl;
        cin>>p;
    while(read>>o)
    {
        if(p==o)
        {
            cout<<"\t\t\t\tDO YOU PRINT YOUR MINISTATEMENT PLEASE PRESS 0"<<endl;
            cin>>d;
            cout<<"\t\t\t\tPlease Collect Your Ministatement"<<endl;
            cout<<"\t\t\t\t___________THANK-YOU____________";
        }else
        {
                cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
                cout<<"\t\t\t\t_________THANK-YOU___________";
            }
    }
    }
};
class fastcash
{int o,p,opt,bal;

    public:
    void fastcas()
    {
        ifstream read("atmpin.txt");
        cout<<"\t\t\t\tENTER YOUR PIN"<<endl;
        cin>>p;
        while(read>>o)
        {
            if(p==o)
            {
                read.close();
                ifstream read("Balance.txt");
                read>>bal;
                read.close();
                cout<<"\t\t\t\t\tPlease select the Amount"<<endl<<endl;
                cout<<"\t\t\t1)100\t\t\t\t\t5)2000"<<endl;
                cout<<"\t\t\t2)200\t\t\t\t\t6)3000"<<endl;
                cout<<"\t\t\t3)500\t\t\t\t\t7)4000"<<endl;
                cout<<"\t\t\t4)1000\t\t\t\t\t8)5000"<<endl;
                cin>>opt;
                ofstream write("Balance.txt");
                switch (opt)
                {
                case 1:write<<(bal-100);
                break;
                case 2:write<<(bal-200);
                break;
                case 3:write<<(bal-500);
                break;
                case 4:write<<(bal-1000);
                break;
                case 5:write<<(bal-2000);
                break;
                case 6:write<<(bal-3000);
                break;
                case 7:write<<(bal-4000);
                break;
                case 8:write<<(bal-5000);
                break;         
                }
                if(opt>=1&&opt<=8)
                {
                    cout<<"\t\t\t\tCASH IS BEING DISPENSED......"<<endl<<endl;
                    cout<<"\t\t\t\tPLEASE COLLECT YOUR CASH AND COUNT IT"<<endl;
                    cout<<"Do You Want View Your Balance\nPress Y To Cancel Press N"<<endl;
                    char ch;
                    cin>>ch;
                    if(ch=='Y'){
                        int bal2;
                        ifstream read("Balance.txt");
                        read>>bal2;
                        cout<<"\t\t\t\tYour Balance is:"<<endl<<endl<<"\t\t\t\t"<<bal2<<endl<<endl<<endl;
                    }
                    else{
                        continue;
                    }
                    cout<<"\t\t\t\tYOUR TRANSCITION IS COMPLETED"<<endl<<endl;
                    cout<<"\t\t\t\t_________THANK-YOU___________";
                }else
                {
                    cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
                    cout<<"\t\t\t\t_________THANK-YOU___________";
                }
            }else
            {
                cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
                cout<<"\t\t\t\t_________THANK-YOU___________";
            }
        }
    }
};
class cashwith
{int o,p,amt,de,bal;
    public:
    void cashwit()
    {
        ifstream read("atmpin.txt");
        cout<<"\t\t\t\tENTER YOUR PIN"<<endl;
        cin>>p;
        while(read>>o)
        {
            if(p==o)
            {read.close();
                cout<<"\t\t\t\tEnter Amount to be Withdrawn"<<endl;
                cin>>amt;
                cout<<endl<<"\t\t\t\t\tPlease select Demonitation"<<endl<<endl;
                cout<<"\t\t\t1)100\t\t\t2).500"<<endl;
                cin>>de;
                ifstream read("Balance.txt");
                read>>bal;
                read.close();
                if(de>=1&&de<=2)
                {  char ch;
                    cout<<"\t\t\t\tCASH IS BEING DISPENSED......"<<endl<<endl;
                    ofstream write("Balance.txt");
                    write<<bal-amt;
                    write.close();
                    cout<<"\t\t\t\tPLEASE COLLECT YOUR CASH AND COUNT IT"<<endl;
                    cout<<"Do You Want View Your Balance\nPress Y To Cancel Press N"<<endl;
                    cin>>ch;
                    if(ch=='Y'){ifstream read("Balance.txt");
                    int bal2;
                    read>>bal2;
                        cout<<"\t\t\t\tYour Balance is:"<<endl<<endl<<"\t\t\t\t"<<bal2<<endl<<endl<<endl;
                    }
                    else{
                        continue;
                    }
                    cout<<"\t\t\t\tYOUR TRANSCITION IS COMPLETED"<<endl<<endl;
                    cout<<"\t\t\t\t_________THANK-YOU___________";
                }else
                {
                    cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
                    cout<<"\t\t\t\t_________THANK-YOU___________";
                }
            }else
            {
                cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
                cout<<"\t\t\t\t_________THANK-YOU___________";
            }
        }
    }
};
class balance
{int o,p,bal;

    public:    
    void balanc()
    {
        ifstream read("atmpin.txt");
        cout<<"\t\t\t\tENTER YOUR PIN"<<endl;
        cin>>p;
        while(read>>o)
        {
            if(p==o)
            {read.close();
            ifstream read("Balance.txt");
            read>>bal;
                cout<<"\t\t\t\tYour Balance is:"<<endl<<endl;
                cout<<"\t\t\t\t\t"<<bal<<endl;
                cout<<"\t\t\t\t_________THANK-YOU___________";
            }else
            {
                cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
                cout<<"\t\t\t\t_________THANK-YOU___________";
            }
        }
    }
};
class atm:public deposit,public transfer,public pinchange,public ministatement,public fastcash,public cashwith,public balance
{
    public: int a,choice,pin; 
    atm()
    {
        cout<<"\t\t\t\t____________Welcome to State Bank of India_____________"<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\t\tPlease Insert card and Press 0";
        cin>>a;
        cout<<endl<<endl<<endl;
        cout<<"\t\t\t\t\tPlease Enter your choice"<<endl<<endl<<endl;
        Mainmenu();
        cin>>choice;
        choicesel();
    }void Mainmenu()
    {
        cout<<"\t\t\t1.DEPOSIT\t\t\t\t\t\t\t5.FAST CASH"<<endl;
        cout<<"\t\t\t2.TRANSFER\t\t\t\t\t\t\t6.CASH WITHDRAWAL"<<endl;
        cout<<"\t\t\t3.PIN CHANGE\t\t\t\t\t\t\t7.BALANCE INQUIRY"<<endl;
        cout<<"\t\t\t4.MINI STATEMENT\t\t\t\t\t\t8.EXIT"<<endl;
    }void choicesel()
    {
        switch (choice)
        {
        case 1:depo();
        break;
        case 2:trans();
        break;
        case 3:pinchang();
        break;
        case 4:ministate();
        break;
        case 5:fastcas();
        break;
        case 6:cashwit();
        break;
        case 7:balanc();
        break;
        case 8:cout<<"\t\t\t\tTRANSCITION FAILED...."<<endl;
            cout<<"\t\t\t\t_________THANK-YOU___________";
        break;
        default:cout<<"please make valid choice";
        Mainmenu();
        break;
        }
    }
};
int main()
{
    atm obj;
}