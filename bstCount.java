import java.util.*;
import java.lang.*;
import java.io.*;
 
class bstCount
{
	public static void main (String[] args) throws java.lang.Exception
	{
		System.out.println(countPossibilites(3));
	}
 
	public static int countPossibilites(int n) {
		if(n == 0 || n == 1) {
			return 1;
		}
		int totalTrees = 0, leftSubtreeSum = 0, rightSubtreeSum = 0;
		for(int i = n; i >= 1; i--) {
			leftSubtreeSum = countPossibilites(i-1);
			rightSubtreeSum = countPossibilites(n-i);
			totalTrees += leftSubtreeSum*rightSubtreeSum;
		}
		return totalTrees;
	}
}