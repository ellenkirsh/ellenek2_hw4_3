//
//  main.cpp
//  ellenek2_hw4_3
//
//  Created by Ellen Kirsh on 9/27/21.
//

#include <iostream>
#include<random>
using namespace std;

int main() {
    int lottery[5], user[5];
    int sum=0;
    for(int i=0;i<5; i++){
        lottery[i] = rand()% 10 + 1;
    }
    cout << "Enter your 5 lottery numbers: \n";
    for(int i=0; i<5; i++){
        cin >> user[i];
        cout << "\n";
    }
    cout << "The winning numbers are: ";
    for(int i=0; i<5; i++){
        cout << lottery[i] << " ";
    }
    cout << "\n";
    for(int i=0; i<5; i++){
        if((lottery[i]==user[i]) || (lottery[i] == user[i]+1) ||(lottery[i]==user[i]-1)){
            int x = 1;
            sum = sum + x;
        }else{
            int x = 0;
        }
    }
    if(sum == 5){
        cout << "YOU ARE A BIG PRIZE WINNER!\n";
    }else{
        cout << "You guessed "<< sum << " number(s) within 1 of the winning numbers\n";
    }
    return 0;
}
