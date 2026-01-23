#include<iostream>
using namespace std;
void greet(){
    cout<<"what is your name"<<endl;
     cout<<"how are you"<<endl;
}
int main(){
    greet();
    greet();
}
// library functions
// #include<cmath>
// int main(){
//     // cout<<sqrt(8);
//     // cout<<pow(2,8);
//     cout<<min(56,55);
// calculate combinations using functions
// int fact(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//         f*=i;
//     }
//     return f;
// }


// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     int a=fact(n);
//     int b=fact(r);
//     int c=fact(n-r);
//     cout<<a/(b*c);
// permutation using function
// int fact(int x){
// int f=1;
// for(int i=1;i<=x;i++){
//     f*=i;
// }
// return f;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     int a=fact(n);
//     int b=fact(n-r);{
//     cout<<a/(b);
//     }

// print pascal triangle using functions
// int fact(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//         f*=i;
//     }
//     return f;
// }
// int ncr(int n, int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }


// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
    
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
            
//             cout<<ncr(i,j)<<" ";
//         }
//         cout<<endl;
//     }
// // swap the two numbers
// int main(){
//     int x=4;
//     int y=5;
//     cout<<x<<" "<<y;
//     cout<<endl;
//     int temp= x;
//     x=y;
//     y= temp;
//     cout<<x<<" "<<y<<endl;
//     swap the two numbers without using extra variable
// int main(){
//     int x=4;
//     int y=5;
//     cout<<x<<" "<<y;
//     cout<<endl;
//     x= x+y;
//     y= x-y;
//     x=x-y;
// //     cout<<x<<" "<<y<<endl;
//     swap the two numbers without using extra variable and using function
// void swap(int* a, int* b){
//     int temp= *a;
//     *a = *b;
//     *b = temp;
// }


// int main(){
//     int x=4;
//     int y=5;
//     cout<<x<<" "<<y<<endl;
//     swap(&x, &y);
//     cout<<x<<" "<<y;
// }
    
// // pointer and dereference
// // int main(){
// // int x=3;
// // int* p= &x;{

// // cout<<*p<<endl;
// // *p=23;
// // cout<<x<<endl;

// // }


// }




