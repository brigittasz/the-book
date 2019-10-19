#include <iostream>
using namespace std;

int main(){
    int t, n;
    while(cin>>t){
        for(int j = 0; j<t; j++){
            int max = 0;
            int speed;
            cin>>n;
            for(int i = 0; i<n; i++){
                cin>>speed;
                if(speed>max){
                    max = speed;
                }
            }
            cout<<"Case "<<j+1<<": "<<max<<endl;
        }
    }
}