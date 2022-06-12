from cProfile import label
from email.mime import image
from fileinput import filename
import tkinter as tk
from tkinter.font import BOLD
import numpy as np
import math
import cv2
from tkinter import *
from tkinter import filedialog, filedialog
from PIL import Image, ImageTk

#functions starts

def open_img():                             
    f_types = [('PNG Files','*.png'),('Jpg Files', '*.jpg')] 
    filename = filedialog.askopenfilename(title ='Open',filetypes=f_types)
    img1=Image.open(filename)
    img1= img1.resize((1280,720), Image.ANTIALIAS)
    img1= ImageTk.PhotoImage(img1)
    lbl1.configure(image=img1)
    lbl1.image=img1

    verify(filename)
  
def verify(filename):
    img=cv2.imread(filename)
    img=cv2.resize(img, (1280,700))
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
            cv2.putText(img,"TRIANGLE",(x,y),cv2.FONT_HERSHEY_DUPLEX,1.0,(0,0,0),2)
    #for square and rectangle
        elif len(approx)==4:
            x,y,w,h=cv2.boundingRect(approx)
            if(x+w)==(y+h): #condition for square
                cv2.putText(img, "SQURE", (x, y-5), cv2.FONT_HERSHEY_DUPLEX, 1.0, (0, 0, 0), 2)
            else:# for rectangle
                cv2.putText(img, "RECTANGLE", (x, y-10), cv2.FONT_HERSHEY_DUPLEX, 1.0, (0, 0, 0), 2)
        elif len(approx)==6:
            cv2.putText(img, "HEXAGON", (x, y), cv2.FONT_HERSHEY_DUPLEX, 1.0, (0, 0, 0), 2)
        elif len(approx)==5:
            cv2.putText(img, "PENTAGON", (x-40, y), cv2.FONT_HERSHEY_DUPLEX, 1.0, (0, 0, 0), 2)
        else:
            if circularity<1.20:
                cv2.putText(img, "CIRCLE", (x, y), cv2.FONT_HERSHEY_DUPLEX, 1.0, (0, 0, 0), 2)
            else:
                cv2.putText(img, "Something Else", (x, y), cv2.FONT_HERSHEY_DUPLEX, 1.0, (0, 0, 0), 2)
    
    cv2.imwrite("test.png", img)
    #cv2.waitKey(0)
    #cv2.destroyAllWindows()


def result():
    photo=Image.open("test.png")
    photo= photo.resize((1280, 700), Image.ANTIALIAS)
    photo= ImageTk.PhotoImage(photo)
    lbl1.configure(image=photo)
    lbl1.image=photo

button_mode=True

def customize():
    global button_mode

    if button_mode: #dark mode
        button3.config(image=dark,bd=0,bg="#21293c",activebackground="#21293c",highlightbackground="#21293c",highlightcolor="#21293c")
        button1.config(image=searchbtn2,bd=0,bg="#21293c",activebackground="#21293c",highlightbackground="#21293c",highlightcolor="#21293c")
        button.config(image=uploadbtn2,bd=0,bg="#21293c",activebackground="#21293c",highlightbackground="#21293c",highlightcolor="#21293c")
        displ.config(bg="#21293c",foreground="#ededed")
        lbl1.config(text="No File Chosen",bg="#2f3b53",font=("Helvetica",18,BOLD),foreground="#cfd7ff")
        root.config(bg="#21293c")
        button_mode=False
    else:       #light mode
        button3.config(image=light,bg="#e8f0f2",activebackground="#e8f0f2",highlightbackground="#e8f0f2",highlightcolor="#e8f0f2")
        button.config(image=uploadbtn,bd=0,bg="#e8f0f2",activebackground="#e8f0f2",highlightbackground="#e8f0f2",highlightcolor="#e8f0f2")
        button1.config(image=Check,bd=0,bg="#e8f0f2",activebackground="#e8f0f2",highlightbackground="#e8f0f2",highlightcolor="#e8f0f2")
        displ.config(bg="#e8f0f2",foreground="#21293c")
        lbl1.config(text="No File Chosen",bg="#bcc8d8",font=("Helvetica",18,BOLD),foreground="#5f5f5f")
        root.config(bg="#e8f0f2")
        button_mode=True

#End of functions 

#Gui starts
#ctypes.wind11.shcore.SetProcessDpiAwareness(1)

root=Tk()
root.title("SHAPE DETECTION WITH PYTHON")
root.wm_iconbitmap(r"pattern-recognition.png")
root.state('zoomed') 
root.config(bg="#e8f0f2")


#lbl=Label(root,text="No file chosen",bg="#bcc8d8",font=("Arial",18,BOLD),foreground="#5f5f5f")
#lbl.place(x=5,y=68,width=790,height=655) 

displ=tk.Label(root,font="Helvetica 18 bold",bg="#e8f0f2",foreground="#21293c")
displ.place(x=99,y=5)

lbl1=tk.Label(root,text="No File Chosen",bg="#bcc8d8",font=("Helvetica",18,BOLD),foreground="#2f3b53")
lbl1.place(x=100,y=35,width=1280,height=700) 


uploadbtn=Image.open("button 2.png")
#uploadbtn=uploadbtn.resize((220,70),Image.ANTIALIAS)
uploadbtn=ImageTk.PhotoImage(uploadbtn)
button=Button(root,image=uploadbtn,bd=0,bg="#e8f0f2",activebackground="#e8f0f2",command=open_img,highlightbackground="#e8f0f2",highlightcolor="#e8f0f2")
button.place(x=140,y=750)

Check=Image.open("button 1.png")
#Check=Check.resize((200,60),Image.ANTIALIAS)
Check=ImageTk.PhotoImage(Check)
button1=Button(root,image=Check,bd=0,bg="#e8f0f2",activebackground="#e8f0f2",command=result,highlightbackground="#e8f0f2",highlightcolor="#e8f0f2")
button1.place(x=1111,y=750)


uploadbtn2=Image.open("button 7.png")
#uploadbtn2=uploadbtn2.resize((200,50),Image.ANTIALIAS)
uploadbtn2=ImageTk.PhotoImage(uploadbtn2)

searchbtn2=Image.open("button 6.png")
#searchbtn2=searchbtn2.resize((200,50),Image.ANTIALIAS)
searchbtn2=ImageTk.PhotoImage(searchbtn2)

dark=Image.open("dark.png")
dark=dark.resize((90,40),Image.ANTIALIAS)
dark=ImageTk.PhotoImage(dark)

light = Image.open("light.png")
light = light.resize((90, 40), Image.ANTIALIAS)
light = ImageTk.PhotoImage(light)
button3=Button(root,image=light,bd=0,bg="#e8f0f2",width=90,height=40,activebackground="#e8f0f2",command=customize,highlightbackground="#e8f0f2",highlightcolor="#cfd7ff")
button3.place(x=1430,y=10)

mainloop()
#darkmode color #21293c     
#background blue #cfd7ff
#background skin #ffe3cf
#background biscuit #ffedcf
#background label dark #00476c
#background label light #bcc8d8
#background label font dark #5f5f5f