int x = 0;
const float frequency = 0.025;
const float amplitude= 1.0;  
const float zero_base = 0.0;   

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = x + 1;
  float sine = amplitude * sin(2 * PI * frequency * x);
  float cosine = amplitude * cos(2 * PI * frequency * x);
  
  Serial.printf("%f %f %f\n", sine, zero_base, cosine); 
  delay(100);
}