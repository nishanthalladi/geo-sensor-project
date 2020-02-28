// 28 February 2020 - Sensor Project
  
int photoRes = 10;
int rgb1 = 11;
int rgb2 = 12;
int rgb3 = 13;

int lightCalibration;
int lightValue;

void setup() {
  pinMode(rgb1, OUTPUT)
  pinMode(rgb2, OUTPUT)
  pinMode(rgb3, OUTPUT)

  lightCalibration = analogRead(photoRes)
}

void loop() {
  light_up_RGB(255, 0, 0);
  lightValue = analogRead(photoRes)
  print(lightValue)
}

void light_up_RGB(int red_value, int green_value, int blue_value){
    analogWrite(rgb1, red_value);
    analogWrite(rgb2, green_value);
    analogWrite(rgb3, blue_vale);
  }
