#include <iostream>

using namespace std;

class Bank
 {
    long acno;
    string name;
    long balance;
     static int  count;

     public:
	
    void OpenAccount()
    {
    	
    	cout<<"Enter  Customer Details :"<<endl;
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        getline(cin>>ws,name);
        cout << "Enter  Balance: ";
        cin >> balance;
        cout<<endl;
        
    }
    
    void ShowBalance()
    {
        cout << "Balance: " << balance << endl;
        count++;
    }
    void Deposit()
    {
        long Damt;
        cout << "Enter Amount U want to deposit? ";
        cin >> Damt;
        balance = balance + Damt;
        count++;
    }
    void Withdrawal()
    {
        long Wamt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> Wamt;
        if (Wamt <= balance)
            balance = balance - Wamt;
        else
        {
        	cout << "Insufficient Balance..." << endl;
		}
            
        count++;
    }
    
    static void showCount()
    {
    	cout << endl << "Total Operations = " << count;
	}
   
    long Search(long a);
    
};

long Bank :: Search(long a)

{
	 if (acno == a)
	 
        return (1);
        
    else
    return (0);
}

int Bank::count;

int main()
{
    Bank C[3];

    int found = 0, ch, i;
    long a;
    for (i = 0; i <3; i++) 
	{
        C[i].OpenAccount();
    }

    do 
	{

	cout << "\n\n1.)Deposite\n2.)Withdraw\n3.)Display Balance\n4.)Display Total Operation\n5.)Exit" << endl;

        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch)
		 {
        case 1: 
        cout << "Enter Account Number To Deposite Balance : ";
            cin >> a;
            for (i = 0; i <3; i++) 
			{
                found = C[i].Search(a);
                if (found) 
           
                C[i].Deposit();
            }
            if(!found)
            {
             cout<<"Sorry !!! ERROR ....A/C No.";	
			}
			 break;
			 
        case 2:
        	cout << "Enter Account Number To Withdrawal Balance :  ";
            cin >> a;
            for (i = 0; i <3; i++)
			 {
                found = C[i].Search(a);
                if (found) 
				C[i].Withdrawal();
				}
				if(!found)
			
				{
				
			  cout<<"Sorry !!! ERROR ....A/C No.";	
	         	}
			break;
            
        case 3: 
        cout << "Enter Account Number To Show Balance : ";
            cin >> a;
            for (i = 0; i <3; i++) 
			{
                found = C[i].Search(a);
                if (found) 
                {
                C[i].ShowBalance();
				}
              	
			  }
			  if(!found)
			  {
			  	cout<<"Sorry !!! ERROR ....A/C No.";
			  }
			  
                    break;
                
          
        case 4:
        	Bank::showCount();
        	break;
        	
        case 5: 
        
            cout <<endl<< "\nHave a Good Day....." << endl;
            exit(0);
            break;
            
        default:
            cout <<endl<< "Wrong Option" << endl;
            break;
        
	}
	
    } while (ch <= 5);
    
    return 0;
}