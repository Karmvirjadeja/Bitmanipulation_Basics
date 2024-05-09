#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////
int getIthBit(int n, int i){
/////////////////////////////////////////////////////////////////
//here doing the left shift of 1 i times 
   int mask=1<<i; 
   return (n&mask)?1:0;

}

void setIthBit(int &n,int i){
   int mask=1<<i; 
   n=n|mask;
}

void clearIthBit(int &n,int i){
    int Negatedmask = ~(1<<i);
    n=(n&Negatedmask);
}

void updateIthBit(int &n,int i,int val){
 //First lets clear the ith bit 
   clearIthBit(n,i);
   int mask=val<<i;
   n=n|mask;
}


void clearBitsInRange(int &n,int i,int j){
  int a =(1)<<j+1;  //Here i am making 1's on the left side 
  int b =(1)>>i-1; // Here i am making 1's on the right side 

  int mask =a |b; //Here doing the or operations 
  n=n&mask; //Here getting the final answer//completting the rest remajing code 

}




int main(){
   int n=31;
   int i=1;
   int j=3;

   clearBitsInRange(n,i,j);
   cout<<n<<endl;
   
 
  
  
}
