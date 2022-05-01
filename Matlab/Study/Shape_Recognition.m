clc;
clear;
close all;

img=imread('y.jpg');%read image file
img=imresize(img,[255,255]);%resize image into 300x300
GI=im2gray(img);%convert image to grayscale


BW=GI;
BW2=imbinarize(GI);
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

GF=imgaussfilt(BW);
% BW3=imfill(GF);

subplot(2,2,1);%create a grid in this order (row,col,element)
imshow(GI);%show image
title('Grayscale');%show title

subplot(2,2,2);
imshow(BW);
title('User Binary');

% subplot(2,2,3);
% imshow(BW3);
% title('Filled Binary');

subplot(2,2,4);
imshow(GF);
title('Filterd Image');

stats = regionprops(GF,'Area');
fprintf('%3u',stats.Area);



