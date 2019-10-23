#include <iostream>
#include <cstring>
#include <algorithm>
#include <locale>
using namespace std;

int main(){
    //make a string dictionary array of size 1000
    string* dictionary = new string[1010];
    string* alphadict = new string[1010];
    int counter = 0;
    string word;
    int match;
    //while cin string and string is not #
    while(cin>>word && word!="#"){
        dictionary[counter] = word;
        alphadict[counter] = word;
        counter++;
    }

    sort(dictionary, dictionary+counter);
    sort(alphadict, alphadict+counter);
    for(int i = 0; i<counter; i++){
        int length = alphadict[i].length();
        for(int j = 0; j<alphadict[i][j]; j++){
            alphadict[i][j] = tolower(alphadict[i][j]);
            
        }
        sort(alphadict[i].begin(), alphadict[i].end());
    }

    for(int i = 0; i<counter; i++){
        for(int j = 0; j<counter; j++){
            //check if it's the same exact word/spot in the dictionary
            if(i==j){
                continue;
            }
            //check if they are the same length
            if(alphadict[i].length()!=alphadict[j].length()){
                //cout<<alphadict[i]<<" is NOT the same LENGTH as "<<alphadict[j]<<endl;
                match = 0;
                continue;
            }
            //if they are not in the same spot, they must be different entries
            if(i!=j){
                //if the words are the same, set match to 1
                if(alphadict[i]==alphadict[j]){
                    match = 1;
                    //cout<<alphadict[i]<<" is the same as "<<alphadict[j]<<endl;
                    break;
                }
                else if(alphadict[i]==alphadict[j]){
                    //cout<<dictionary[i]<<" is NOT the same as "<<dictionary[j]<<endl;
                    match = 0;
                }
            }
        }
        if(match == 1){
            continue;
        }
        else if(match == 0){
            cout<<dictionary[i]<<endl;
        }
    }
}



