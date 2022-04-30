clc;
clear;
close all;

img=imread('y.jpg');%read image file
img=imresize(img,[255,255]);%resize image into 300x300
GI=im2gray(img);%convert image to grayscale

BW=GI;
[r,c]=size(BW);%get the height,width of image

%run loop and change the values to 0 and 255 only
for i=1:r
    for j=1:c
        f=BW(i,j);
        if f<=127
            BW(i,j)=0;
        elseif f>127 && f<256
            BW(i,j)=255;
        end
    end
end

subplot(1,2,1);%create a grid in this order (row,col,element)
imshow(GI);%show image
title('Grayscale');%show title
subplot(1,2,2);
imshow(BW);
title('Binary');

