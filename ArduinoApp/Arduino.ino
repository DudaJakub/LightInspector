#include <stdlib.h>
int LED;
bool f1 = false;
bool f2 = false;
bool f3 = false;
bool f4 = false;
bool f5 = false;
bool f6 = false;
bool f7 = false;
bool f8 = false;
bool f9 = false;
bool f10 = false;
bool f11 = false;
bool f12 = false;
bool f13 = false;
bool f14 = false;
bool f15 = false;
bool f16 = false;

void setup()
{
  Serial.begin(9600);
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(28,OUTPUT);
  pinMode(29,OUTPUT);
  pinMode(30,OUTPUT);
  pinMode(31,OUTPUT);
  pinMode(32,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(34,OUTPUT);
  pinMode(35,OUTPUT);
  pinMode(36,OUTPUT);
  pinMode(38,OUTPUT);
  digitalWrite(22, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(24, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(28, HIGH);
  digitalWrite(29, HIGH);
  digitalWrite(30, HIGH);
  digitalWrite(31, HIGH);
  digitalWrite(32, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(34, HIGH);
  digitalWrite(35, HIGH);
  digitalWrite(36, HIGH);
  digitalWrite(38, HIGH);

}
void loop()
{
  if (Serial.available() > 0) {
      LED = Serial.read();
      switch(LED)
        {
            case '1':
            if(!f1)
            {
              digitalWrite(22, LOW);
              f1 = true;
            }
            else
            {
              digitalWrite(22,HIGH);
              f1 = false;
            }
            break;

            case '2':
            if(!f2)
            {
              digitalWrite(23, LOW);
              f2 = true;
            }
            else
            {
              digitalWrite(23,HIGH);
              f2 = false;
            }
            break;

            case '3':
            if(!f3)
            {
              digitalWrite(24, LOW);
              f3 = true;
            }
            else
            {
              digitalWrite(24,HIGH);
              f3 = false;
            }
            break;

            case '4':
            if(!f4)
            {
              digitalWrite(25, LOW);
              f4 = true;
            }
            else
            {
              digitalWrite(25,HIGH);
              f4 = false;
            }
            break;

            case '5':
            if(!f5)
            {
              digitalWrite(26, LOW);
              f5 = true;
            }
            else
            {
              digitalWrite(26,HIGH);
              f5 = false;
            }
            break;

            case '6':
            if(!f6)
            {
              digitalWrite(27, LOW);
              f6 = true;
            }
            else
            {
              digitalWrite(27,HIGH);
              f6 = false;
            }
            break;

            case '7':
            if(!f7)
            {
              digitalWrite(28, LOW);
              f7 = true;
            }
            else
            {
              digitalWrite(28,HIGH);
              f7 = false;
            }
            break;

            case '8':
            if(!f8)
            {
              digitalWrite(29, LOW);
              f8 = true;
            }
            else
            {
              digitalWrite(29,HIGH);
              f8 = false;
            }
            break;

            case '9':
            if(!f9)
            {
              digitalWrite(30, LOW);
              f9 = true;
            }
            else
            {
              digitalWrite(30,HIGH);
              f9 = false;
            }
            break;

            case 'q':
            if(!f10)
            {
              digitalWrite(31, LOW);
              f10 = true;
            }
            else
            {
              digitalWrite(31,HIGH);
              f10 = false;
            }
            break;

            case 'a':
            if(!f11)
            {
              digitalWrite(32, LOW);
              f11 = true;
            }
            else
            {
              digitalWrite(32,HIGH);
              f11 = false;
            }
            break;

            case 'z':
            if(!f12)
            {
              digitalWrite(33, LOW);
              f12 = true;
            }
            else
            {
              digitalWrite(33,HIGH);
              f12 = false;
            }
            break;

            case 'w':
            if(!f13)
            {
              digitalWrite(34, LOW);
              f13 = true;
            }
            else
            {
              digitalWrite(34,HIGH);
              f13 = false;
            }
            break;

            case 's':
            if(!f14)
            {
              digitalWrite(35, LOW);
              f14 = true;
            }
            else
            {
              digitalWrite(35,HIGH);
              f14 = false;
            }
            break;

            case 'x':
            if(!f15)
            {
              digitalWrite(36, LOW);
              f15 = true;
            }
            else
            {
              digitalWrite(36,HIGH);
              f15 = false;
            }
            break;

            case 'e':
            if(!f16)
            {
              digitalWrite(38, LOW);
              f16 = true;
            }
            else
            {
              digitalWrite(38,HIGH);
              f16 = false;
            }
            break;

            case '0':
            digitalWrite(22, HIGH);
            digitalWrite(23, HIGH);
            digitalWrite(24, HIGH);
            digitalWrite(25, HIGH);
            digitalWrite(26, HIGH);
            digitalWrite(27, HIGH);
            digitalWrite(28, HIGH);
            digitalWrite(29, HIGH);
            digitalWrite(30, HIGH);
            digitalWrite(31, HIGH);
            digitalWrite(32, HIGH);
            digitalWrite(33, HIGH);
            digitalWrite(34, HIGH);
            digitalWrite(35, HIGH);
            digitalWrite(36, HIGH);
            digitalWrite(38, HIGH);
            f1 = false;
            f2 = false;
            f3 = false;
            f4 = false;
            f5 = false;
            f6 = false;
            f7 = false;
            f8 = false;
            f9 = false;
            f10 = false;
            f11 = false;
            f12 = false;
            f13 = false;
            f14 = false;
            f15 = false;
            f16 = false;
            break;
        }
    }
}
