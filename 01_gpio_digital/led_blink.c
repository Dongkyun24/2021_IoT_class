#include <wiringPi.h>
#define LED_PIN 4


int main (void)
{
  wiringPiSetupGpio() ;
  pinMode (LED_PIN, OUTPUT) ;
  for (int i=0; i<5; i++)
  {
    digitalWrite (LED_PIN, HIGH) ; delay (500) ;
    digitalWrite (LED_PIN,  LOW) ; 
    digitalWrite ()
  }
  return 0 ;
}