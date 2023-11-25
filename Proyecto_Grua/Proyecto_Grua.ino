// Proyecto rua con servomotores
#include <servo.h> // Declaración de la libreria
// Definición de los servomotores
Servo servo1;
Servo servo2;
// Posición de los ejes (Empiezan en 90°)
int eje1 = 90;
int eje2 = 90;
void setup() {
  // Declaración los pines en los que se encuentran los servomotores
  servo1.attach(7);
  servo2.attach(6);
  // Posició de los ejes para que se inicializen en 90°
  servo1.write(90);
  servo2.write(90);
}
void loop() {
  // Servo 1
  if (analogRead(0) < 200 && eje1 < 180) {
    eje1++;
    servo1.write(eje1);
  }
  if (analogRead(0) > 700 && eje1 > 0) {
    eje1--;
  }
  // Servo 2
  if (analogRead(1) > 200 && eje2 < 180) {
    eje2++;
    servo2.write(eje2);
  }
  if (analogRead(1) > 700 && eje2 > 0) {
    eje2--;
    servo2.write(eje2);
  }
  delay(1000);
}