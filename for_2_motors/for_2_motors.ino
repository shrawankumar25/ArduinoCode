
#define I1 10  // Control pin 1 for motor 1
#define I2 11  // Control pin 1 for motor 1
#define I3 7   // Control pin 1 for motor 2
#define I4 8   // Control pin 2 for motor 2

void setup() 
{
    pinMode(I1,OUTPUT);
    pinMode(I2,OUTPUT);
    pinMode(I3,OUTPUT);
    pinMode(I4,OUTPUT);
    
}

void loop()
{
    digitalWrite(I1,HIGH);   //motor 1
    digitalWrite(I2,LOW);    //motor 1
    digitalWrite(I3,HIGH);   //motor 2
    digitalWrite(I4,LOW);    //motor 2
    delay(10000);

    digitalWrite(I1,LOW);   
    digitalWrite(I2,HIGH);
    digitalWrite(I3,LOW);   
    digitalWrite(I4,HIGH);
    delay(10000);
}

