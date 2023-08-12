import os
import skimage.io as sk
import glob
import cv2
import numpy as np

path = "./image_DB"
f_names=[]

for i in range(27,41):
    for root, d_names, f_names in os.walk(path+'/'+str(i)):
        f_names=f_names
        root=root
    #Read images
    ground = sk.imread(root+'/'+f_names[0])
    img = sk.imread(root+'/'+f_names[1])
    mask = sk.imread(root+'/'+f_names[2])
    
    #print(ground.shape,img.shape,mask.shape)
    #Convert images from 3D to 2D
    #ground=ground.reshape(584,565)
    #img=img.flatten().reshape(584,565)
    #mask=mask.reshape(584,565)
    ground=hash(np.copy(ground))

    sk.imshow("ground",ground)
    sk.imshow("img",img)
    sk.imshow("mask",mask)

    cv2.waitKey(0)
    cv2.destroyAllWindows()
