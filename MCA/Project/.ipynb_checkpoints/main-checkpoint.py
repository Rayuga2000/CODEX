import cv2
import numpy

img=cv2.imread("x.tif")
mask=cv2.imread("mask.tif")
cv2.imshow("Original",img)
cv2.imshow("Mask",mask)
cv2.waitKey(0)