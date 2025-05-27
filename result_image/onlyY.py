import cv2

img = cv2.imread('8.jpeg')
ycbcr = cv2.cvtColor(img, cv2.COLOR_BGR2YCrCb)
y_channel = ycbcr[:, :, 0]
cv2.imwrite('output_y_only.jpg', y_channel)
