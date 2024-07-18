import java.util.*;
public class Calculator{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        int a=sc.nextInt();
        Character o=sc.next().charAt(0);
        int b=sc.nextInt();
        int c;
        if(o=='+'){
            c=a+b;
            System.out.print(c);
        }else if(o=='-'){
            c=a-b;
            System.out.print(c);
        }else if(o=='*'){
            c=a*b;
            System.out.print(c);
        }else if(o=='/'){
            c=a/b;
            System.out.print(c);
        }else{
            System.out.print("Nthg");
        }

    }
}