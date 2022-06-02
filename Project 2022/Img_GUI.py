from fileinput import filename
import re
import tkinter as tk
from tkinter.font import BOLD
import numpy as np
import math
import cv2
from tkinter import *
from tkinter import filedialog, filedialog
from PIL import Image, ImageTk

filename=1

def open_img():                             
    f_types = [('Jpg Files', '*.jpg'),
    ('PNG Files','*.png')] 
    filename = filedialog.askopenfilename(title ='Open',filetypes=f_types)
    img1=Image.open(filename)
    img1= img1.resize((250, 250), Image.ANTIALIAS)
    img1= ImageTk.PhotoImage(img1)
    lbl.configure(image=img1)
    lbl.image=img1
  
def verify(filename):
    img=cv2.imread(filename)
    #output = img.copy()
    img=cv2.resize(img, (600,500))
    #cv2.imshow("original", img)
    #lets detect shapes
    imggray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
    _,thresh=cv2.threshold(imggray, 240,255,cv2.THRESH_BINARY) #find the threshold of color in image

    contours,_=cv2.findContours(thresh, cv2.RETR_TREE,cv2.CHAIN_APPROX_SIMPLE) #IT WILL FIND THE CONTOUR IN IMAGE


    for contour in contours:
        approx=cv2.approxPolyDP(contour,0.01*cv2.arcLength(contour,True),True) #this method approximate polygonal curve
        cv2.drawContours(img,[approx],0,(0,0,0),3) #to draw contour
        x=approx.ravel()[0]
        y=approx.ravel()[1]-7 #defining the x and y point of shape to write text on it

        Area = cv2.contourArea(approx)
        Perimeter=cv2.arcLength(approx,True)
        circularity=(Perimeter**2)/(4*math.pi*(Area))

    #now if else conditions to find different shapes
    #for triangle
        if len(approx)==3: #triangle has 3 sides
            cv2.putText(img,"Triangle",(x,y),cv2.FONT_HERSHEY_COMPLEX,0.7,(0,0,0),2)
    #for square and rectangle
        elif len(approx)==4:
            x,y,w,h=cv2.boundingRect(approx)
            if(x+w)==(y+h): #condition for square
                cv2.putText(img, "Square", (x, y-5), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
            else:# for rectangle
                cv2.putText(img, "Rectangle", (x, y-10), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
        elif len(approx)==6:
            cv2.putText(img, "Hexagon", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
        elif len(approx)==5:
            cv2.putText(img, "Pentagon", (x-40, y), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
        else:
            if circularity<1.20:
                cv2.putText(img, "Circle", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
            else:
                cv2.putText(img, "Something Else", (x, y), cv2.FONT_HERSHEY_COMPLEX, 0.7, (0, 0, 0), 2)
    
    cv2.imshow("Shape", img)
    cv2.waitKey(0)
    cv2.destroyAllWindows()


button_mode=True
def customize():
    global button_mode

    if button_mode:
        button3.config(image=dark,bd=0,bg="#001b2f",activebackground="#001b2f",highlightbackground="#001b2f",highlightcolor="#001b2f")
        button.config(image=uploadbtn2,bd=0,bg="#001b2f",activebackground="#001b2f",highlightbackground="#001b2f",highlightcolor="#001b2f")
        button1.config(image=searchbtn2,bd=0,bg="#001b2f",activebackground="#001b2f",highlightbackground="#001b2f",highlightcolor="#001b2f")
        lbl.config(text="No file chosen",bg="#00476c",font=("Arial",18,BOLD),foreground="#cfd7ff")
        root.config(bg="#001b2f")
        button_mode=False
    else:
        button3.config(image=light,bg="#cfd7ff",activebackground="#cfd7ff",highlightbackground="#cfd7ff",highlightcolor="#cfd7ff")
        button.config(image=uploadbtn,bd=0,bg="#cfd7ff",activebackground="#cfd7ff",highlightbackground="#cfd7ff",highlightcolor="#cfd7ff")
        button1.config(image=searchbtn,bd=0,bg="#cfd7ff",activebackground="#cfd7ff",highlightbackground="#cfd7ff",highlightcolor="#cfd7ff")
        lbl.config(text="No file chosen",bg="#a7b6ff",font=("Arial",18,BOLD),foreground="#001b2f")
        root.config(bg="#cfd7ff")
        button_mode=True



root=Tk()
root.title("Img Gui")
#root.wm_iconbitmap(r"image-processing (1).ico")
root.geometry("680x595")
root.resizable(width=False,height=False)
root.config(bg="#cfd7ff")


lbl=Label(root,text="No file chosen",bg="#a7b6ff",font=("Arial",18,BOLD),foreground="#5f5f5f")
lbl.place(x=10,y=100,width=250,height=250) 

uploadbtn=Image.open("Upload button.png")
uploadbtn=uploadbtn.resize((120,40),Image.ANTIALIAS)
uploadbtn=ImageTk.PhotoImage(uploadbtn)
button=Button(root,image=uploadbtn,bd=0,bg="#cfd7ff",width=120,height=40,activebackground="#cfd7ff",command=open_img,highlightbackground="#cfd7ff",highlightcolor="#cfd7ff")
button.place(x=18,y=520)

searchbtn=Image.open("Search button.png")
searchbtn=searchbtn.resize((140,35),Image.ANTIALIAS)
searchbtn=ImageTk.PhotoImage(searchbtn)
button1=tk.Button(root,image=searchbtn,bd=0,bg="#cfd7ff",width=140,height=35,activebackground="#cfd7ff",highlightbackground="#cfd7ff",highlightcolor="#cfd7ff",command=verify(filename))
button1.place(x=520,y=520)

uploadbtn2=Image.open("Dark Ubtn2.png")
uploadbtn2=uploadbtn2.resize((120,38),Image.ANTIALIAS)
uploadbtn2=ImageTk.PhotoImage(uploadbtn2)

searchbtn2=Image.open("Dark Sbtn.png")
searchbtn2=searchbtn2.resize((140,35),Image.ANTIALIAS)
searchbtn2=ImageTk.PhotoImage(searchbtn2)

dark=Image.open("Dark mode.png")
dark=dark.resize((90,40),Image.ANTIALIAS)
dark=ImageTk.PhotoImage(dark)

light = Image.open("Light mode.png")
light = light.resize((90, 40), Image.ANTIALIAS)
light = ImageTk.PhotoImage(light)
button3=Button(root,image=light,bd=0,bg="#cfd7ff",width=90,height=40,activebackground="#cfd7ff",command=customize,highlightbackground="#cfd7ff",highlightcolor="#cfd7ff")
button3.place(x=590,y=10)

mainloop()
#darkmode color #001b2f
#background blue #cfd7ff
#background skin #ffe3cf
#background biscuit #ffedcf
#background label dark #00476c
#background label light #a7b6ff
#background label font dark #5f5f5f