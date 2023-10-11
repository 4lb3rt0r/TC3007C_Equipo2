# Momento de Retroalimentación. Datos del Proyecto 

En este directorio puede encontrar los archivos y documentos necesarios correspondientes a la estructura de componentes, arquitectura de software y un ejemplo de los datos utilizados para el reto. Cuenta con los siguientes archivos:
* **Documento de Datos del Proyecto:** Documento PDF que sirve para establecer la arquitectura del software, el almacenamiento de datos y el enfoque en cuanto a si se hará uso de Big Data o no.
* **Dataset de Ejemplo:** Archivo ZIP que contiene los scripts principales utilizados para el procesamiento y generación de datasets, así como para la asociación de patrones y características de un rostro y su posterior reconocimiento. También se incluyeron distintas carpetas en las cuales se colocaron ejemplos de un dataset dividido en sets de datos de entrada, entrenamiento, pruebas y datos de salida:

    * *Carpeta input*: Incluye un video de ejemplo que se utiliza con el script *video_to_images.py*, lo que permite transformar dicho video en múltiples imágenes del rostro de una persona, siendo este el dataset de entrenamiento.
    * *Carpeta outputs*: Es aqui dónde se guardan los videos de pruebas pero incluyendo el reconocimiento facial.
    * *Carpeta test*: Incluye un video de ejemplo que se utiliza con el script *face_video_recognizer.py*, lo que permite reconocer el rostro previamente cargado al modelo pre-entrenado y realizar el reconocimiento facial.
    * *Carpeta train*: Incluye un ejemplo del set de imágenes del rostro de una persona obtenido del script *video_to_images.py*, y que posteriormente será utilizado por el script *faces_train.py*, con la finalidad de que el modelo pre-entrenado asocie las características del rostro con el nombre de la persona a reconocer.