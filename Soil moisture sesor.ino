#define soil A1
#define led 12
#define ledg 8
#define ledy 9
#define ledr 13
#define ledb 6

void setup()
{
 pinMode(soil, INPUT); 
 pinMode(led, OUTPUT);
 pinMode(ledg, OUTPUT);
 pinMode(ledy, OUTPUT); 
 pinMode(ledr, OUTPUT);
 pinMode(ledb, OUTPUT);
 Serial.begin(9600);
}

void loop()
{
 // digital sensor read  
 bool soilvalue = digitalRead(soil);
 if (soilvalue == 1)
 {
   digitalWrite(led, HIGH);
 }
 else
 {
   digitalWrite(led, LOW);
 }

 // analog sensor read  
 int soilvalue1 = analogRead(soil);
 Serial.println(soilvalue1);

 if (soilvalue1 <= 100)
 {
   digitalWrite(ledg, HIGH); 
   digitalWrite(ledy, LOW); 
   digitalWrite(ledr, LOW);
   digitalWrite(ledb, LOW);
 }
 else if (soilvalue1 <= 300)
 {
   digitalWrite(ledg, LOW); 
   digitalWrite(ledy, HIGH); 
   digitalWrite(ledr, LOW);
   digitalWrite(ledb, LOW);
 }
 else if (soilvalue1 <= 700)
 {
   digitalWrite(ledg, LOW); 
   digitalWrite(ledy, LOW); 
   digitalWrite(ledr, HIGH);
   digitalWrite(ledb, LOW);   
 } 
 else 
 {
   digitalWrite(ledg, LOW); 
   digitalWrite(ledy, LOW); 
   digitalWrite(ledr, LOW);
   digitalWrite(ledb, HIGH);
 }
}
