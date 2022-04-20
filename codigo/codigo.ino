const int botao1 = 8;
const int botao2 = 9;
const int botao3 = 10;
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;


void setup()
{
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}


int valor1;
int valor2;
int valor3;

void loop()
{
 
 valor1 = digitalRead(botao2);
 valor2 = digitalRead(botao1);
 valor3 = digitalRead(botao3);
  

  
 
 
 
 if(valor1){
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led3, LOW);
 }
 
  if(valor2){ 
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  
  
  
  }
  
  
  if(valor3){
  digitalWrite(led1, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led2, LOW);
  
 }
}
