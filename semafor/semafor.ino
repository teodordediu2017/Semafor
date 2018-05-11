const int led1=5;
const int led2=6;
const int led3=7;
const int led4=8;
const int led5=9;
const int led6=10;
unsigned long ret=900;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);


digitalWrite(led1, 1); //encenem el led velmell del semafor a//
digitalWrite(led4, 1);  //ecenem el vermell semabor B//
delay(ret);             //temps de espera //
digitalWrite(led4,0);    //aàguem vermall semafor b//


digitalWrite(led6,1);  // encenem el led vermell semafor b//
delay(ret*4);           //li diem que el temps de espera ho ultipliqui per 4//
digitalWrite(led6,0);     //apaguem el semafor vermell b//

digitalWrite(led5, 1);   //encenem el semafor groc b//
delay(ret);              //li donem temps d¡espera//
digitalWrite(led5, 0);  //apafuem el semafor  groc b//
digitalWrite(led4, 1);   //enceem el semafor vermell b//
delay(ret*1);              // temps de epera//
digitalWrite(led1,0);   //apaguem el semafor a vermell//
digitalWrite(led3, 1);   //encenem el vermell semafor a//
delay(ret*4);            //temps de espera//
digitalWrite(led3, 0);    //apaguem el vermell a//
digitalWrite(led2, 1);   //encenem el led groc a//
delay(ret);             //temps de espera//
digitalWrite(led2,0);   //apaguem groc a//
digitalWrite(led1, 1);   //encenm vermell a//
delay(ret);              //temps de espera//
digitalWrite(led1,0);    //apaguem led roig a//
digitalWrite(led4, 0); 
}

void loop() {


}
