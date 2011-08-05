#include <iostream>

const int MAX_N = 50;
int n,m,k[MAX_N];


bool binary_search(int x){
    int l=0, r=n;
    
    while (r-l >=1) {
        int i=(l+r)/2;
        if(k[i]==x)return true;
        else if(k[i] <x)l=i+1;
        else r=i;
    }
    
    return false;
}

void solve_p28(){
    
    std::sort(k,k+n);
    
    bool f= false;
    
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            for(int c=0; c<n; c++){
                if(binary_search(m-k[a]-k[b]-k[c])){
                    f=true;
                }
            }
        }
    }
    
    if(f)std::cout<<"yes"<<std::endl;
    else std::cout<<"no"<<std::endl;
    
}


int main (){
    
    //input
    std::cin>>n>>m;
    
    for (size_t i=0; i<n; i++) {
        std::cin>>k[i];
    }
    
    
    solve_p28();
    
    return 0;
}