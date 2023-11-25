import face_recognition
import cv2
import os

folder_path = 'faces/'
known_face_encodings = []
known_face_names = []

for filename in os.listdir(folder_path):
    if filename.endswith(('.jpg', '.png', '.jpeg')):
        print(filename)
        # Construir la ruta completa del archivo
        file_path = os.path.join(folder_path, filename)

        # Read the image using face_recognition
        face_image = face_recognition.load_image_file(file_path)
        face_encoding = face_recognition.face_encodings(face_image)[0]

        known_face_names.append(filename)
        known_face_encodings.append(face_encoding)

        # cv2.imshow('Image', face_image)
        # cv2.waitKey(0)

# Load test to find faces in
test_image = face_recognition.load_image_file('test/IMG_9520.png')

# Find faces in test image
face_locations = face_recognition.face_locations(test_image)
face_encodings = face_recognition.face_encodings(test_image, face_locations)

# Loop through faces in test image
for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
    matches = face_recognition.compare_faces(known_face_encodings, face_encoding, tolerance=0.5)

    name = "Unkown Person"

    # If match
    if True in matches:
        first_match_index = matches.index(True)
        name = known_face_names[first_match_index]
    
    # Draw rectangle around the face
    cv2.rectangle(test_image, (left, top), (right, bottom), (0, 0, 255), 2)

    # Draw label
    font = cv2.FONT_HERSHEY_DUPLEX
    cv2.putText(test_image, name, (left + 6, bottom - 6), font, 0.5, (255, 255, 255), 1)

converted_img = cv2.cvtColor(test_image, cv2.COLOR_BGR2RGB)

cv2.imshow('Face Detection', converted_img)

cv2.imwrite('output_image.jpg', converted_img)

cv2.waitKey(0)
cv2.destroyAllWindows()