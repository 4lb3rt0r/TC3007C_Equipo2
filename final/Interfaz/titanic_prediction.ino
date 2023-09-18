#include <EloquentTinyML.h>
#include <eloquent_tinyml/tensorflow.h> //comment it if you're using 0.0.5 version
#include <Arduino.h>
#include <ArduinoJson.h>
#include <WiFi.h>
#include <HTTPClient.h>

#include "titanic_model.h"

#define NUMBER_OF_INPUTS 7
#define NUMBER_OF_OUTPUTS 1
#define TENSOR_ARENA_SIZE 2*1024

const char* ssid = "INFINITUM5BA5_2.4";
const char* password = "JWJFK69KMx";

// Define the Firebase URLs
const char* queryUrl = "https://database-iot-e86e3-default-rtdb.firebaseio.com/query/.json";
const char* resultsTestUrl = "https://database-iot-e86e3-default-rtdb.firebaseio.com/results/.json";

HTTPClient client;

Eloquent::TinyML::TensorFlow::TensorFlow<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> tf;

void setup() {
  Serial.begin(115200);
  Serial.println("Iniciando modelo");
  tf.begin(titanic_model);
  Serial.println("Modelo iniciado");

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.println("xd");
    delay(500);
  }

    client.begin(queryUrl);
  int httpResponseCode = client.GET();
  if (httpResponseCode > 0) {
    String payload = client.getString();
    Serial.println(payload);

    DynamicJsonDocument doc(1024); // Adjust the buffer size as needed
    deserializeJson(doc, payload);

      JsonObject row0 = doc["row-0"];
       
      int Pclass = row0["Pclass"];
      Serial.println("Pclass");
      Serial.println(Pclass);
      int Age = row0["Age"];
      Serial.println("Age");
      Serial.println(Age);
      int SibSp = row0["SibSp"];
      Serial.println("SibSp");
      Serial.println(SibSp);
      int Parch = row0["Parch"];
      Serial.println("Parch");
      Serial.println(Parch);
      int Fare = row0["Fare"];
      Serial.println("Fare");
      Serial.println(Fare);
      int HasCabin = row0["HasCabin"];
      Serial.println("HasCabin");
      Serial.println(HasCabin);
      int IsFemale = row0["IsFemale"];
      Serial.println("IsFemale");
      Serial.println(IsFemale);
      Serial.println("Reading..");
      delay(2000);
      //float x = 35.22; 
      float input[7] = { Pclass, Age,  SibSp, Parch, Fare, HasCabin, IsFemale};
      float predicted = tf.predict(input);
      Serial.print("\t predicted: ");
      Serial.println(predicted);
      if(predicted >= .5 ) {
        for (JsonPair kv : doc.as<JsonObject>()) {
          kv.value()["Survived"] = 1;
        }
      }
      else{
        for (JsonPair kv : doc.as<JsonObject>()) {
          kv.value()["Survived"] = 0;
        }
      }
 

    String modifiedDataJson;
    serializeJson(doc, modifiedDataJson);

    client.begin(resultsTestUrl);
    client.addHeader("Content-Type", "application/json");
    int putResponseCode = client.PUT(modifiedDataJson);
    if (putResponseCode == 200) {
      Serial.println("Data updated successfully in Firebase 'results_test' collection.");
    }
    else {
      Serial.print("Failed to update data in Firebase 'results_test' collection. Status code: ");
      Serial.println(putResponseCode);
    }

    client.end();
  }
  
}


void loop() {

}
