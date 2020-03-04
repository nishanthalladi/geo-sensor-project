// 28 February 2020 - Sensor Project
  
int photoRes = A0;
int rgb1 = 9;
int rgb2 = 5;
int rgb3 = 3;

int lightCalibration;
int lightValue;

void setup() {
  pinMode(rgb1, OUTPUT);
  pinMode(rgb2, OUTPUT);
  pinMode(rgb3, OUTPUT);
  Serial.begin(9600);
  lightCalibration = analogRead(photoRes);
}

void loop() {
  
    Serial.println("red starts here");
    for (int colour=0; colour<=255; colour++){
      take_measurement(colour, 0, 0);
    }

    Serial.println("green starts here");
    
    for (int colour=0; colour<=255; colour++){
      take_measurement(0, colour, 0);
    }
    
    Serial.println("blue starts here");
    for (int colour=0; colour<=255; colour++){
      take_measurement(0, 0, colour);
    }
 
}

void take_measurement(int r, int g, int b) {
  light_up_RGB(r, g, b);
  delay(250);
  double toAvg = 0;
  for (int i=0; i<1000; i++) {
    toAvg += analogRead(photoRes);
  }
  double avg = toAvg/1000;
  Serial.println(avg);
}

void light_up_RGB(int red_value, int green_value, int blue_value){
    analogWrite(rgb1, red_value);
    analogWrite(rgb2, green_value);
    analogWrite(rgb3, blue_value);
  }
