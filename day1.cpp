#include <iostream>
#include <unistd.h>
#include <stdio.h>
using namespace std;
bool isTrue3();
void arrayCopy (int test[]);
int testArray[10] = {10,20,30,40,50,60,70,80,90,100};
struct Person{
    int age, weight, yearOfBirth;
    string name; 
};
int main(){
    //testing for range loop
    for (auto x:testArray) //auto must be used to determine type of variable 
    {
        cout<<"Hello\n";
        cout<<"";
    }
    
    Person person2;
    person2.age = 47;
    int age = person2.age;

    cout<<"person 2 age: "<<person2.age<<endl;
    // isTrue3();
    //arrayCopy(testArray);
    return 0;
}
//testing array function to copy elements using for range loop
// void arrayCopy(int test[]){
//     int array2[10];
//     for (int x =0; x!=10; x++)
//     {
//         array2[x] = test[x];
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<array2[i];
//     }
// }
//TESTING using switch expressions
// bool isTrue3(){
//     int tries =0;
//     while (tries<4)
//     {
//         cout<<"Enter a valid response y or no\n";
//         char input = 'a';
//         cin>>input;
//         switch(input){
//             case 'y':
//                 return true;
//             case 'n':
//                 return false;
//             default:
//                 cout<<"error wrong input\n";
//                 tries++;
//         }
//     }
//     return 0;
// }
    
    