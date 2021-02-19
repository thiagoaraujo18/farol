/*
 * File:   semaforo.c
 * Author: 20185210
 *
 * Created on 19 de Fevereiro de 2021, 15:10
 */
#include <xc.h>

#define VERMELHO    PORTDbits.RD7
#define AMARELO     PORTDbits.RD6
#define VERDE       PORTDbits.RD5
#define VERMELHOPED PORTDbits.RD3
#define VERDEPED    PORTDbits.RD2
#define BOTAO       PORTDbits.RD1 

void semaforo_init (void)
{
  //configuração de entradas e saidas 

    TRISDbits.TRISD1 = 1; 
    TRISDbits.TRISD2 = 0;  
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;

   //inicialização 

    PORTDbits.RD2 = 0;
    PORTDbits.RD3 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD7 = 0;  
}

void vermelho (int x)
{
    VERMELHO = x;
}
void amarelo (int x)
{
    AMARELO = x;
}
void verde (int x)
{
    VERDE = x;
    
}
void vermelhoPED (int x)
{
    VERMELHOPED = x;
}
void verdePED (int x)
{
    VERDEPED = x;
}

int botao (void)
{
    return (BOTAO );
}

