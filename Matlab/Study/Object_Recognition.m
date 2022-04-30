clc;
clear all;
close all;

nnet=alexnet;
img=imread('y.png');
img=imresize(img,[227,227]);
label=classify(nnet,img);
imshow(img);
title=(upper(char(label)));
fprintf((upper(char(label))));