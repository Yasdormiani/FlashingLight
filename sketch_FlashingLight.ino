int led = 13;

void setup(){
pinMode(led , OUTPUT);
}

void loop (){ 

//for making flashing light

digitalWrite (led  , HIGH);
delay(1000);
digitalWrite (led , LOW);
delay(1000);

}
