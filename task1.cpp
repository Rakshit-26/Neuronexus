// TASK 1 - NUMBER GUESSING GAME

// Create a program that generates a random number and asks the user to guess it. Provide feedback on
// whether the guess is too high or too low until the user guesses the correct number.

#include <bits/stdc++.h>
#define int long long
#include <cstdlib> 
#include <iostream> 
#include <time.h> 
using namespace std;

int32_t main(){
    cout<<"**WELCOME TO NUMBER GUESSING GAME**"<<endl;
    srand(time(0));
    
    int lb=1, ub=10;
    // enter range;
    cout<<"Enter the range(inclusive)-"<<endl;
    cout<<"Lowerbound: ";
    cin>>lb;
    cout<<"Upperbound: ";
    cin>>ub;

    int val = (rand() % (ub-lb+1)) + lb;
    // cout<<val<<endl;
    int n, count=0;
	while(true){
        count++;
        cout<<"What is your guess..? ";
        cin>>n;
        if(n>val) cout<<"TOO HIGH"<<endl;
        else if(n<val) cout<<"TOO LOW"<<endl;
        else{
            cout<<"CORRECT ANSWER!!"<<endl<<endl;
            break;
        }
        cout<<"------------------"<<endl;
        cout<<"GUESS AGAIN!!"<<endl<<endl;
	}
    if(count<=5) cout<<"BRAVO, You took only "<<count<<" guesses"<<endl;
    else cout<<"Keep it up, You took "<<count<<" guesses"<<endl; 
    return 0;
}