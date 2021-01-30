printf "Enter the Radius: ";
read r;

x=$(bc -l<<< "2*$r*$(bc -l<<<"22/7")");

echo "The Circumference of the Circle is=> $x"