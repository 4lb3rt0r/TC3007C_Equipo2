# Limpieza de datos
En este directorio puede encontrar los documentos necesarios para la limpieza de los datos para el entrenamiento del modelo. Cuenta con los siguientes archivos:
* **train.csv:** Datos de entrenamiento sin procesar
* **train_clean.csv:** Datos de entrenamiento procesados
* **clean_training_data.ipynb:** Jupyter Notebook que contiene el códugo y el analisis realizado para la limpieza de datos. A continuación se presenta un indice de los contenidos de dicho archivo

1. Análisis previo a la limpieza

    1.1 **Herramientas utilizadas:**

    Listado de herramientas utilizadas en la limpieza.
    
    1.2 **Selección de Atributos:**

    Selección y justificado de los atributos que consideramos relevantes para el análisis, estos se dividen en las siguientes categorías:

        1. Atributos útiles
        2. Atributos transformados
        3. Atributos inutiles
    
    1.3. **Oportunidades de mejora / Trabajo futuro**

    Trabajo pendiente y areas en la que es posible mejorar este análisis.

2. Limpieza de datos
Código de Python empleado para ejecutar la limpieza de datos según se estableció en el análisis previo.

3. Graficas
Graficación de información utilizada durante el análisis previo.


## Cambios respecto a la última entrega

* En lugar de utilizar la mediana general de la edad, se utiliza el titulo del nombre del pasajero (Mr., Miss., Master.) para extraer clases de edad y aplicar esta mediana en caso de que falte dicho dato.