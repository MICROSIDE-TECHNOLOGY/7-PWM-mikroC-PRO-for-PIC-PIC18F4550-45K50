#line 1 "C:/Users/Christian/Documents/MikroC-X-TRAINER-main/Practica 8 - MikroC/Proyecto/4550/PMW.c"
#pragma orgall 0x1FFF
#line 21 "C:/Users/Christian/Documents/MikroC-X-TRAINER-main/Practica 8 - MikroC/Proyecto/4550/PMW.c"
unsigned short i ;

void main() org 0x2000
{
 TRISC = 0X00;
 PWM1_Init (5000);
 PWM1_Start ();

 while (1)
 {
 for (i = 0; i < 255; i++)
 {
 PWM1_Set_Duty (i);
 delay_ms (5);
 }

 for (i = 255; i > 0; i--)
 {
 PWM1_Set_Duty (i);
 delay_ms (5);
 }

 delay_ms (30);
 }
}
