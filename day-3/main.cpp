#include <iostream>


int nsum(int a , int l, int d){
    
    float n= ((l-a)/d)+1;
    int sum=(n/2)*(2*a +(n-1)*d);
    return sum;
}

int main()
{
    int i,j,k;
    std::cout<< "enter i : "<<std::endl;
    std::cin >> i;
    std::cout << "enter j : "<< std::endl;
    std::cin >> j;
    std::cout << "enter k : "<<std::endl;
    std::cin >> k;
    
    int sum=nsum(i,j,1);
    sum+=nsum(j-1,k,-1);
    std::cout << sum;

    return 0;
}
