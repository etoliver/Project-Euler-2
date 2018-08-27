#include<iostream>

int main(){
    int sum=0,  a=1,    b=1;
    while(a<4000000){
        if(a%2==0)
            sum+=a;
        if(b%2==0   &&  b<4000000)
            sum+=b;
        a+=b;
        b+=a;
    }
    std::cout<<"The value is "<<sum<<std::endl;
    return  0;
}