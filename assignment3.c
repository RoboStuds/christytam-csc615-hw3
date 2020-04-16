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

int speed = 30;

void setup()
{
    pinMode(motor1_e,OUTPUT);
    pinMode(motor1_fwd,OUTPUT);
    pinMode(motor1_bwrd,OUTPUT);

    pinMode(motor2_e,OUTPUT);
    pinMode(motor2_fwd,OUTPUT);
    pinMode(motor2_bwrd,OUTPUT);

    softPwmCreate(motor1_e, 0, 100);
    softPwmCreate(motor2_e, 0, 100);
}

void foward()
{
    printf("Moving foward.\n");
    digitalWrite(motor1_e, HIGH);
    digitalWrite(motor2_e, HIGH);
    digitalWrite(motor1_fwd, HIGH);
    digitalWrite(motor1_bwrd, LOW);
    digitalWrite(motor2_fwd, HIGH);
    digitalWrite(motor1_bwrd, LOW);
}

void backward() {
    printf("Moving backwards.\n");
    digitalWrite(motor1_e, HIGH);
    digitalWrite(motor2_e, HIGH);
    digitalWrite(motor1_fwd, LOW);
    digitalWrite(motor1_bwrd, HIGH);
    digitalWrite(motor2_fwd, LOW);
    digitalWrite(motor2_bwrd, HIGH);
}

void stop() 
{
    printf("Stops.\n");
    digitalWrite(motor1_e, LOW);
    digitalWrite(motor1_fwd, LOW);
    digitalWrite(motor1_bwrd, LOW);
    digitalWrite(motor2_e, LOW);
    digitalWrite(motor2_fwd, LOW);
    digitalWrite(motor2_bwrd, LOW);
}

void changeSpeed(int speed)
{
    softPwmWrite(motor1_e, speed);
    softPwmWrite(motor2_e, speed);
}

int main(void)
{
    wiringPiSetup();

    if(wiringPiSetup() == -1)
    {
        printf("Setup has failed.\n");
        return 0;
    }

    setup();
    
    int i = 0;
    while(i < 2) 
    {
        changeSpeed(speed);
        foward();
        delay(5000);
        backward();
        delay(5000);
        stop();
        delay(5000);

        speed += 20;
        i++;
    }
    return 0;
}
