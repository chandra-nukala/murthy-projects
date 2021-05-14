
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    int i,j,sum,k,n,c=0;
	    Scanner s=new Scanner(System.in);
	    n=s.nextInt();
	    int a[]=new int[n];
	    for(i=0;i<n;i++)
	    a[i]=s.nextInt();
	   
	    k=s.nextInt();
	 for ( i = 0; i < n; i++) {
             
            sum = 0;
            for ( j = i; j < n; j++) {
                 
                // calculate required sum
                sum += a[j];
                 
                // check if sum is equal to
                // required sum
                if (sum == k)
                    c++;
            }
        }
        System.out.println(c);
	}
}
