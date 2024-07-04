#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//*******************************************************************************************************************************
//*************                         STUDENT NAME: BEYZA KOMİŞ                                              ******************
//*************                         ASSİGNMENT #: ASİGNMENT 1                                              ******************
//*************                   i did it all from my knowledge that i gained overtime                        ******************
//*******************************************************************************************************************************



int main (){

    double a,b;                     // Define the interval [a, b] 
    int n;                          //Defining the number of intervals
    double sum1=0.0;                //Defining the sum for the integration of the f(xi) function 
    double sum2=0.0;                //Defining the sum for the integration of the f(xi+1) function
    double sum3=0.0;                //Defining the sum for the integration of the f(e) function

    
cout<<"enter the interval a= "<<flush;
cin>>a;                             //Entering the interval a


cout<<"enter the interval b= "<<flush;
cin>>b;                             //Entering the interval b


cout<<"enter the  number of intervals n= "<<flush;
cin>>n;                             //Entering the number of intervals n

double x=(b-a)/n;                   //Definig the interval step value between [a,b](the delta x)

cout<<"a= "<<a<<endl;  //Showing the intervals on screen 
cout<<"b= "<<b<<endl;
cout<<"n= "<<n<<endl;   

//Printing out the table structure for the screen
cout<<"-------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<setw(10)<<left<<"i"<<setw(10)<<left<<"x[i]"<<setw(10)<<left<<"epsilon[i]"<<setw(10)<<left<<"LHF"<<setw(10)<<left<<"RHF"<<setw(10)<<left<<"MF"<<endl;
cout<<"-------------------------------------------------------------------------------------------------------------------------------"<<endl;


for (int  i = 1; i <= n; i++)//Using the for loop in order to calculate every ith term of the partition 
{   
    double xi=a+(i-1)*x;          //xi is the ith term of the partition 
    double yi=a+(i)*x;            //This is to represent the xi+1 of the partition
    double e=xi+x/2;              //Let e be the midpoints of two interval steps

//According to f(x)=x^3+4x
double m=( xi*xi*xi + 4*xi ) *x;          //Function for the xi...f(xi) for the LHF and multiplying it with delta in order to find the area of each subinterval.
double k=( yi*yi*yi + 4*yi ) *x;          //Function for the xi...f(xi+1) for the RHF and multiplying it with delta in order to find the area of each subinterval.
double t=( e*e*e + 4*e ) *x;              //Function for the xi...f(e) for the MF and multiplying it with delta in order to find the area of each subinterval.

//Printing out the functions by using setw(left) to have blank spaces in between 
cout<< setw(10) << left << i << setw(10) << left << xi << setw(10) << left << e << setw(10) << left << m << setw(10) << left << k << setw(10) << left << t <<endl;

//Summing out every function value
sum1 += m;
sum2 += k;
sum3 += t;

}


//Printing out the sum of the each function
cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<" f(x)=x^3+4x from [0,10] with  "<< n <<"  intervals"<<endl;
cout<<endl;
cout<<"LEFT HAND RULE= "<<sum1<<endl;
cout<<"RiGHT HAND RULE= "<<sum2<<endl;
cout<<"MiD HAND RULE= "<<sum3<<endl;
cout<<endl;


system("pause");
    return 0;
}








