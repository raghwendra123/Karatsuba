#include<iostream>
#include<string>
#include<vector>
using namespace std;
const int MAX=10*10;
void read(int a[]);
void display(int a[]);
void multiply(int num1[],int num2[],int result[]);
void multiplyNaive(std::string num1,std::string num2, std::string result);
int main(){
    int num1[100],num2[100],result[MAX]={0};
//    read(num1);
//    read(num2);
    std::string s1="3141592653589793238462643383279502884197169399375105820974944592",
                s2="2718281828459045235360287471352662497757247093699959574966967627";
    std::cout<<s1.size()<<' '<<s2.size();
    std::string s3(s1.size()+s2.size(),'0');
    std::cout<<s3.size();
    multiplyNaive(s1,s2,s3);
    //std::cout<<s1<<" * "<<s2<<" "<<s3;
    std::string str ("now step live...");
//    for (std::string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
//        std::cout << *rit;
////    multiply(num1,num2,result);
//    display(num1);
//    display(num2);
//    display(result);
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
    for(int i=0;a[i]>=0&&i<MAX;i++){
        std::cout<<a[i];
    }
    std::cout<<'\n';
}
//void multiply(int num1[],int num2[],int result[]){
//    int s0,s1,s2;
//    for(int i=0;i<MAX&&num1[i]>=0;i+=2){
//        s0=num1[i]*num2[i];
//        s2=num1[i+1]*num2[i+1];
//        s1=(num1[i]+num1[i+1])*(num2[i]+num2[i+1])-s0-s1;
//        result[i]=s0%10;
//        result[i+1]+=s0/10+s1%10;
//        result[i+2]+=s1/10+s2%10;
//        result[i+3]+=s2/10;
//    }
//}
void multiplyNaive(std::string num1,std::string num2,std::string result)
{
    int i,j;
    for(i=num1.size()-1;i>=0;i--)
    {
        for(j=num2.size()-1;j>=0;j--)
        {
            result[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
            if(result[i+j+1]<0)
            {
                result[i+j]+=(result[i+j+1]-'0'+256)/10;
                result[i+j+1]=(result[i+j+1]-'0'+256)%10+'0';
            }
            if((result[i+j+1]-'0')>=10)
            {
                result[i+j]+=(result[i+j+1]-'0')/10;
                result[i+j+1]=(result[i+j+1]-'0')%10+'0';
            }
        }
    }
    std::cout<<num1<<" * "<<num2<<" = "<<result<<'\n';
}
void naiveBetter(string num1,string num2,string result)
{

}
