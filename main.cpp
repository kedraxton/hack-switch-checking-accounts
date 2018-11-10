// Kenna Draxton
//hacking and bankrupting the terrorists
//assignment 9

#include <iostream>
#include <cmath>


using namespace std;

//add the two functions, one that will be a clean transaction
//the second function will be the one that switches the balances

void cleanTransaction(int a, int b);
void dirtyTransaction(int& a, int& b);
int amount;



int main()
{
   //starting balances of checking accounts
    int myCheckingAccount = 500;
    int terroristCheckingAccount = 900;
    
    //intro to customer
    cout << "ACCOUNT BALANCES:\n\n"<< endl;
    cout << "My checking account : "<< myCheckingAccount << "\n"<<endl;
    cout << "Terrorist checking Account : "<< terroristCheckingAccount << "\n"<< endl;
    
    //we're going to try and trick the terrorists into thinking that they are receiving a deposit....
    cleanTransaction(myCheckingAccount,terroristCheckingAccount);
    cout << "New account balance for me:" << myCheckingAccount << "\n" << endl;
    cout << "New account balance for terrorist" << terroristCheckingAccount << "\n" << endl;
    
    //hack it! message
    cout<< "Let's hack those bad guys.....how much do you want to deposit and we will switch your account balance with the terrorists at the same time!"<< endl;
    
    dirtyTransaction(myCheckingAccount,terroristCheckingAccount);
    cout << "New account balance for me:" << myCheckingAccount << "\n" << endl;
    cout << "New account balance for terrorist" << terroristCheckingAccount << "\n" << endl;
    

    return 0;
}
//************************************* function 1 *****************************************
//this function is not taking and adding the input......??????
void cleanTransaction (int a, int b)
{
    cout << "how much would you like to deposit? "<< endl;
    cin >> amount;
    a = a + amount;
    b = b + amount;
 
}

//************************************* function 2 *****************************************
//this is running and will take the input and add it to both account but switch your account with the terrorist
void dirtyTransaction (int& a, int& b)
{
    cout << "how much would you like to deposit? "<< endl;
    cin >> amount;
    
    a = a + amount;
    b = b + amount;
    int temp = a;
    a = b;
    b = temp;
}
