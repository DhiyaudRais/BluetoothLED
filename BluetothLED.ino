int ml=13;
int m2=9; 
int m3=5; 
int h=255; 
int l=0; 
String motion;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ml,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Silahkan ketik 'p' untuk menyalakan semuanya, 's' untuk mematikan semuanya");
  Serial.println("ketik 'r' untuk menyalakan merah, 'b' menyalakan biru, dan 'h' untuk menyalakan hijau");
  while(Serial.available()==0) { }

  motion = Serial.readString();
  if(motion=="p"){
    digitalWrite(ml,h);
    digitalWrite(m2,h);
    digitalWrite(m3,h);
  }

  if(motion=="s"){
    digitalWrite(ml,l);
    digitalWrite(m2,1);
    digitalWrite(m3,1);
  }
  if(motion=="r"){
    digitalWrite(ml,l);
    digitalWrite(m2,1);
    digitalWrite(m3,h);
  }
  if(motion=="b"){
    digitalWrite(ml,h);
    digitalWrite(m2,1);
    digitalWrite(m3,1);
  }
  if(motion=="h"){
    digitalWrite(ml,l);
    digitalWrite(m2,h);
    digitalWrite(m3,1);
  }
}
