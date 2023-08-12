/*from a string 'helloWorldMyselfTushar' print the words in the string seperately.
First word has all its letters lowercase all other words start from a capital letter.
Also change the output case.i.e-> helloWorldMyselfTushar => HELLO wORLD mYSELF tUSHAR*/

import java.io.*;

public class test{
    static String reverseCase(String str){
        char[] c=str.toCharArray();
        int j=0;

        for(char i:c){
            if(Character.isUpperCase(i)){
                c[j++]=Character.toLowerCase(i);
            }
            else{
                c[j++]=Character.toUpperCase(i);
            }
        }

        return new String(c);
    }

    static void display(String str){
        char[] c=str.toCharArray();

        for(char i:c){
            if(Character.isLowerCase(i)){
                System.out.print(" ");
            }
            System.out.print(i);
        }
    }
    public static void main(String[] args){
        String str="helloWorldMyselfTushar";
        str=reverseCase(str);
        System.out.println(str);
        display(str);
        System.out.println();
    }
}