#include<iostream>
const int MAX=100*100;
void read(int a[]);
void display(int a[]);
void multiply(int num1[],int num2[],int result[]);
int main(){
    int num1[100],num2[100],result[]={1,2,3,4,5,-1};
    read(num1);
    read(num2);
    //result=multiply(num1,num2);
    display(num1);
    display(num2);
}
void read(int a[]){
    int num=0;
    std::cout<<"Enter number followed by -1\n";
    for(int i=0;(num)!=-1;i++){
        std::cin>>num;
        a[i]=num;
    }
}
void display(int a[]){
    for(int i=0;a[i]>0&&i<MAX;i++){
        std::cout<<a[i];
    }
    std::cout<<'\n';
}
void multiply(int num1[],int num2[],int result[]){

}
