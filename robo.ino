/*******************************************************************************************************
------------------------------------Autor : Gustavo R Stroschon-----------------------------------------
------------------------------------date: 21/02/2020----------------------------------------------------
------------------------------------função do programa:codigo utilizado para a demonstraçao do robo sumo
*******************************************************************************************************/

void setup() {

pinMode(11, INPUT);
pinMode(12, INPUT);
pinMode(13, INPUT);

pinMode(2, INPUT_PULLUP);

pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);

Serial.begin(9600);

while (digitalRead(2) == 0) {
delay(1);
stop();
Serial.println("aguardando");
}
}

void loop() {

if (!digitalRead(12) || !digitalRead(13)) {//verifica
Serial.println("linha detectada");
stop();
delay(1);
re();
delay(300);
stop();
delay(1);
girar();
delay(600);
stop();
}

frente();
delay(1);
}
void re() {
Serial.println("Re");
analogWrite(5, 0);
analogWrite(6, 200);
analogWrite(9, 0);
analogWrite(10, 200);
}
void frente() {
Serial.println("Frente");
analogWrite(5, 200);
analogWrite(6, 0);
analogWrite(9, 200);
analogWrite(10, 0);
}
void girar() {
Serial.println("Girando");
analogWrite(5, 0);
analogWrite(6, 200);
analogWrite(9, 200);
analogWrite(10, 0);
}
void stop() {
Serial.println("parado");
analogWrite(5, 0);
analogWrite(6, 0);
analogWrite(9, 0);
analogWrite(10, 0);

}
