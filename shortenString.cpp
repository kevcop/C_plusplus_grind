//PROGRAM THAT USES A FUNCTION TO SHORTEN A STRING
//FUNCTION WILL TAKE A STRING AND AN INT THAT DETERMINES CUTOFF 
//ARRAY FUNCTION TO KEEP COUNT OF REOCCURING LETTERS
//map WILL KEEP TRACK OF FREQUENCIES

#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <map>
using namespace std;
void stringFreq(string input){
    map<char,int> holder;
    for (int i = 0; i < input.size(); i++)
    {
        // char foundKey = input[i];
        if (holder.find(input[i])!=holder.end())
        {
            holder[input[i]]++;
        }else
        {
            holder[input[i]] =1;
        }
    }
    for (auto x:holder)
    {
    cout<<x.first<<x.second<<"\n";
    }
    
    
}
void stringReducer(string input, int cutoff){
    for (int i = 0; i < cutoff; i++)
    {
        cout<<input[i];
    }
    
}
int main(){
    stringReducer("I like the buns",6);
    stringFreq("CCats");
}

