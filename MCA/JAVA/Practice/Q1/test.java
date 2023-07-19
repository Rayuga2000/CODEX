import java.io.*;
import java.util.* ;

public class test{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();

        for(int y=0;y<x;y++){
            System.out.print("Enter row and col: ");
            int row=sc.nextInt();
            int column=sc.nextInt();
            int[][] matrix=new int[row][column];
            
            System.out.print("Enter data:\n");
            for(int i=0;i<row;i++){
                for(int j=0;j<column;j++){
                    matrix[i][j]=sc.nextInt();
                }
            }
            setZeros(row, column, matrix);
        }
    }
    public static void setZeros(int row,int column,int matrix[][]){
        int i,j;
        Stack<Integer> stack = new Stack<Integer>();

        for(i=0;i<row;i++){
            for(j=0;j<column;j++){
                if(matrix[i][j]==0){
                    stack.push(j);
                    stack.push(i);
                }
            }
        }

        while(!stack.isEmpty()){
            i=stack.pop();j=0;
            while(j<column){
                matrix[i][j++]=0;
            }

            j=stack.pop();i=0;
            while(i<row){
                matrix[i++][j]=0;
            }
        }
            
        System.out.println("\nNew Matrix:\n");
        for(i=0;i<row;i++){
            for(j=0;j<column;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
}