# Selección, configuración y entrenamiento del modelo

En este directorio puede encontrar los documentos necesarios para el modelo que implementaremos para la resolucion del reto. Cuenta con los siguientes archivos:
* **train_clean.csv:** Datos de entrenamiento procesados
* **Configuracion_Modelos.ipynb:** Jupyter Notebook que contiene el código de los modelos que utilizamos para determinar cual es el modelo optimo para la resolucion del reto asi como nuestro analisis de los modelos y nuestra conclucion.

## Dataset utilizado 

Para este trabajo se hace uso del [dataset](https://www.kaggle.com/competitions/titanic/data) de la competencia de Kagggle [Titanic - Machine Learning from Disaster](https://www.kaggle.com/competitions/titanic), la cual consiste en hacer uso de un modelo de Machine Learning de categorización con la finalidad de determinar si un pasajero vivió o falleció durante el undimiento del Titanic, haciendo uso de información como su edad, sexo, clase, precio del ticket, etc.

Este dataset se limpió con anterioridad, tratando valores nulos, convirtiendo variables categoricas en dummies y eliminando variables que no consideramos relevantes para nuestro análisis. Puede leer más a detalle sobre nuestro proceso de limpia en [este archivo](https://github.com/4lb3rt0r/TC3006_Equipo2/blob/main/retro/Limpieza%20de%20Datos/clean_training_data.ipynb).

## Análisis previo a la selección

### Modelos implementados

#### Redes Neuronales
Las redes neuronales son modelos computacionales inspirados en el comportamiento del cerebro biológico. Consisten en valores de entrada, estos valores pasan por neuronas, a las cuales se les asignan pesos para cada variable. La suma ponderada se procesa con una función matemática, llamada función de activación, para producir la salida final de la neurona.Este proceso puede repetirse en múltiples capas, potencialmente obteniendo mejores resultados que un enfoque de una sola capa y neurona. Sin embargo, contar con suficientes datos de entrada es crucial para predicciones o clasificaciones precisas.
   
#### Decision Tree
El algoritmo de Decision Tree (o arboles de desición) es un a técnica de machine learning que consiste en el uso de reglas de desición simple, de forma similar a un diagrama de flujo, aprendidas de un conjunto de datos con la finalidad de predecir valores tomando en cuenta esos mismos parametros. Consideramos que este es un algoritmo apto para este problema dado que podemos aprovechar de las marcadas divisiones categoricas que tenemos en nuestro conjunto de datos, como sexo, edad, clase, etc... De forma intuitiva, el modelo preguntaría ¿El pasajero era hombre o mujer? ¿Era niño o adulto? ¿Viajaba en primera clase? y con esto llegaría a una respuesta tomando en cuenta estos valores, asociando un peso diferente a cada variable.
  
#### Random Forest 
Random Forest (o bosques aleatorios) es un algoritmo que consiste en el uso de n arboles de desición con la finalidad de reducir el ruido presente en un solo arbol, evitar el overfitting, y tomar en cuenta una mayor variabilidad entre los datos; ofreciendo una mayor calidad de los datos a costa de un mayor precio computacional, pero esto no se trata de un problema para fines de este reto dado que trabajamos con un conjunto de datos relativamente pequeño (menor a 1000 filas de datos).
   
#### SVM
Support Vector Clasification es uno de los algoritmos de clasificación más simples, pero que puede llegar a tener muy buenos resultados. La manera en la que funciona es toma un plano donde se grafica 2 variables, en nuestro caso si el pasajero sobrevivió o murió, luego genera una línea para clasificar los variables. En nuestro caso se toman en cuenta más de dos features para hacer la clasificación, así que se grafica en un plano de múltiples dimensiones y el hiperplano es un plano que divide los puntos entre las dos clases que queremos encontrar.
   
### Datos Utilizados 
El [dataset](https://github.com/4lb3rt0r/TC3006_Equipo2/blob/main/retro/Reto%20Selecci%C3%B3n%2C%20configuraci%C3%B3n%20y%20entrenamiento%20del%20modelo/train_clean.csv) que utilizamos es una base de datos donde podemos observar algunas características de los pasajeros del Titanic, tenemos 7 features que podemos utilizar y una columna para hacer pruebas.
  
## Modelo Seleccionado
Después de analizar los resultados que encontramos de los 4 modelos implementados, decidimos utilizar el modelo de **redes neuronales**, ya que tuvo las mejores métricas en nuestro análisis y porque creemos que aún se pueden mejorar esas métricas más.

## Cambios implementados
* Correcciones en README:
    * Inclusión del modelo de ML seleccionado.
    * Inclusión de la descripción del dataset.
* Clarificación del tipo de problema que se trabaja (Clasificación)
* Reorganización de pruebas planeadas en tablas en la introducción. A las pruebas se les asocia un número, y en el apartado de cada modelo se presentan los resultados de dicha prueba. En las tablas se incluyen los hiper-párametros con los que se genera el modelo en cada prueba.
* Se incluyó una tabla de resultados sobre el conjunto de entrenamiento con la finalidad de demostrar que no existe overfitting sobre los datos del conjunto de prueba.
