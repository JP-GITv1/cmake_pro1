#include "pal.h"

int main(){
    char string1[]="najmus";
    int i, length;
    int flag = 0;
    
    cout<<"********************* Palinedrome program is Running **************************"<<endl;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << string1 << " is a palindrome" << endl; 
    }
    system("pause");
    return 0;
}