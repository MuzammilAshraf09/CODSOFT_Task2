//Description: 
// in this task i used class concept to build simple calculator: I ask user to enter the numbers and ask for a specific 
// operation to perform and then show result for that!
#include<iostream>
using namespace std;
class Calculator
{
private:
    int number1;
    int number2;
public:
    Calculator()     // Default Constructor
    {
        number1=0;
        number2=0;
    } 
    void setNumbers(int n, int m)
    {
        number1=n;
        number2=m;
    }

    void addition()
    {
        int result=number1+number2;
        cout<< "\nThe result of the addition of the two numbers is : "<< result;
    }  
    void subtraction()
    {
        int result=number1-number2;
        cout<< "\nThe result of the subtraction of the two numbers is : "<< result;
    }
    void multiplication()
    {
        int result=number1*number2;
        cout<< "\nThe result of the multiplication of the two numbers is : "<< result;
    }
    void division()
    {
        int result=number1*number2;
        cout<< "\nThe result of the division of the two numbers is : "<< result;
    }

};
int main()
{
    Calculator cal;   // Object created
    int n1,n2;
    cout<<"Enter the two numbers on wich you want to perform the operations : ";
    cin>> n1;
    cin>>n2;
    cal.setNumbers(n1, n2);
    cout<<"\n1.Addition \n2.Subtraction \n3.Multiplication\n4.Division\n";
    cout<<"Enter respective number for the operation you wanna perform: ";
    cin>>n1;
    if(n1==1)
        cal.addition();
    else if(n1==2)
        cal.subtraction();
    else if(n1==3)
        cal.multiplication();
    else if(n1==4)
        cal.division();
    else
    {
        cout<<"\n pls enter the valid choice from 1 to 4: ";
        cin>> n1;
        if(n1==1)
            cal.addition();
        else if(n1==2)
            cal.subtraction();
        else if(n1==3)
            cal.multiplication();
        else if(n1==4)
            cal.division();
    }
     



    return 0; 
}
