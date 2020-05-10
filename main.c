/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Jhenny Cervera Vargas(20182841)
 *
 * Created on 10 de mayo de 2020, 1:31
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
int main(int argc, char** argv) {
    
    char cad[256];
    int tam;
    for(int i=0; i<256; i++){
        cad[i]=getchar();
        if(cad[i]=='\n'){
            cad[i]='\0';
            break;
        }
    
    }
    
    tam=strlen(cad);
    int  punto=0,  principio=1;
    char carAnt='.';
    
    for(int i=0; i<tam; i++){
        
        
        if(carAnt==',' && cad[i]!=' ' && cad[i]!='.'){
            putchar(' ');
        }
        if(carAnt==' ' && cad[i]==' '){
            while(1){
                if(cad[i]!=' ') break;
                i++;
            }
        }  
        if(cad[i]=='.') punto++; 
        if(carAnt=='.' && cad[i]!='.' && principio!=1){
            punto=0;
        }
        if( punto==4 && carAnt=='.'){
            putchar(' ');
            punto=1;
        }
        if(cad[i]=='.' && carAnt!='.'){
            putchar(' ');
        }
        if(punto==3 & carAnt!='.') punto=0;
        carAnt=cad[i];
        principio++;
        if(cad[i]==' ' && cad[i+1]==',') continue;
        
        putchar(cad[i]);
        
    }
    
    
    
    
    return (EXIT_SUCCESS);
}

