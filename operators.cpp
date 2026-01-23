#include<iostream> 
using namespace std;
int main(){


//  Q:wap to print reverse of given number
//     int n;
// cout<<"Enter a number : ";
// cin>>n;
// int r=0;
// while(n!=0){
//     int ld=n%10;
//     r*=10;
//     r+=ld;
//   n=n/10;
  
  
// }{
//   cout<<r;
// }
// Q: wap to print sum of given number and its reverse
    
//        int n;
// cout<<"Enter a number : ";
// cin>>n;
// int sum=0;
// int r=0;
// int temp=n;
// while(temp!=0){
//     int ld=temp%10;
//     r*=10;
//     r+=ld;
//     temp= temp/10;
//     sum=n+r;}
//     {
//         cout<<sum;
//     }
// Q: wap to print factorial of given number
// int n;
// cout<<"Enter a number : ";
// cin>>n;
// int product=1;
// for(int i=1;i<n;i++){
//     product*=i;
    
// }{
//     cout<<product;
// }
// Q: wap to print factorial of n nmubers
int n;
cout<<"Enter a number : ";
cin>>n;

for(int i=1;i<=n;i++){
    int fact=1;

for(int j=1;j<=i;j++){
    fact*=j;
}


    cout<<fact<<endl;
}

return 0;
}