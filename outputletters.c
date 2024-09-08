#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char wrd[15];
    
    printf("enter word: ");
    scanf("%14s", wrd); 

    wrd[0] = tolower(wrd[0]);

    int i;
    for(i=0;i<26;i++)  {
       
        if(alph[i]==wrd[0]) {
            char a= alph[i];
           
            for(i=0;i<26;i++) {
                
                if(alph[i]==wrd[1]) {
                    char b= alph[i];
                  
                    for(i=0;i<26;i++) {
                      
                        if(alph[i]==wrd[2]) {
                           char c= alph[i];
                               
                             for(i=0;i<26;i++) {
                                  
                                 if(alph[i]==wrd[3]){
                                   char d= alph[i];
                                    
                                    for(i=0;i<26;i++) {
                                       
                                       if(alph[i]==wrd[4]) {
                                        printf("%s",wrd);
                                        return 0;
                                       }
                                       else{
                                        printf("%c%c%c%c%c\n",a,b,c,d,alph[i]);
                                       }
}
                                   }
                                  else{
                                    printf("%c%c%c%c\n",a,b,c,alph[i]);
                                  }
}
                            }
                           else{
                             printf("%c%c%c\n", a,b,alph[i]);
                            }
}
        }
         else{
            printf("%c%c\n",a,alph[i]);
            }
}
        }
        else{
           printf("%c\n", alph[i]);
        }
}
    return 0;
}



