int i = 0;
char buf[20];
int ch[5];

const int kdegree = 1;
const int kspeed = 1;

int rightP = 0;
int leftP = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
 if (Serial.available()) {
    buf[i] = Serial.read();
    if (buf[i] == 'e') {
      buf[i] = '\0';
      //Serial.println(buf);

      ch[0] = atoi(strtok(buf, ","));
      ch[1] = atoi(strtok(NULL, ","));

      Serial.println(ch[0]);
      Serial.println(ch[1]);
      
      rightP = (ch[0]*kdegree)+(ch[1]*kspeed);
      leftP = -1*((ch[0]*kdegree))+(ch[1]*kspeed);

      Serial.println(rightP);
      Serial.println(leftP);
      i = 0;
    }
    else {
      i++;
    }
  }
  
}
