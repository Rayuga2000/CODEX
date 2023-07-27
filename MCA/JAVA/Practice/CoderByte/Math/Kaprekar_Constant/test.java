/*Have the function take the num parameter being passed
which will be a 4-digit number with at least two distinct digits.
Your program should perform the following routine on the number: Arrange the digits in descending order 
and in ascending order (adding zeroes to fit it to a 4-digit number), and subtract the smaller number
from the bigger number. Then repeat the previous step. Performing this routine will always cause you to
reach a fixed number: 6174.
Then performing the routine on 6174 will always give you 6174 (7641-1467-6174).
Your program should return the number of times this routine must be performed until 6174 is reached.
For example: if num is 3524 your program should return 3 because of the following steps:
(1) 5432-2345 3087, (2) 8730-0378 = 8352, (3) 8532-2358=6174.*/

import java.util.*;
import java.util.stream.*;

public class test{
    static int count=0;

    static int getDiff(char[] numArr){
        Arrays.sort(numArr);
        int num1=Integer.parseInt(new String(numArr));//creating a new string using a char array then converting it into an int
        //swapping elements
        for(int i=0;i<numArr.length/2;i++){
            char temp=numArr[i];
            numArr[i]=numArr[numArr.length-1-i];
            numArr[numArr.length-1-i]=temp;
        }
        int num2=Integer.parseInt(new String(numArr));

        int diff=num2-num1;

        /*formatting the number into a string adding space at the end if the no. is not 4 digits
        then replacing the spaces with 0 then typecasting it into int and returning it*/
        return Integer.parseInt(String.format("%-4d",diff).replace(' ','0'));
    }

    static void Kaprekar_Constant(int num){
        if(num==6174){
            System.out.println("No. of steps: "+count);
            return;
        }

        char[] numArr=Integer.toString(num).toCharArray();
        HashSet<Character> s=new HashSet<Character>();//creating an empty set
        //for loop using elements of the array
        for(char i:numArr){
            s.add(i);//i represents each array element of numArr
        }

        if(numArr.length<4 || s.size()<2){
            System.out.println("Can't reach constant");
            return;
        }

        int diff=getDiff(numArr);
        count++;

        Kaprekar_Constant(diff);
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the Number: ");
        Kaprekar_Constant(sc.nextInt());
    }
}