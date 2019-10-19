#include <iostream>
using namespace std;

int main(){
    int lines, cols;
    char ch;
    int field = 0;
    while(cin>>lines>>cols && lines!= 0 && cols!=0){
        field++;
        if(field!=1){
            cout<<endl;
        }
        cout<<"Field #"<<field<<":"<<endl;
        //make array for values
        int** rows = new int*[lines];
        for(int i = 0; i<lines; i++){
            rows[i] = new int[cols];
        }
        //store values
        for(int i = 0; i<lines; i++){
            for(int j = 0; j<cols; j++){
                cin>>ch;
                if(ch == '*'){
                    rows[i][j] = 9;
                }
                else{
                    rows[i][j] = 0;
                }
            }
        }

        //put in values
        for(int i = 0; i<lines; i++){
            for(int j = 0; j<cols; j++){
                if(rows[i][j] == 9){
                    if((j-1)>=0 && i>=0 && (rows[i][j-1])!= 9){
                        rows[i][j-1] += 1;
                    }
                    if((j-1)>=0 && (i-1)>=0 && (rows[i-1][j-1])!= 9){
                        rows[i-1][j-1] += 1;
                    }
                    if((i-1)>=0 && j>=0  && (rows[i-1][j])!=9){
                        rows[i-1][j] += 1;
                    }
                    if((i-1)>=0 && (j+1)<=(cols-1) && (rows[i-1][j+1])!=9){
                        rows[i-1][j+1] += 1;
                    }
                    if(i>=0 && (j+1)<=(cols-1) && (rows[i][j+1])!=9){
                        rows[i][j+1] += 1;
                    }
                    if((i+1)<=(lines-1) && (j+1)<=(cols-1) && (rows[i+1][j+1])!=9){
                        rows[i+1][j+1] += 1;
                    }
                    if((i+1)<=(lines-1) && j>=0 && (rows[i+1][j])!= 9){
                        rows[i+1][j] += 1;
                    }
                    if((i+1)<=(lines-1) && (j-1)>=0 && (rows[i+1][j-1])!= 9){
                        rows[i+1][j-1] += 1;
                    }
                }
            }
        }

        //print values
        for(int i = 0; i<lines; i++){
            for(int j = 0; j<cols; j++){
                if(rows[i][j] == 9){
                    cout<<'*';
                }
                else{
                    cout<<rows[i][j];
                }
            }
            cout<<endl;
        }
        
    }
}