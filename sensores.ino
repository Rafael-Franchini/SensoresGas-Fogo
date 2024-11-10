// Definição dos pinos dos sensores
const int mq2Pin = A0;       // Pino do MQ-2
const int mq9Pin = A1;       // Pino do MQ-9
const int flameSensorPin = 2; // Pino do sensor de chama (digital)

// Definição dos pinos do LED RGB
const int redPin = 3;        // Pino do LED RGB (vermelho)
const int greenPin = 4;      // Pino do LED RGB (verde)
const int bluePin = 5;       // Pino do LED RGB (azul)

void setup() {
  Serial.begin(9600);         // Inicializa a comunicação serial
  pinMode(mq2Pin, INPUT);
  pinMode(mq9Pin, INPUT);
  pinMode(flameSensorPin, INPUT);

  // Configuração dos pinos do LED RGB
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Leitura dos sensores de gás
  int mq2Value = analogRead(mq2Pin);
  int mq9Value = analogRead(mq9Pin);
  
  // Leitura do sensor de chama
  int flameValue = digitalRead(flameSensorPin);

  // Exibe os valores na Serial Monitor
  Serial.print("MQ-2 Value: ");
  Serial.print(mq2Value);
  Serial.print("\t MQ-9 Value: ");
  Serial.print(mq9Value);
  Serial.print("\t Flame Sensor: ");
  Serial.println(flameValue == LOW ? "Fogo Detectado!" : "Nenhum Fogo");

  // Limites para detecção de gás (ajuste conforme necessário)
  int mq2Threshold = 300;
  int mq9Threshold = 300;

  // Verificações e controles de LED
  if (mq2Value > mq2Threshold || mq9Value > mq9Threshold) {
    // Alerta de gás - Acende o LED azul
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
    Serial.println("Alerta: Gás detectado!");
  } else if (flameValue == LOW) {
    // Alerta de chama - Acende o LED vermelho
    
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    Serial.println("Alerta: Chama detectada!");
  } else {
    // Nenhum alerta - Acende o LED verde
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }

  delay(1000);  // Atraso para uma nova leitura
}
