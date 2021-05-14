import java.util.*;
public class Main{
    public static void main(String args[])
    {  
         Scanner s=new Scanner(System.in);
        int n,i,j,r,l;
        n=s.nextInt();
    int nums[]=new int[n];
    for (i=0;i<n;i++)
    nums[i]=s.nextInt();
    
        
        
        int min=Integer.MAX_VALUE,max=Integer.MIN_VALUE;
        for( i=1; i<nums.length; i++){
            if(nums[i] < nums[i-1]){
                min = Math.min(min,nums[i]);
                max = Math.max(max,nums[i-1]);
            }
        }
       
        if(min == Integer.MAX_VALUE)
        {
        System.out.println("0");
        System.exit(0);
        }
        else{
            
        int left = 0, right = nums.length-1;
        while(nums[left] <= min || nums[right] >= max){
            if(nums[left] <= min)left++;
            if(nums[right] >= max)right--;
        }
        System.out.println(right - left + 1);
        }
    }
}