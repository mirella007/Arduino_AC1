//variaveis da led
const int vermelho = 5;
const int verde = 6;
const int azul = 7;

//estado do led vermelho
bool estadoLedVermelho = false;

//variaveis dos botoes
const int botao1 = 2;
const int botao2 = 8;
unsigned long lastDebounceTime1 = 0;
const int botaoDelay = 100;

//usado para começar o programa e serve para configurar os pinos para comunicação do serial
void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("AC1- Meu primeiro projeto 2021);
  Serial.println("              V1.0");
  Serial.println("GRUPO: LUNATIC WOLVES); 
  }
  //executa os comandos
  void loop()
  {
   if))millis() - lastDebounceTime1)> botaoDelay && digitalReed(botao1))      
  {
  Serial.println("botao 1 apertado");
  ledVermelho();
 lastDebounceTime1 = millis();
  }
  
    
    
   }
   
 
  
