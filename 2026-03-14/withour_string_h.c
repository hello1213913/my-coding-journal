#include<stdio.h>

int myStrlen(char *s){
    int length=0;
    char *p= s;
    while(*p != '\0'){
        p++;
        length++;     //counts the number of length.
    }
    return length;
    
}
void myStrcpy(char *dest, char *src){
    char *pd = dest , *ps = src;
    while(*ps != '\0'){   //loop goes until the src isnot equal to the last words.
        *pd = *ps;         //each loop runs the alphabet of the ps is copied to destination.
        ps++, pd++;         //after that each increases by one.
    }
    *pd = '\0';
}
int myStrcmp(char *s1, char *s2){
    char *ps1 = s1, *ps2 = s2;
    while(*ps1 != '\0' && *ps2 != '\0'){    //goes until both does not have the last words.
        if(*ps1 != *ps2){                   //if in between if the alphabet are different at that same time the loop breaks.
            return 1;
        }
        ps1++, ps2++;       //increase
    }

    if(*ps1 == '\0' && *ps2 == '\0'){  //after the loop if the both pointer are at the last then it is true.
        return 0;
    }else{                              //other wise false
        return 1;
    }
}
void myStrrev(char *s){         
    char *ps = s, *ps_las = s, temp;  //both pointer at the first.
    while(*ps_las != '\0'){         //ps_las goes to the last alphabet 
        ps_las++;
    }
    ps_las--;                   //before the ending of the string ie(NULL)

    while(ps_las > ps){     //no one pointer decreases and another increases until they meet.
        temp = *ps;            //swap.
        *ps = *ps_las;
        *ps_las = temp;
        ps ++;
        ps_las --;
    }

}


