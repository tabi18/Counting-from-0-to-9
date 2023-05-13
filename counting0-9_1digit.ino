int B=2;
int A=3;
int F=4;
int G=5;
int E=6;
int D=7;
int C=8;
int i=0;
void setup() {
 for(i=2;i<9;i++){
  pinMode(i,OUTPUT);
 }
 Serial.begin(115200);
}
void loop() {
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  delay(1000);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  //1
  delay(1000);
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(G,LOW);
  digitalWrite(E,LOW);
  digitalWrite(D,LOW);
//2
  delay(1000);
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(G,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  //3
  delay(1000);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
delay(1000);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  //4
  delay(1000);
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  //5
  delay(1000);
  digitalWrite(A,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(C,HIGH);
delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(D,LOW);
  digitalWrite(G,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(C,LOW);
  //6
  delay(1000);
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  //7
  delay(1000);
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(C,HIGH);
delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
  digitalWrite(E,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  //8
  delay(1000);
  digitalWrite(A,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(F,HIGH);
delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(D,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(F,LOW);
  //9
  delay(1000);
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(C,HIGH);
delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(F,LOW);
  digitalWrite(B,LOW);
  digitalWrite(E,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  //0
  delay(1000);
  
  
  
  //  digitalWrite(A,HIGH);
//  digitalWrite(F,HIGH);
//  digitalWrite(G,HIGH);
//  digitalWrite(E,HIGH);
//  digitalWrite(C,HIGH);
//  digitalWrite(D,HIGH);
    

  delay(1000);
} 
