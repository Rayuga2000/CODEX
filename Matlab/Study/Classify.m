%------------------------------------------------------------------------
% AL-AZHAR UNIVERSITY
% FACULTY OF ENGINEERING				
% SYSTEMS & COMPUTERS ENGINEERING Department
%------------------------------------------------------------------------
% Author : Ahmed Samieh Abd El-Wahab
% Date   : 14 December 2006
%------------------------------------------------------------------------
% Shapes Classifier
% Step 1: Read image Read in
% Step 2: Convert image from rgb to gray 
% Step 3: Threshold the image
% Step 4: Invert the Binary Image
% Step 5: Find the boundaries Concentrate
% Step 6: Determine Shapes properties
% Step 7: Classify Shapes according to properties
% Square      = 3
% Rectangular = 2
% Circle      = 1
% UNKNOWN     = 0
%------------------------------------------------------------------------
function W = Classify(ImageFile)
% Step 1: Read image Read in
RGB = imread(ImageFile);
subplot(2,2,1),
imshow(RGB),
title('Original Image');

% Step 2: Convert image from rgb to gray 
GRAY = rgb2gray(RGB);
subplot(2,2,2),
imshow(GRAY),
title('Gray Image');

% Step 3: Threshold the image Convert the image to black and white in order
% to prepare for boundary tracing using bwboundaries. 
threshold = graythresh(GRAY);
BW = im2bw(GRAY, threshold);
subplot(2,2,3),
imshow(BW),
title('Binary Image');

% Step 4: Invert the Binary Image
BW = ~ BW;
subplot(2,2,4),
imshow(BW),
title('Inverted Binary Image');

% Step 5: Find the boundaries Concentrate only on the exterior boundaries.
% Option 'noholes' will accelerate the processing by preventing
% bwboundaries from searching for inner contours. 
[B,L] = bwboundaries(BW, 'noholes');

% Step 6: Determine objects properties
STATS = regionprops(L, 'all'); % we need 'BoundingBox' and 'Extent'

% Step 7: Classify Shapes according to properties
% Square = 3 = (1 + 2) = (X=Y + Extent = 1)
% Rectangular = 2 = (0 + 2) = (only Extent = 1)
% Circle = 1 = (1 + 0) = (X=Y , Extent < 1)
% UNKNOWN = 0

figure,
imshow(RGB),
title('Results');
hold on
for i = 1 : length(STATS)
  W(i) = uint8(abs(STATS(i).BoundingBox(3)-STATS(i).BoundingBox(4)) < 0.1);
  W(i) = W(i) + 2 * uint8((STATS(i).Extent - 1) == 0 );
  centroid = STATS(i).Centroid;
  switch W(i)
      case 1
%           subplot(1,3,1);
          plot(centroid(1),centroid(2),'O');
%           title('Circle');
      case 2
%           subplot(1,3,2);
          plot(centroid(1),centroid(2),'x');
%           title('Rectangle');
      case 3
%           subplot(1,3,3);
          plot(centroid(1),centroid(2),'s');
%           title('Square');
  end
end
return