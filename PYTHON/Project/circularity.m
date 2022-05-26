function c=circularity(img,contour)
clc 
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

    [L,n]=bwlabel(BW);%get label matrix(check/detect no. of objects in the image)

    stats=regionprops(L,'all');%get all properties of the objects in a structure

    for i=1:n
        arr=floor(stats(i).Perimeter.^2)./(4*pi*(stats(i).Area));
        if (arr<1.05)
            c=true;
        else
            c=false;
        end
    end
    
end

