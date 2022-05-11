clc;
clear;
close all;

img=imread('y.jpg');%read image file
img=imresize(img,[255,255]);%resize image into 300x300
GI=im2gray(img);%convert image to grayscale

GF=imgaussfilt(GI);

BW=GF;
[r,c]=size(BW);%get the height,width of image

%run loop and change the values to 0 and 255 only
for i=1:r
    for j=1:c
        f=BW(i,j);
        if f<=228
            BW(i,j)=255;
        elseif f>228 && f<256
            BW(i,j)=0;
        end
    end
end

subplot(2,2,1);
imshow(img);
title('Image');

subplot(2,2,2);%create a grid in this order (row,col,element)
imshow(GI);%show image
title('Grayscale');%show title

subplot(2,2,3);
imshow(GF);
title('Filterd Image');

subplot(2,2,4);
imshow(BW);
title('Binary');



