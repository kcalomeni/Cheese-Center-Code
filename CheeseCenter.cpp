#include <iostream>
using namespace std;

int main()
{
    //displaying welcome programming message

    cout<<"********************************************************"<<endl;
    cout<<"*************Welcome to the Cheese Center!***************"<<endl;
    cout<<"********************************************************"<<endl;

    cout<<"\n"<<endl;
    //declaring constant values
    const float
    cheese_per_cont=2.76, cost_per_cont=4.12, profit_per_cont=1.45

    int cheese,containers;
    float cost,profit;
    //take input from user
    cout<<"Please enter the total number of kilograms of cheese produced:";
    cin>>cheese;
    containers= cheese/cheese_per_cont+1;
    cout<<"The number of containers to hold the cheese is:...........
    ":<<containers<<endl;
    //calculate the cost and profit
    profit=containers*profit_per_cont;
    cost=containers*cost_per_cont;
    //display the end result
    cout<<"The cost for producing "<<containers<<" container(s) of cheese
    is:..........."<<cost<<endl;
    cout<<"The profit from producing "<<containers<<" container(s) of 
    cheese is:.............."<<profit<<endl;
     return 0;

}