 int alea=1;
 int a=0;
 int b=0;
 int c=0;
 int d=0;
 int e=0;
 int f=0;
 int g=0;
 int h=0;
 const int A=8; //decodificador
 const int B=9; //decodificador
 const int C=10; //decodificador
 const int D=11; //decodificador
 String dato;
 int num;
void setup() {
  Serial.begin(9600);
  Serial.println("Presione cualquier tecla para continuar con las preguntas");
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
}

void loop() {
  if(Serial.available()>0)
    {
        for(int j=0;j<5;j++){
        randomSeed(millis());
        delay(100);
        num=random(0,8);
        Serial.println(num);
        if(num==0){
          Serial.println("Es el año 2020?");
          delay(4000);
          Serial.println("");
          dato=Serial.readString();
          if(dato=="si"){
            Serial.println("Correcto");
            a++;
           }
          else
            Serial.println("Incorrecto");
        }
      if (num==1){
          Serial.println("Es el mes de Noviembre?");
          delay(4000);
          Serial.println("");
          dato=Serial.readString();
          if(dato=="si"){
            Serial.println("Correcto");
            b++;
           }
          else
            Serial.println("Incorrecto");
      }
      if (num==2){
          Serial.println("5 + 9 = 14 es correcto?");
          delay(4000);
          Serial.println("");
          dato=Serial.readString();
          if(dato=="si"){
            Serial.println("Correcto");
            c++;
           }
          else
            Serial.println("Incorrecto");
      }
      if (num==3){
          Serial.println("Ecuador esta en sudamerica?");
          delay(4000);
          Serial.println("");
          dato=Serial.readString();
          if(dato=="si"){
            Serial.println("Correcto");
            d++;
           }
          else
            Serial.println("Incorrecto");
      }
      if (num==4){
          Serial.println("El futbol es el deporte mas popular del mundo?");
          delay(4000);
          Serial.println("");
          dato=Serial.readString();
          if(dato=="si"){
            Serial.println("Correcto");
            e++;
           }
          else
            Serial.println("Incorrecto");
      }
      if (num==5){
          Serial.println("El sol sale en el dia?");
          delay(4000);
          Serial.println("");
          dato=Serial.readString();
          if(dato=="si"){
            Serial.println("Correcto");
            f++;
           }
          else
            Serial.println("Incorrecto");
      }
      if (num==6){
          Serial.println("Ecuador gano 6-1 a Colombia?");
          delay(4000);
          Serial.println("");
          dato=Serial.readString();
          if(dato=="si"){
            Serial.println("Correcto");
            g++;
           }
          else
            Serial.println("Incorrecto");
      }
      if (num==7){
          Serial.println("Estados Unidos esta en europa?");
          delay(4000);
          Serial.println("");
          dato=Serial.readString();
          if(dato=="no"){
            Serial.println("Correcto");
            h++;
           }
          else
            Serial.println("Incorrecto");
        }
        //num=0;
      }
      contador(a+b+c+d+e+f+g+h);
  }
}
void contador (int i){
  switch(i){
      case 0:
        digitalWrite(A,LOW);
        digitalWrite(B,LOW);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
      break;
      case 1:
        digitalWrite(A,HIGH);
        digitalWrite(B,LOW);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
      break;
      case 2:
        digitalWrite(A,LOW);
        digitalWrite(B,HIGH);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
      break;
      case 3:
        digitalWrite(A,HIGH);
        digitalWrite(B,HIGH);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
      break;
      case 4:
        digitalWrite(A,LOW);
        digitalWrite(B,LOW);
        digitalWrite(C,HIGH);
        digitalWrite(D,LOW);
      break;
      case 5:
        digitalWrite(A,HIGH);
        digitalWrite(B,LOW);
        digitalWrite(C,HIGH);
        digitalWrite(D,LOW);
      break;
      }
  }
