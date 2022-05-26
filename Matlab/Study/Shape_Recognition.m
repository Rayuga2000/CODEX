clc
% pentagon.png
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
        if f<=240
            BW(i,j)=255;
        elseif f>228 && f<256
            BW(i,j)=0;
        end
    end
end

% subplot(2,2,1);
% imshow(BW);
% title('GreyScale');
% imcontour(GF)
% imcontour(GF,-g)
% subplot(2,2,2);
% [C,h] = imcontour(BW,1,'-g');
% title('Contour');
% clabel(C,h) 
% 
% subplot(2,2,3);
% 
% title('Contour');


% x=h.XData;
% y=h.YData;
% z=h.ZData;

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

[L,n]=bwlabel(BW);%get label matrix(check/detect no. of objects in the image)
vislabels(L);
fprintf(' %u\n',n);

stats=regionprops(L,'all');%get all properties of the objects in a structure

for i=1:n
    rectangle('Position',stats(i).BoundingBox,'EdgeColor','b','LineWidth',2);%show rectangle around the objects
%     pause;
end
% for i=1:n
%     circularity=floor((4*pi*(stats(i).Area)/stats(i).Perimeter^2));
%     
%     if circularity==1
%         shape='Circle';
%     elseif circularity==0
%         py.Area;
%     end
% end
%     
%     fprintf('%u) %u',i,circularity);
%     fprintf(' %s\n',shape);
%     fprintf(' %u\n',c(i).ConvexArea);
% end

