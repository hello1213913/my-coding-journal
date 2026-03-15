#include<stdio.h>
int capital(char a){
    if(a>='A' && a<= 'Z'){
        return 1;       //if capital returns 1.
    }
    if(a >='a' && a<= 'z'){
        return 0;   //if not capital returns 0;
    }
    return 3;       //if it was anything other than alphabet returns just 3. so it is not intrdouced in the array[26].
}

int main(){
    char sent[200], array[26], val;  //sent for the value, array to keep the value if it was introduced in the sentence ie(sent)
    int visited = 0,j, i= 0, arr_i=0, caps;     
    puts("\nEnter the sentence : ");
    fgets(sent, 200, stdin);  //input of the sentence

    while(sent[i] != '\0'){
        
        caps = capital(sent[i]);   //calling function so that the value is alphabet.
        if(caps == 1 || caps == 0){

            if(caps == 1){          //even if alphabet but capital we make it smaller.
                sent[i] = sent[i] + 32;
            }
            visited = 0;          //setting this up so it will be checked in a array that if it is reapeated or not.
            if(visited == 0){
                for(j=0; j<arr_i; j++){    //loop to check that the letter was repeated or not.
                    if(sent[i] == array[j]){    
                        visited = 1;        //if repeated the visited becomes 1 to know that i was already introduced.
                        break;      
                    }
                }
            }

            if(visited == 0){    //if it was not visited the alphabet goes to the array to the visited ones.
                array[arr_i] = sent[i];
                arr_i ++;  //increasing the index of the array.
            }

            
        }
        i++;
        
    }
    
    if(arr_i ==26){
        printf("\nIt contains all alphabet.");  //after the array is  filled with all alphbet ie becomes 25 and space also just running loop increases by 1;
    }
    else{
        printf("\nSorry it does not contain all ");
    }
    return 0;
}