/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;

public class Main
{
	public static void main(String[] args) {
	
	Scanner s=new Scanner(System.in);
	
	int n;
	n=s.nextInt();
	int arr1[]=new int [n];
	int arr2[]=new int[n];
	
	for(int i=0;i<n;i++)
	arr1[i]=s.nextInt();
	
	for(int i=0;i<n;i++)
    arr2[i]=s.nextInt();
	
	 int maxLen = 0;
 
    
    for (int i=0; i<n; i++)
    {
       int sum1 = 0, sum2 = 0;
 
     
       for (int j=i; j<n; j++)
       {
           // Update sums like sub arrays
           sum1 += arr1[j];
           sum2 += arr2[j];
 
           if (sum1 == sum2)
           {
             int len = j-i+1;
             if (len > maxLen)
                maxLen = len;
           }
       }
    }
    System.out.println(maxLen);
	}
}
