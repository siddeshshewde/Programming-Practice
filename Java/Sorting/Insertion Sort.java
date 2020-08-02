/*
# Category     : Sorting
# Type         : Insertion Sort
# Time         : 
# Space        : 

*/

package javaapplication7;

import java.util.Arrays;

public class JavaApplication7 
{
    public static void main(String[] args) 
    {
        int [] array = {1, 5, 6, 2, 3, 9, 6, 6, 8};
        long start = System.currentTimeMillis();
        
        System.out.println(Arrays.toString(insertion_sort(array)));
        
        long end = System.currentTimeMillis();
        long time = end-start;
        System.out.println("Start Time: " + start);
        System.out.println("End Time: " + end);
        System.out.println("Total Time Taken: " + time);
    }
    
    public static int[] insertion_sort(int a[])
    {
        int n = a.length;
        
        for (int i = 0 ; i < n ; ++i)
        {
            int j = i;
            
            while (j > 0 && a[i] < a[i-1])
            {
                int temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
                j = j - 1;
            }
        }
        return a;
    }
    
}