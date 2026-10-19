const int ena = 5, in1 = 6, in2 = 7, in3 = 9, in4 = 8, enb = 10;
const int cap1 = 2, cap2 = 3, cap3 = 4, cap4 = 11, cap5 = 12;

void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);

  pinMode(cap1, INPUT);
  pinMode(cap2, INPUT);
  pinMode(cap3, INPUT);
  pinMode(cap4, INPUT);
  pinMode(cap5, INPUT);
}

void loop() {

  int capt1 = digitalRead(cap1);
  int capt2 = digitalRead(cap2);
  int capt3 = digitalRead(cap3);
  int capt4 = digitalRead(cap4);
  int capt5 = digitalRead(cap5);
  Serial.print("valeur1 : ");
  Serial.print(capt1);
  Serial.print(" ");
  Serial.print("valeur2 : ");
  Serial.print(capt2);
  Serial.print(" ");
  Serial.print("valeur3 : ");
  Serial.print(capt3);
  Serial.print(" ");
  Serial.print("valeur4 : ");
  Serial.print(capt4);
  Serial.print(" ");
  Serial.print("valeur5 : ");
  Serial.print(capt5);
  Serial.println(" ");


  delay(1);

  final();


}


void avancer() {
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
  analogWrite(ena, 100);
  analogWrite(enb, 100);
}

void reculer() {
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);
  analogWrite(ena, 100);
  analogWrite(enb, 100);
}

void arreter() {
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
  analogWrite(ena, 0);
  analogWrite(enb, 0);
}

void gauche() {
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
  analogWrite(ena, 90);
  analogWrite(enb, 90);
}

void droite() {
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);
  analogWrite(ena, 90);
  analogWrite(enb, 90);
}

void rotation_g() {
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
  analogWrite(ena, 180);
  analogWrite(enb, 180);
}
void rotation_d() {
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);
  analogWrite(ena, 110);
  analogWrite(enb, 100);
}

void final() {
  int capt1 = digitalRead(cap1);
  int capt2 = digitalRead(cap2);
  int capt3 = digitalRead(cap3);
  int capt4 = digitalRead(cap4);
  int capt5 = digitalRead(cap5);

  if (capt1 == 0 && capt2 == 0 && capt3 == 1 && capt4 == 0 && capt5 == 0) {
    avancer();
    delay(1);
  }

  else if (capt1 == 0 && capt2 == 1 && capt3 == 1 && capt4 == 0 && capt5 == 0) {
    gauche();
    delay(1);
  }
  else if (capt1 == 1 && capt2 == 0 && capt3 == 0 && capt4 == 0 && capt5 == 0) {
    rotation_g();
    delay(250);
 }
  else if (capt1 == 1 && capt2 == 1 && capt3 == 0 && capt4 == 0 && capt5 == 0) {
    gauche();
    delay(10);
 }
  else if (capt1 == 1 && capt2 == 1 && capt3 == 1 && capt4 == 0 && capt5 == 0) {
    rotation_g();
    delay(100);
  }
  else if (capt1 == 0 && capt2 == 1 && capt3 == 0 && capt4 == 0 && capt5 == 0) {
    gauche();
    delay(1);
 }
  else if (capt1 == 0 && capt2 == 0 && capt3 == 0 && capt4 == 1 && capt5 == 0) {
    rotation_d();
    delay(250);
 }
  else if (capt1 == 0 && capt2 == 0 && capt3 == 1 && capt4 == 1 && capt5 == 0) {
    droite();
    delay(1);
  }
  else if (capt1 == 0 && capt2 == 0 && capt3 == 0 && capt4 == 0 && capt5 == 1) {
    rotation_d();
    delay(1);
  }
  else if (capt1 == 0 && capt2 == 0 && capt3 == 0 && capt4 == 1 && capt5 == 1) {
    droite();
    delay(10);
  }
  else if (capt1 == 0 && capt2 == 0 && capt3 == 1 && capt4 == 1 && capt5 == 1) {
    droite();
    delay(10);
  }
  else if (capt1 == 0 && capt2 == 1 && capt3 == 1 && capt4 == 0 && capt5 == 1) {
    rotation_d();
    delay(1);
  }
  else if (capt1 == 1 && capt2 == 1 && capt3 == 1 && capt4 == 1 && capt5 == 0) {
    rotation_g();
    delay(250);
  }
  else if (capt1 == 0 && capt2 == 1 && capt3 == 1 && capt4 == 1 && capt5 == 1) {
    rotation_g();
    delay(150);
  }
  else if (capt1 == 0 && capt2 == 1 && capt3 == 1 && capt4 == 1 && capt5 == 0) {
    rotation_g();
    delay(150);
  }
  else if (capt1 == 1 && capt2 == 0 && capt3 == 1 && capt4 == 0 && capt5 == 0) {
    rotation_g();
    delay(350);
  }
  else {
    arreter();
  }
}