//Julian Apodaca
//11-22-19
//Gamepad for Arduino

const int up_button_pin = 3;  
const int right_button_pin = 2; 
const int left_button_pin = 4;  
const int down_button_pin = 5;   

int up_state = 0;   
int right_state = 0; 
int left_state = 0;
int down_state = 0;     

void setup() {
  Serial.begin(9600);
  pinMode(up_button_pin, INPUT);
  pinMode(right_button_pin, INPUT);
  pinMode(left_button_pin, INPUT);
  pinMode(down_button_pin, INPUT);
}

void loop() {
  up_state = digitalRead(up_button_pin);
  right_state = digitalRead(right_button_pin);
  left_state = digitalRead(left_button_pin);
  down_state = digitalRead(down_button_pin);

  if (up_state == HIGH) {
    Serial.println("Up Button Pressed");
    delay(100);
  } 
  if (right_state == HIGH){
    Serial.println("Right Button Pressed");
    delay(100);
  }
  if (left_state == HIGH){
    Serial.println("Left Button Pressed");
    delay(100);
  }
  if (down_state == HIGH){
    Serial.println("Down Button Pressed");
    delay(100);
  }

}
