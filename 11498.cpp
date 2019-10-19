#include <iostream>
using namespace std; 

int main(){
    //declare relevant variables
    int K;
    int N, M; 
    int X, Y;
    while((cin>>K) && K!=0){ 
        cin>>N>>M;
        for(int i = 0; i<K; i++){
            cin>>X>>Y;
            if(N==X || M==Y){
                cout<<"divisa"<<endl;
            }
            else if(Y>M && X>N){
                cout<<"NE"<<endl;
            }
            else if(Y>M && X<N){
                cout<<"NO"<<endl;
            }
            else if(Y<M && X>N){
                cout<<"SE"<<endl;
            }
            else if(Y<M && X<N){
                cout<<"SO"<<endl;
            }
        }
    }
}