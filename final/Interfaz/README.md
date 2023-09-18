# Reto Solución (interfaz)

En esta carpeta se implementa la solución para el reto del modulo de hardware. Esta consiste en la implementación de una interfaz web desarrollada con Vue.js que permita ejecutar predicciones en un modelo de machine learning sobre un microcontrolador ESP32. 

## Archivos

* ```Reto_Redes_Neuronales_HW.ipynb```: Generación del modelo de redes neuronales utilizado para el reto (Competencia Titanic de Kaggle). Este modelo se genera utilizando Tensor Flow, y el mismo se exporta a lenguaje C utilizando la librería ```tinymlgen```, con la finalidad de ejecutarlo en nuestro microcontrolador ESP32.
* ```titanic_model.h```: Contiene el código en C exportado para nuestro modelo de redes neuronales.
* ```titanic_prediction.ino```: Código ejecutado en el microcontrolador que realiza una lectura a nuestra base de datos en firebase para obtener los datos con los que ejecuta una predicción que luego escribe en la misma base de datos.
* ```web```: Directorio en el que se encuentra el proyecto de Vue empleado para generar la interfaz web. Cuenta con las opciones para realizar consultas empelando un formulario, haciendo carga de un archivo *.csv*, y despliega información de los resultados del modelo ejecutado en el microcontrolador. Puede visitar una versión hosteada en el mismo proyecto de firebase [aquí](https://database-iot-e86e3.web.app).