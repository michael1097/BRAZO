#include <Servo.h>

Servo base,avance,altura,garra;

int mov=0;

void setup() {
  base.attach(2);
  avance.attach(4);
  altura.attach(3);
  garra.attach(5);

  base.write(90);
  delay(1000);
  avance.write(90);
  delay(1000);
  altura.write(180);
  delay(1000);
  garra.write(0);
  delay(1000);
  garra.write(25); 
  delay(1000);   
}

void loop() {
  for(mov = base.read();mov<180;mov+=1)
  { 
    base.write(mov);
    delay(15);
  }
  for( mov = garra.read();mov>0;mov--)
  {
    garra.write(mov);
    delay(15);
  }
  for(mov = avance.read();mov<140;mov++)
  {
    avance.write(mov);
    delay(15);
  }
  for(mov = altura.read();mov>110;mov--)
  {
    altura.write(mov);
    delay(15);
  }
  for(mov = garra.read();mov<25;mov++)
  {
    garra.write(mov);
  }
  for(mov=avance.read();mov>90;mov--)
  {
    avance.write(mov);
    delay(15);
  }
  for(mov = altura.read();mov<180;mov++)
  {
    altura.write(mov);
    delay(15);
  }
  for(mov = base.read();mov>0;mov--)
  {
    base.write(mov);
    delay(15);
  }
  for(mov = avance.read();mov<140;mov++)
  {
    avance.write(mov);
    delay(15);
  }
  for(mov = altura.read();mov>110;mov--)
  {
    altura.write(mov);
    delay(15);
  }
  for( mov = garra.read();mov>0;mov--)
  {
    garra.write(mov);
    delay(15);
  }
  delay(1000); 
  for(mov = garra.read();mov<25;mov++)
  {
    garra.write(mov);
  }
  for(mov=avance.read();mov>90;mov--)
  {
    avance.write(mov);
    delay(15);
  }
  for(mov = altura.read();mov<180;mov++)
  {
    altura.write(mov);
    delay(15);
  }
}
