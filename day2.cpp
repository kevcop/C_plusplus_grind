#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <vector>
using namespace std;
const int total = 10;
double read_and_sum(int s);
 class Vector{
        public:
            Vector(int s):elem{new double[s]},sz{s}{}
            double &operator[](int i){return elem[i];}
            int size() const{return sz;}
        private:
            double *elem;
            int sz;
    };
    double read_and_sum(int s){
        Vector v(s);
        for (int i = 0; i!=v.size(); ++i)
        {
            cin>>v[i];
        }
        double sum;
        for (int i = 0; i !=v.size(); ++i)
        {
            sum += v[i];
        }
        return sum;
    }
int main(){
    Vector v(6);
//     vector<int> myFirstVector;
//     int test = 0;
//     for (int i; i<=10; i++)
//     {
//         myFirstVector.push_back(test);
//         test++;
//     }
//     for (auto x:myFirstVector)
//     {
//         cout<<x;
//     }

    cout<<"Enter some values: "<<read_and_sum(10)<<endl;
 }
    // //function from book demonstrating the use of vectors
    // struct Vector{
    //     int sz; //number of elements
    //     double* elem; //pointer to elements
    // };
    // void vector_init(Vector& v, int s){
    //     v.elem = new double[s]; //allocate an array of s doubles
    //     v.sz = s;
    // }
    // double read_and_sum(int s){
    //     Vector v;
    //     vector_init(v,s); //allocate s elements for v
    //     for (int i = 0; i!=s; ++i)
    //     {
    //         cin>>v.elem[i];//read into elements
    //     }
    //     double sum = 0;
    //     for (int i = 0; i !=s; ++i)
    //     {
    //         sum += v.elem[i];//take the sum of elements
    //     }
    //     return sum;
    // }
    // class Vector{
    //     public:
    //     Vector(int s):elem{new double[s]},sz{s}{}
    //     double &operator[](int i){return elem[i];}
    //     int size() const{return sz;}
    //     private:
    //     double *elem;
    //     int sz;
    // };
    // double read_and_sum(int s){
    //     Vector v(s);
    //     for (int i = 0; i!=v.size(); ++i)
    //     {
    //         cin>>v[i];
    //     }
    //     double sum;
    //     for (int i = 0; i !=v.size(); ++i)
    //     {
    //         sum += v[i];
    //     }
    //     return sum;
    // }
