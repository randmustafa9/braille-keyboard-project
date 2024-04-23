#include <Adafruit_SH110X.h>
#include <splash.h>

#include <Wire.h>


#define i2c_Address 0x3C //initialize with the I2C addr 0x3C Typically eBay OLED's
//#define i2c_Address 0x3d //initialize with the I2C addr 0x3D Typically Adafruit OLED's

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET -1   //   QT-PY / XIAO
Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


const int buttonPin2 = 2;   
const int buttonPin3 = 3;   
const int buttonPin4 = 4;   
const int buttonPin5 = 5;  
const int buttonPin6 = 6;  
const int buttonPin7 = 7; 
const int buttonPin8 = 8;  
const int buttonPin9 = 9;  

int statemode;
int currentX = 0; // Initial X-coordinate position
int currentY = 0; // Initial Y-coordinate position
int textSize = 1; // Adjust the text size as needed
int screeny=50;






void iisplayy(const char* variablee);

void setup() {
  Serial.begin(9600);  // Initialize serial communication


  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(buttonPin8, INPUT);
  pinMode(buttonPin9, INPUT_PULLUP);


    delay(250); // wait for the OLED to power up
  display.begin(i2c_Address, true); // Address 0x3C default

  // Clear the buffer.
  display.clearDisplay();



 display.setTextSize(2);
  display.setTextColor(SH110X_WHITE);
  display.setCursor(0, 0);
  display.println("brialle transilator device");  
  
  display.setTextSize(1);
  display.setTextColor(SH110X_BLACK, SH110X_WHITE); // 'inverted' text
  display.println("by: Rand mustafa"); 


  display.display();
  delay(3000);
  display.clearDisplay();







}


void loop() {



  display.setTextSize(1);
  display.setTextColor(SH110X_BLACK, SH110X_WHITE); // 'inverted' text
  display.setCursor(0, 55);
  display.println("by: Rand mustafa");  
  display.display();


 /*display.setTextSize(1);
  display.setTextColor(SH110X_BLACK, SH110X_WHITE); // 'inverted' text
  display.setCursor(0,0);
  display.println(digitalRead(buttonPin5));  
  delay(500);
  display.display();
  */


Serial.print(statemode);   
delay(1000);

    if (digitalRead(buttonPin9) == LOW) {
      statemode = 1; 
 
    } else {
      statemode = 0;   }


 

if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == LOW ){ 
  delay(600); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == LOW ) {
    if (statemode == 1) {
      const char* a=(" ");   iisplayy(a);
      Serial.print(" ");   
      delay(1000);
      
    } else {
      const char* a=("1");   iisplayy(a);
      delay(500);
      
    }}}




if (digitalRead(buttonPin5) == LOW && digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(600); 
if (digitalRead(buttonPin5) == LOW && digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH) {
    if (statemode == 1) {
      const char* a=("A");   iisplayy(a);
      Serial.print("A");   
      delay(1000);
      
    } else {
      const char* a=("1");   iisplayy(a);
      delay(500);
      
    }}}






  // Check for Braille character B

  if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH) {
    if (statemode == 1) {
      const char* a=("B");   iisplayy(a);
      Serial.print("B");   
      delay(1000);
      
    } else {
      const char* a=("2");   iisplayy(a);
      delay(500);
      
    }
  }}

  // Check for Braille character C
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ) {
    if (statemode == 1) {
      const char* a=("C");   iisplayy(a);
      delay(500);
      
    } else {
      const char* a=("3");   iisplayy(a);
      delay(500);
      
    }
  }}

  // Check for Braille character D
  if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ) {
    if (statemode == 1) {
      const char* a=("D");   iisplayy(a);
      delay(500);
      
    } else {
      const char* a=("4");   iisplayy(a);
      delay(500);
      
    }}}






if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ) {
  if (statemode == 1) {
    const char* a=("E");   iisplayy(a);
      delay(500);
    
  } else {
    const char* a=("5");   iisplayy(a);
      delay(500);
    
  }
}}

