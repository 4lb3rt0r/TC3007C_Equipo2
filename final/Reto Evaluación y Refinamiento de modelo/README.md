# Evaluación y Refinamiento de modelo 

En este directorio puede encontrar los documentos necesarios para el refinamiento del modelo que implementaremos para la resolucion del reto. Cuenta con los siguientes archivos:
* **train_clean.csv:** Datos de entrenamiento procesados
* **Reto - Redes Neuronales Refinado.ipynb:** Jupyter Notebook que contiene el código del refinamiento del modelo que utilizamos asi como un reporte donde se puede encontrar el analisis de los resultados.

1. Análisis previo a la selección

    1.1 **Herramientas utilizadas:**

   * **Grid Search:**: El grid search es un algoritmo búsqueda exhaustiva que sirve para optimizar los parámetros de un algoritmo de redes neuronales. Definimos ciertos parámetros como número de capas, número de neuronas y funciones de activación que el algoritmo luego cicla entre cada uno de esos parámetros en todas sus posibles configuraciones con la meta de encontrar la configuración óptima para el algoritmo.
   
   * **Datos Utilizados:**: El <a href="https://github.com/4lb3rt0r/TC3006_Equipo2/blob/main/retro/Reto%20Evaluaci%C3%B3n%20y%20Refinamiento%20de%20modelo/train_clean.csv">dataset</a> que utilizamos es una base de datos donde podemos observar algunas características de los pasajeros del Titanic, tenemos 7 features que podemos utilizar y una columna para hacer pruebas.
  
   
    1.2 **Oportunidades de mejora / Trabajo futuro**

    Trabajo pendiente y areas en la que es posible mejorar este análisis.

## Cambios realizados con respecto a la entrega anterior
Se realizaron varias observaciones por parte del docente con respecto a la primera versión de este entregable, por lo cual, se realizaron ciertas modicaciones con el fin de cumplir con los criterios de la rúbrica que no se lograron alcanzar previamente. Es por ello que, a continuación se presentan las modificaciones realizadas al trabajo basados en la retroalimentación proporcionada por criterio faltante:

* **El reporte incluye una sección donde se explique claramente la separación del dataset en entrenamiento, validación, y prueba**
   * Se incluyó una sección dentro del reporte donde se describe detalladamente como es que se divide el dataset utilizado para este entregable, con el fin de que el lector cuente con un recurso que le permita entender de mejor forma cómo se dividen dichos datos y cuál es la finalidad de realizar esta separación.

* **El reporte incluye una sección donde se expliquen las métricas utilizadas para comprobar el desempeño de los modelos desarrollados**
    * Se incluyó una sección dentro del reporte donde se describe detalladamente las métricas a utilizar dentro del análisis de refinamiento del modelo. De forma explícita, se menciona la matriz de riesgos, VP, VN, FP, y FN, métricas como *accuracy*, *precision*, *recall*, *F1*, etc.

* **El reporte incluye sección de interpretación de resultados**
    * Se incluyó una sección dentro del reporte que profundiza un poco más acerca de los resultados obtenido acerca del refinamiento y regularización del modelo de redes neuronales, representando estos resultados dentro de una tabla comparativa casi al final del reporte.

* **El reporte incluye una sección donde se hagan pruebas relacionadas con el efecto de la regularización**
    * Se incluyó una sección dentro del reporte que utiliza la regularización L2 en el modelo, la cual permite reducir irregularidades como overfitting y alta varianza, lo que conlleva penalizar la asignación de pesos excesivos y distribuirlos de una forma más uniforme a cada característica.