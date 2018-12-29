void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

//Motors
const int Motor1 = 13;
const int Motor2 = 14;
pinMode(Motor1, OUTPUT);
pinMode(Motor2, OUTPUT);
//LEDs
const int NeoPixelEyes = 5;
const int NeoPixelCamo = 6;
pinMode(NeoPixelEyes, OUTPUT);
pinMode(NeoPixelCamo, OUTPUT);
//Eyes
int Color = 0;
const int RedFilter = 19;
const int GreenFilter = 18;
const int BlueFilter = 17; 
pinMode(RedFilter, INPUT);
pinMode(GreenFilter, INPUT);
pinMode(BlueFilter, INPUT);
//Status


}

void loop() {

void Move();

int Look();

void Reveal();
  
  // put your main code here, to run repeatedly:

}

void Move(){
  int Motor1 = 13;
  int Motor2 = 14;
  digitalWrite(Motor1, HIGH);
  digitalWrite(Motor2, HIGH);
  return; 
}


int Look(){
  int Color = 0;
//set NeoPixel to red, then read detector
//set NeoPixel to green, then read color
//set NeoPixel to blue, then read color
}
return(Color);

void Reveal(){
  //set NeoPixels to cycle in a victory dance
  return;
}