// Example for Braille F
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ) {
  if (statemode == 1) {
    const char* a=("F");   iisplayy(a);
      delay(500);
    
  } else {
    const char* a=("6");   iisplayy(a);
      delay(500);
    
  }
}}

// Example for Braille G
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ) {
  if (statemode == 1) {
    const char* a=("G");   iisplayy(a);
      delay(500);
    
  } else {
    const char* a=("7");   iisplayy(a);
      delay(500);
    
  }
}}




if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ) {
  if (statemode == 1) {
    const char* a=("H");   iisplayy(a);
      delay(500);
    
  } else {
    const char* a=("8");   iisplayy(a);
      delay(500);
    
  }}
}







if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ) {
  if (statemode == 1) {
    const char* a=("I");   iisplayy(a);
      delay(500);
    
  } else {
    const char* a=("9");   iisplayy(a);
      delay(500);
    
  }
}}

// Check for Braille character J
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ) {
  if (statemode == 1) {
    const char* a=("J");   iisplayy(a);
      delay(500);
    
  } else {
    const char* a=("0");   iisplayy(a);
      delay(500);
    
  }
}}





if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
    const char* a=("K");   iisplayy(a);
      delay(500);
}}



if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("L");   iisplayy(a);
      delay(500);
  
}}





if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("M");   iisplayy(a);
      delay(500);
  
}}

// Check for Braille character N
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("N");   iisplayy(a);
      delay(500);
  
}}

// Check for Braille character O
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("O");   iisplayy(a);
      delay(500);
  
}}

// Check for Braille character P
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("P");   iisplayy(a);
      delay(500);
  
}}

if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("Q");   iisplayy(a);
      delay(500);
  
}}

// Check for Braille character R
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("R");   iisplayy(a);
      delay(500);
  
}}

// Check for Braille character S
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("S");   iisplayy(a);
      delay(500);
  
}}

// Check for Braille character T
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == HIGH && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("T");   iisplayy(a);
      delay(500);
  
}}

if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("U");   iisplayy(a);
      delay(500);
  
}}

// Check for Braille character V
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("V");   iisplayy(a);
      delay(500);
  
}}

if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == HIGH && digitalRead(buttonPin6) == LOW && digitalRead(buttonPin7) == HIGH && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("W");   iisplayy(a);
      delay(500);
  
}}

if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == HIGH && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("X");   iisplayy(a);
      delay(500);
  
}}

// Check for Braille character Y
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == LOW && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("Y");   iisplayy(a);
      delay(500);
  
}}

// Check for Braille character Z
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ){ 
  delay(500); 
if (digitalRead(buttonPin2) == HIGH && digitalRead(buttonPin3) == LOW && digitalRead(buttonPin4) == LOW && digitalRead(buttonPin5) == LOW && digitalRead(buttonPin6) == HIGH && digitalRead(buttonPin7) == LOW && digitalRead(buttonPin8) == HIGH ) {
  const char* a=("Z");   iisplayy(a);
      delay(500);
  
}}
        
  }


void iisplayy(const char* variablee){
int textWidth = strlen(variablee) * (6 * textSize); // 6 pixels per character, adjust if needed

  // Check if the text will fit on the current row
  if (currentX + textWidth > SCREEN_WIDTH) {
    // Move to the next row
    currentX = 0;
    currentY += 8 * textSize; // Adjust if needed (assuming 8 pixels per line)

    // Check if the next row will fit on the screen
    if (currentY >= screeny) {
      // Screen is full, reset to the top
      currentY = 0;
      display.clearDisplay();
    }
  }

  // Display the text
  display.setTextSize(textSize);
  display.setTextColor(SH110X_WHITE);
  display.setCursor(currentX, currentY);
  display.print(variablee);
  display.display();

  // Move the X-coordinate for the next text
  currentX += textWidth;

  }
