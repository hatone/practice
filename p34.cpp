/*
 *  p34.cpp
 *  practice
 *
 *  Created by 大島 孝子 on 11/08/07.
 *  Copyright 2011 Future Univercity ,Hakodate. All rights reserved.
 *
 */


#include <iostream>


const int MAX_N=100000000;
int n;
int a[MAX_N];
int k;


bool dfs(int i, int sum){
    
    if(i==n)return sum==k;
    
    if(dfs(i+1,sum))return true;
    if(dfs(i+1,sum+a[i]))return true;
    
    return false;

}

void solv(){
    
    
    if(dfs(0,0))std::cout<<"yes"<<std::endl;
    else std::cout<<"no"<<std::endl;
}

int main(){

    
    std::cin>>n;
    
    for (size_t i=0; i<n; i++) {
        std::cin>>a[i];
    }

    std::cin>>k;
    

    solv();
    
    return 0;
}
