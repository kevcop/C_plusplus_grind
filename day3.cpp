//USING STRINGS AND TEMPLATES

#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
template <typename T> T myMax(T x, T y){
    return(x>y)?x:y;
}
struct Entry
{
    string name;
    int number;
};
// ostream& operator<<(ostream& os, const Entry&e){
//     return os<<"{\""<<e.name<<"\","<<e.number<<"}";
// }
vector <Entry> test ={
    {"Kevin Chicas",04}
};
unordered_map<string,int> testMap{
    {"kevin Chicas",48},{"holy moly",49}
}; 
bool isGreater(int a,int b){
    return ((a>b)?true:false);
}
class Naming{
    public:
    string name;
    int age;
};
template <typename T> T myTemplate;
void displayInfo(Naming* person){
    person->name = "Honey";
    cout<<person->name;
}
int main(){
    testMap.insert({"Kevin",1});
    for (auto i = testMap.begin(); i != testMap.end(); i++)
    {
        cout<<i->first<<"\n";
        cout<<i->second<<"\n";
    }
    Naming person1;
    person1.name = "Kevin";
    displayInfo(&person1);
    int b = 9;
    int a = 8;
    cout<<isGreater(a,b);
    // cout<<myMax<int>(3,7)<<endl;
    // cout<<myMax<string>("hello","kevin1");
    // cout << myMax<char>('g', 'e') << endl;
    // string a {"This is cool"};
    // cout<<a;
}


