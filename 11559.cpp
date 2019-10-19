#include <iostream>
using namespace std;

int main(){
    int people, budget, hotels, weekend;
    int perperson;
    int beds;
    int cost;
    while(cin>>people>>budget>>hotels>>weekend){
        int mincost = 2000000;
        for(int i = 0; i<hotels; i++){
            cin>>perperson;

            for(int j = 0; j<weekend; j++){
                cin>>beds;
                if(beds>=people){
                    cost = perperson*people;
                    if(cost<mincost){
                        mincost = cost;
                    }
                }
                else{
                    continue;
                }
            }
        }
        if(mincost<=budget){
            cout<<mincost<<endl;
            
        }
        else{
            cout<<"stay home"<<endl;
        }
    }
}