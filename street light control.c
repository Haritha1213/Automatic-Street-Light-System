//Automatic Street Light Control System	in C
// Contributor: Haritha Sai Adurthi

#include <reg52.h>  //including header files for ATMEL 8052 MC

// ir sensors 0 - 5 --> connected to Port2.0 - port2.5
sbit ir0 = P2^0;   
sbit ir1 = P2^1;
sbit ir2 = P2^2;
sbit ir3 = P2^3;
sbit ir4 = P2^4;
sbit ir5 = P2^5;

sbit ldr = P2^6;   // LDR sensor connected to Port2.6 pin

// LEDs 0 - 5  --> connected to Port3.0 - Port3.5 
sbit led0 = P3^0;
sbit led1 = P3^1;
sbit led2 = P3^2;
sbit led3 = P3^3;
sbit led4 = P3^4;
sbit led5 = P3^5;

 /*
 LDR = 1 --> during day
 LDR = 0 --> during night

 Active Low IR sensor:
 O/P = 0  --> When vehicle is detected
 O/P = 1  --> When 'NO' vehicle is detected
 */

void main(){

/*
initially:
LDR = 1 (day)
LEDs =0 (OFF)
IR Sensor = 1 (NO vehicle detected)
*/

ldr = 1;
led0=led1=led2=led3=led4=led5=0;

while(1){

    //LDR = 0 (no light detected - night)
    if(ldr==0){
        
		//if vehicle detected turn ON LED otherwise OFF
		 if(ir0==0){
		 led0=1;
		 }
		 else{
		 led0=0;
		 }

		 if(ir1==0){
		 led1=1;
		 }
		 else{
		 led1=0;
		 }

		 if(ir2==0){
		  led2=1;
		 }
		 else{
		 led2=0;
		 }
         
		 if(ir3==0){
		  led3=1;
		 }
		 else{
		 led3=0;
		 }

		  if(ir4==0){
		  led4=1;
		 }
		 else{
		 led4=0;
		 }

		  if(ir5==0){
		  led5=1;
		 }
		 else{
		 led5=0;
		 }
	}

}


}

