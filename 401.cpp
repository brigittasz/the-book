#include <iostream>
#include <string>
using namespace std;
bool palindrome(string str);
bool mirrored(string str, string mirrored1, string mirrored2, string other);


int main(){
    string str;
    string reverse = "AHILMOTUVWXY18";
    string mirrored1 = "AEHIJLMOSTUVWXYZ12358";
    string mirrored2 = "A3HILJMO2TUVWXY51SEZ8";
    string other = "BCDFGKNPQR467";
    int reverselength = reverse.length();

    while(cin>>str){
        int p = palindrome(str);
        int m = mirrored(str, mirrored1, mirrored2, other);

        if(p==1 && m!=1){
            cout<<str<<" -- is a regular palindrome.";
        }
        else if(p==1 && m==1){
            cout<<str<<" -- is a mirrored palindrome.";
        }
        else if(p!=1 && m==1){
            cout<<str<<" -- is a mirrored string.";
        }
        else{
            cout<<str<<" -- is not a palindrome.";
        }
        cout<<endl<<endl;
    }
    return 0;

}

bool palindrome(string str){
    int length = str.length();
    bool pal = 1;
    for(int i = 0; i<length/2; i++){
        if(str[i] != str[length-1-i]){
            pal = 0;
        }
    }
    return pal;
    
}
bool mirrored(string str, string mirrored1, string mirrored2, string other){
    int length = str.length();
    int mirrorstring = 1;
    if(length%2==1){
        for(int j = 0; j<21; j++){
            if(str[length/2]==mirrored1[j]){
                mirrorstring = 1;
                break;
            }
            else{
                mirrorstring = 0;
            }
        }
    }
    int otherlength = other.length();
    for(int j = 0; j<length/2; j++){
        for(int i = 0; i<otherlength; i++){
            if(str[j] == other[i]){
                mirrorstring = 0; 
                return mirrorstring;
            }
        }
    }
    
    if(mirrorstring == 1){
        for(int i = 0; i<length/2; i++){
            for(int j = 0; j<21; j++){
                if((str[i] == mirrored1[j] && str[length-1-i] != mirrored2[j])){
                    mirrorstring  = 0;
                }
            }
        }
    }
    
    return mirrorstring;
}
