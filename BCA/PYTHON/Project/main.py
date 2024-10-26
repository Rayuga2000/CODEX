import numpy as np
import math
import cv2
import sys

img=cv2.imread(sys.argv[1])
img=cv2.resize(img, (1280,720))
imggray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY) #convert img to Grayscale
_,thresh=cv2.threshold(imggray, 240,255,cv2.THRESH_BINARY) #convert Grayscale image to Binary
contours,_=cv2.findContours(thresh, cv2.RETR_TREE,cv2.CHAIN_APPROX_SIMPLE) #IT WILL FIND THE CONTOUR IN IMAGE

for contour in contours:
    approx=cv2.approxPolyDP(contour,0.01*cv2.arcLength(contour,True),True) #this method approximates a polygonal curve
    cv2.drawContours(img,[approx],0,(0,0,0),3) #to draw contour
    x=approx.ravel()[0]
    y=approx.ravel()[1]-7 #defining the x and y point of shape to write text on it

    Area = cv2.contourArea(approx)
    Perimeter=cv2.arcLength(approx,True)
    circularity=(Perimeter**2)/(4*math.pi*(Area)) #find out the circularity of the object
    
    #if else conditions to find different shapes
    #for triangle
    if len(approx)==3: #triangle has 3 sides
        cv2.putText(img,"Triangle",(x,y),cv2.FONT_HERSHEY_COMPLEX,0.7,(0,0,0),2)
    #for square and rectangle
    elif len(approx)==4:
        x,y,w,h=cv2.boundingRect(approx)
        if(x+w)==(y+h): #for square
            cv2.putText(img, "Square", (x, y-5), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
        else:# for rectangle
            cv2.putText(img, "Rectangle", (x, y-10), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
    # for Hexagon
    elif len(approx)==6:
        cv2.putText(img, "Hexagon", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
    elif len(approx)==8:
        cv2.putText(img, "Octagon", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
    # for Pentagon
    elif len(approx)==5:
        cv2.putText(img, "Pentagon", (x-40, y), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
    else:
        # for Circle
        if circularity<1.20:
            cv2.putText(img, "Circle", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
        else:
            cv2.putText(img, "Something Else", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
       
cv2.imshow("Shape", img)
cv2.waitKey(0)
cv2.destroyAllWindows()
