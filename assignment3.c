/**************************************************************
* Class: CSC-615-01 Spring 2020
* Name: Christy Tam
* Student ID: 916916993
* Project: Assignment 3 - Motors & Motor Shield
*
* File: assignment3.c
*
* Description: Using wiring Pi library for C, the following code
* controls two motors that can go foward, backwards, stop, and 
* have speed control. After, run the program with the make command 
* on terminal to create an executable file and run ./assignment3
**************************************************************/

#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <softPwm.h>

// Motor 1 pins
#define motor1_e 0
#define motor1_fwd 3
#define motor1_bwrd 2

//Motor 2 pins
#define motor2_e 6
#define motor2_fwd 4
#define motor2_bwrd 5

int setup(){
    pinMode(motor1_e,OUTPUT);
    pinMode(motor1_fwd,OUTPUT);
    pinMode(motor1_bwrd,OUTPUT);

    pinMode(motor2_e,OUTPUT);
    pinMode(motor2_fwd,OUTPUT);
    pineMode(motor2_bwrd,OUTPUT) ;

    softPwmCreate(motor1_e, 0, 100);
    softPwmCreate(motor2_e, 0, 100);
}

int foward( int forward, int backward, int speed)
{
   if digitalWrite(motor1_fwd, LOW);
   else
   {
       digitalWrite(motor1_fwd, HIGH);
       digitalWrite(motor2_fwd, HIGH);
       digitalWrite(motor1_bwrd, LOW);
       digitalWrite(motor1_bwrd, LOW);
   }
   
}
int backward() {
    if 
    else
    {
        digitalWrite(motor1_fwd, LOW);
        digitalWrite(motor2_fwd, LOW);
        digitalWrite(motor1_bwrd, HIGH);
        digitalWrite(motor2_bwrd, HIGH);
    }
    
    
}
int stop() {
    digitalWrite(motor1_e, LOW);
    digitalWrite(motor1_fwd, LOW);
    digitalWrite(motor1_bwrd, LOW);
    digitalWrite(motor2_e, LOW);
    digitalWrite(motor2_fwd, LOW);
    digitalWrite(motor2_bwrd, LOW);
}
int main(void)
{
    wiringPiSetup();

    if(wiringPiSetup() == -1)
    {
        printf("Setup has failed.\n")
        return 0;
    }

    pinMode(motor1_e,OUTPUT);
    pinMode(motor1_fwd,OUTPUT);
    pinMode(motor1_bwrd,OUTPUT);

    pinMode(motor2_e,OUTPUT);
    pinMode(motor2_fwd,OUTPUT);
    pineMode(motor2_bwrd,OUTPUT) ;

    softPwmCreate(motor1_e, 0, 100);
    softPwmCreate(motor2_e, 0, 100);

    while(fowards)


}