#include <iostream>

const int MAX_N = 50;

int solve_p9(){
    int n,m, k[MAX_N];
    
    //input
    std::cin>>n>>m;
    for (int i=0; i<n; i++) {
        std::cin>>k[i];
    }
    
    bool f = false;
    
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            for(int c=0; c<n; c++){
                for(int d=0; d<n; d++){
                    if (k[a]+k[b]+k[c]+k[d]==m) {
                        f=true;
                    }
                }
            }
        }
    }
    
      

if(f){
    std::cout<<"yes"<<std::endl;
    }
    else{
        std::cout<<"no"<<std::endl;
    }
    
    
    return 0;
}