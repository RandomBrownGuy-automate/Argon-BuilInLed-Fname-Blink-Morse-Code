// This is the source code of blinking my first name 'Ahnaf' in morse code using particle argon builtin led. 



const pin_t LED_BUILTIN = D7;       //To avoid mentioning d7 everytime I created a constant for the pin named LED_BUILTIN

void setup() {

  // We are going to tell our device that D7 (which we named LED_BUILTIN ) are going to be output
  // (That means that we will be sending voltage to it, rather than monitoring voltage that comes from it)

  // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

 pinMode(LED_BUILTIN, OUTPUT);

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
  // To blink the LED, first we'll turn it on...
	digitalWrite(LED_BUILTIN,HIGH);
  	delay(500);                         //The first letter of my first name is 'a' which in morse code is '. -' 
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(500);
  	digitalWrite(LED_BUILTIN,HIGH);
  	delay(1500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(1500);                        //Next letter wait
  	digitalWrite(LED_BUILTIN,HIGH);     //The secoond letter is 'h' which in morse code is '. . . .'
  	delay(500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(500);
  	digitalWrite(LED_BUILTIN,HIGH);
  	delay(500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(500);
  	digitalWrite(LED_BUILTIN,HIGH);
  	delay(500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(1500);                        //Next Letter wait
  	digitalWrite(LED_BUILTIN,HIGH);     //THe third letter is 'n' which in morse code is '- .'
  	delay(1500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(500);
  	digitalWrite(LED_BUILTIN,HIGH);
  	delay(500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(1500);                        //Next Letter
  	digitalWrite(LED_BUILTIN,HIGH);     //The fourth letter is 'a' which in morse code is '. -'
  	delay(500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(500);
  	digitalWrite(LED_BUILTIN,HIGH);
  	delay(1500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(1500);                        //Next letter wait
  	digitalWrite(LED_BUILTIN,HIGH);     //The fifith letter is 'f' which in morse code is '. . - .'
  	delay(500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(500);
  	digitalWrite(LED_BUILTIN,HIGH);
  	delay(500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(500);
  	digitalWrite(LED_BUILTIN,HIGH);
  	delay(1500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(500);
  	digitalWrite(LED_BUILTIN,HIGH);
  	delay(500);
  	digitalWrite(LED_BUILTIN,LOW);
  	delay(1500);

  // And repeat!
  //Sheesh I have a long first name!!
}

