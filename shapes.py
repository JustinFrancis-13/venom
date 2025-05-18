import cv2 as cv
import numpy as np

# Create a blank image
blank_img = np.zeros((500, 500, 3), dtype=np.uint8)
print(blank_img)

# Show the initial blank image
cv.imshow("Window Name", blank_img)

# Draw a rectangle
cv.rectangle(blank_img, (200, 200), (300, 300), (255, 0, 0), -1)
cv.imshow("blank", blank_img)

# Draw a white line
cv.line(blank_img, (0, 0), (250, 250), (255, 255, 255), 5)
cv.imshow("blank", blank_img)

# Draw a red line
cv.line(blank_img, (250, 250), (350, 250), (0, 0, 250), thickness=2)
cv.imshow("blank", blank_img)

# Draw a green line
cv.line(blank_img, (250, 250), (350, 350), (0, 255, 0), 3)
cv.imshow("blank", blank_img)

# Draw a yellow circle
cv.circle(blank_img, (400, 400), 50, (0, 255, 255), -1)  # Center at (400, 400), radius 50
cv.imshow("blank", blank_img)

# Add text
cv.putText(blank_img, "Hello", (100, 400), cv.FONT_HERSHEY_SIMPLEX, 2, (0, 255, 255), 3)
cv.imshow("blank", blank_img)

# Wait for a key press and close all windows
cv.waitKey(0)
cv.destroyAllWindows()
